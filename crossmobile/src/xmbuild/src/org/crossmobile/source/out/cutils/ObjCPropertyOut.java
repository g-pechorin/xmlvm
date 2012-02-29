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

import org.crossmobile.source.ctype.CArgument;
import org.crossmobile.source.ctype.CMethod;
import org.crossmobile.source.ctype.CObject;
import org.crossmobile.source.ctype.CProperty;
import org.crossmobile.source.xtype.AdvisorWrapper;
import org.crossmobile.source.xtype.XObject;
import org.crossmobile.source.xtype.XProperty;

/**
 * This class is used to get the code that is related to the getters and setters
 * of a property. This class extends the class <code>CAnyMethodOut</code>
 * overriding the method <code>emit()</code> for getting the wrapper code for
 * the getters and setters.
 * 
 */
public class ObjCPropertyOut extends CAnyMethodOut {

    public ObjCPropertyOut(CObject object) {
        super(object);
    }

    /**
     * In case of properties, generate the getters and setters for the property
     * 
     * @param method
     *            - instance of CMethod associated with the property
     * @param parentIsStruct
     *            - true if the parent of the particular method is a structure
     * @param methodHelper
     *            - instance of methodHelper used to get the code for argument
     *            list
     * @return - return the constructed code for getters and setters
     */
    @Override
    public String emit(CMethod method, boolean parentIsStruct, CMethodHelper methodHelper) {
        if (method.getArguments().isEmpty()) {
            return getGetterCode(method);
        } else {
            return getSetterCode(method, methodHelper);
        }
    }

    /**
     * Method to get the code for a getter of the property
     * 
     * @param method
     *            - the instance of CMethod that represents the getter
     * @return - returns the wrapper code for the getter
     */
    private String getGetterCode(CMethod method) {

        StringBuilder methodCall = new StringBuilder();
        String returnVariableStr = "";
        methodCall.append(Constants.XMLVM_VAR_THIZ);

        if (((returnVariableStr = CMethodHelper
                .getReturnVariable(method.getReturnType().toString())) != null)
                && (method.derivesFromObjC())) {
            methodCall.append(returnVariableStr);
            methodCall.append("[thiz " + CProperty.getPropertyDef(method.name) + "];");
        } else
            return null;

        return methodCall.toString();
    }

    /**
     * Method to get the code related to a setter of a property
     * 
     * @param method
     *            - the instance of CMethod that represents the getter
     * @param methodHelper
     *            - instance of methodHelper used to get the code for argument
     *            list
     * @return returns the wrapper code for the setter
     */
    private String getSetterCode(CMethod method, CMethodHelper methodHelper) {
        String accString = "";
        StringBuilder objCCall = new StringBuilder();
        String beginListConversion = "";
        String releaseList = "";
        StringBuilder methodCode = new StringBuilder();

        try {
            if (AdvisorWrapper.needsAccumulator(object.name)
                    || AdvisorWrapper.needsReplacer(object.name)) {
                accString = injectAccumulatorReplacerCode(method.name);
            }

            methodCode.append(Constants.XMLVM_VAR_THIZ + Constants.N);

            if (method.derivesFromObjC())
                objCCall.append("[thiz " + method.name + ":");
            else
                throw new Exception("Setter does not derive from objective C!");

            List<CArgument> arg = method.getArguments();
            if ((arg.isEmpty()) || (arg.size() > 1))
                throw new Exception("Argument list is empty or more thn 1");

            if (arg.get(0).getType().toString().equals("List")) {
                beginListConversion = CMethodHelper.getCodeToConvertToNSArray(1);
                releaseList = CMethodHelper.getCodeToReleaseList(1);
            }

            if (!methodHelper.ignore(arg.get(0).getType().toString()))
                objCCall.append(methodHelper.parseArgumentType(arg.get(0).getType().toString(), 1));
            else
                return null;

            objCCall.append("];");
            methodCode.append(beginListConversion).append(objCCall).append(accString).append(
                    releaseList + Constants.N);

        } catch (Exception e) {
            methodCode.delete(0, methodCode.length());
            System.out.println(e);
        }
        return methodCode.toString();
    }

    /**
     * Method to get code for keeping C-reference of a property to tell GC about
     * the association
     */
    @Override
    protected String injectAccumulatorReplacerCode(String methodName) {
        XProperty prop = null;
        String accString = "";
        XObject obj = AdvisorWrapper.getSpecialClass(object.name);
        if ((prop = obj.getPropertyInstance(CProperty.getPropertyDef(methodName))) != null) {
            if (prop.isRetain())
                accString = getAccumulativeCode(1, prop.getType());
            else if (prop.isReplace())
                accString = Constants.NT + "jthiz->fields." + object.getcClassName() + "."
                        + prop.getName() + " = n1;";
        }

        return accString.toString();
    }

}