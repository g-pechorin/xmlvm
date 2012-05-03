/* Copyright (c) 2002-2011 by XMLVM.org
 *
 * Project Info:  http://www.xmlvm.org
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

package org.crossmobile.source.out.cutils;

import java.util.List;
import java.util.Set;

import org.crossmobile.source.ctype.CArgument;
import org.crossmobile.source.ctype.CFunction;
import org.crossmobile.source.ctype.CLibrary;
import org.crossmobile.source.ctype.CStruct;
import org.crossmobile.source.guru.Advisor;
import org.crossmobile.source.out.COut;
import org.crossmobile.source.xtype.AdvisorMediator;

/**
 * This class servers as a helper class for wrapper generation of the methods.
 * The helper class helps in constructing the string for arguments of method,
 * the return statement for a method, the method name (in case the IR represents
 * the method name different from that of actual Objective-C method).
 * 
 */
public class CMethodHelper {

    private String         objectName = null;
    private CLibrary       lib        = null;
    private Set<CFunction> func       = null;


    CMethodHelper(String objectName, CLibrary lib) {
        this.objectName = objectName;
        this.lib = lib;
        this.func = lib.getFunctions();
    }

    /**
     * Inspects the return type of a method and returns the return statement for
     * a particular method
     * 
     * @param retType
     *            - return type of the method
     * @return 'return statement' for a particular method
     */
    public String getReturnString(String retType, StringBuilder classInitializer) {
        if (!ignore(retType) && !retType.contains("[]")) {
            if (retType.equals("Object"))
                return "return xmlvm_get_associated_c_object (objCObj);";
            else if (Advisor.isNativeType(retType))
                return "return objCObj;";
            else if (CStruct.isStruct(retType))
                return "return from" + retType + "(objCObj);";
            else if (requiresConversion(retType))
                return "return from" + getMappedDataType(retType) + "(objCObj);";
            else if (AdvisorMediator.isCFOpaqueType(retType))
                return "return jvar;";
            else {
                if (!retType.equals("Class"))
                    classInitializer.append(C.T + "if (!__TIB_"
                            + lib.getPackagename().replace(".", "_") + "_" + retType
                            + ".classInitialized) __INIT_" + lib.getPackagename().replace(".", "_")
                            + "_" + retType + "();" + C.N);
                return "return xmlvm_get_associated_c_object (objCObj);";
            }
        } else
            return null;

    }

    /**
     * Checks if a particular class has to be ignored while generation of
     * wrappers. AT this moment there are some special cases which are not
     * handled by the code generation and the list is maintained in the Advice
     * temporarily.
     * 
     * @param name
     * @return true if class is ignored; false otherwise.
     */
    boolean ignore(String name) {
        if (name.contains("Reference"))
            return true;
        else if ((name.contains("[]") && !Advisor.isNativeType(name.replace("[]", "")))
                || name.contains("[][]")
                || name.contains("...")
                || Advisor.isInIgnoreList(name)
                || (lib.getObjectIfPresent(name) != null && lib.getObjectIfPresent(name)
                        .isProtocol()) || name.equals("Map"))
            return true;
        else
            return false;
    }

    /**
     * Some C functions have name difference between java and objectiveC
     * counterparts. In such cases, this method takes in the java API's function
     * name and return the Obj-C function name.
     * 
     * @param methodName
     *            - methodName in java API (as represented in the IR)
     * @param appendObjName
     *            - true if the parent is a struct or of CFType. This is
     *            required because, functions associated with structs and
     *            derivatives of CFType have their name prepended to them.
     * @return returns the processed function name if it differs; Null
     *         otherwise.
     */
    public String getModifiedFunctionName(String methodName, boolean appendObjName) {
        if (appendObjName)
            return (objectName + methodName.substring(0, 1).toUpperCase() + methodName.substring(1));
        else
            for (CFunction f : func) {
                if (f.name.toUpperCase().endsWith(methodName.toUpperCase()))
                    return f.name;
            }
        return null;
    }

    /**
     * The necessary processing needs to be done based on the data type of the
     * argument
     * 
     * @param argType
     *            - type of the argument
     * @param i
     *            - argument position
     * @return - returns processed string for a particular argument
     */
    public String parseArgumentType(String argType, int i) {
        if (requiresConversion(argType)) {
            return "ObjCVar" + i;
        } else if (argType.equals("Object")) {
            return "((" + COut.packageName + "NSObject*) n" + i + ")->fields." + COut.packageName
                    + "NSObject.wrappedObj";
        } else if (Advisor.isNativeType(argType)) {
            return "n" + i;
        } else if (CStruct.isStruct(argType)) {
            return "to" + argType + "(n" + i + ")";
        } else if (AdvisorMediator.isCFOpaqueType(argType)) {
            return "var" + i;
        } else if (isSingleArray(argType)) {
            return "a" + i + "->fields.org_xmlvm_runtime_XMLVMArray.array_";
        } else {
            return "(" + argType + "*) (((" + COut.packageName + argType + "*) n" + i
                    + ")->fields." + COut.packageName + "NSObject.wrappedObj)";
        }
    }

    private static boolean isSingleArray(String argType) {
        return (Advisor.isNativeType(argType.replace("[]", "")) && argType.contains("[]")) ? true
                : false;
    }

    public static boolean requiresConversion(String dataType) {
        // Need a better way to segregate these types. These are the types that
        // use to* and from* methods for conversion between Java and ObjectiveC
        // objects.
        return (dataType.equals("List") || dataType.equals("Set") || dataType.equals("String")
                || dataType.equals("NSArray") || dataType.equals("NSSet") || dataType
                .equals("NSString")) ? true : false;
    }

    /**
     * There are some variants in data types such as byte and boolean is Byte
     * and BOOL in Objective-C
     * 
     * @param dataType
     *            - dataType for which a mapping needs to be returned
     * @return if there is a mapping, return the mapped data type; else return
     *         the type as is.
     */
    public static String getMappedDataType(String dataType) {
        String mappedType = null;
        if ((mappedType = Advisor.getDataTypeMapping(dataType)) != null) {
            if (mappedType == "")
                return null;
            return mappedType;
        } else {
            if (AdvisorMediator.isCFOpaqueType(dataType)) {
                return dataType + "Ref";
            }
            return dataType;
        }
    }

    /**
     * Constructs the return variable with appropriate return type
     * 
     * @param returnType
     *            - return type of the method
     * @return - constructed string for the return variable
     */
    public static String getReturnVariable(String returnType) {
        String mappedType = null;
        StringBuilder returnVariable = new StringBuilder();

        if (!returnType.equals("void")) {
            if ((mappedType = getMappedDataType(returnType)) != null)
                returnVariable.append(C.NT + mappedType);
            else
                return null;

            if (!(Advisor.isNativeType(returnType) || CStruct.isStruct(returnType) || AdvisorMediator
                    .getOpaqueBaseType(returnType) != null)
                    || returnType.equals("Object") || requiresConversion(returnType))
                returnVariable.append("*");

            returnVariable.append(" objCObj = ");
        } else
            returnVariable.append("");
        return returnVariable.toString();
    }

    public static String getCodeToReleaseVar(int i) {
        return C.NT + "[ObjCVar" + i + " release];" + C.N;
    }

    public static String getCodeToConvertVariables(int i, String argType) {
        String ObjCDataType = getMappedDataType(argType);
        return (ObjCDataType + " * ObjCVar" + i + " = to" + ObjCDataType + "(n" + i + ");" + C.NT);
    }

    /**
     * Helper method to generate required macros for a method
     * 
     * @param arguments
     *            - List of arguments for a method
     * @param isStatic
     *            - true if static method
     * @param isConstructor
     *            - true if the method is a constructor
     */
    public String getRequiredMacros(List<CArgument> arguments, boolean isStatic,
            boolean isConstructor) {
        StringBuilder macros = new StringBuilder("");
        int i = 1;

        if (!isStatic && !isConstructor) {
            if (AdvisorMediator.isCFOpaqueType(objectName))
                macros.append(C.XMLVM_VAR_CFTHIZ + C.NT);
            else if (!CStruct.isStruct(objectName))
                macros.append(C.XMLVM_VAR_THIZ + C.NT);
        }
        for (CArgument a : arguments) {
            if (AdvisorMediator.isCFOpaqueType(a.getType().toString())) {
                macros.append("XMLVM_VAR_IOS_REF" + "(" + a.getType().toString() + ", ");
                macros.append("var" + i + ", ");
                macros.append("n" + i);
                macros.append(");").append(C.NT);
            } else if (isSingleArray(a.getType().toString())) {
                macros.append("XMLVM_VAR_" + a.getType().toString().replace("[]", "").toUpperCase()
                        + "_ARRAY(a" + i + ", n" + i + "); " + C.NT);
            }
            i++;
        }
        return macros.toString();
    }

    /**
     * @param type
     *            - data type of the property for a setter method
     * @return - true if the type is a protocol (delegate); false otherwise.
     */
    public boolean isDelegateProperty(String type) {
        return lib.getObjectIfPresent(type) != null ? lib.getObjectIfPresent(type).isProtocol()
                : false;
    }
}