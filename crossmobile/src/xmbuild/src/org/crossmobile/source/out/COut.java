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

package org.crossmobile.source.out;

import java.io.File;
import java.io.IOException;
import java.io.Writer;
import java.util.Collection;
import java.util.List;

import org.crossmobile.source.ctype.CLibrary;
import org.crossmobile.source.ctype.CObject;
import org.crossmobile.source.ctype.CStruct;
import org.crossmobile.source.out.cutils.CObjectOut;
import org.crossmobile.source.out.cutils.CStructOut;
import org.crossmobile.source.out.cutils.CUtilsHelper;
import org.crossmobile.source.utils.FileUtils;
import org.crossmobile.source.utils.WriteCallBack;
import org.crossmobile.source.xtype.AdvisorWrapper;
import org.crossmobile.source.xtype.XInjectedMethod;
import org.crossmobile.source.xtype.XObject;
import org.crossmobile.source.xtype.XProperty;
import org.crossmobile.source.guru.Advisor;

/**
 * Serves as the entry point for generation of C wrappers. The .m and .h files
 * are created and the necessary code generation methods are called. The wrapper
 * code required for headers are generated here - Eg: The
 * ADDITIONAL_INSTANCE_FIELDS in case a C reference has to be kept in order to
 * tell garbage collector about the association. Any code that needs to be
 * injected (specified via the advisor.xml), is generated in this class.
 * 
 */
public class COut implements Generator {

    private final String outdir;
    private CLibrary     lib;
    public static String packageName = null;
    private static final String BEGIN_DECL = "\n//XMLVM_BEGIN_DECLARATIONS";
    private static final String END_DECL   = "//XMLVM_END_DECLARATIONS";


    public COut(String outdir) {
        this.outdir = outdir;
    }

    @Override
    public void generate(final CLibrary library) {
        this.lib = library;
        packageName = lib.getPackagename().replace(".", "_") + "_";
        File out = new File(outdir);
        FileUtils.delete(out);

        CObject o = null;
        int i = 0;

        Collection<CObject> col = (Collection<CObject>) lib.getObjects();
        Object[] objs = col.toArray();

        for (i = 0; i < objs.length; i++) {
            o = (CObject) objs[i];
            final CObject fo = o;

            if (!Advisor.isInIgnoreList(fo.name)) {

                FileUtils.putFile(new File(out, o.getcClassName() + ".m"),
                        new WriteCallBack<Writer>() {

                            @Override
                            public void exec(Writer out) throws IOException {
                                // Generate the *.m files
                                emitImplementation(fo, out);
                            }
                        });

                FileUtils.putFile(new File(out, o.getcClassName() + ".h"),
                        new WriteCallBack<Writer>() {

                            @Override
                            public void exec(Writer out) throws IOException {
                                // Generate the *.h files
                                emitHeader(fo, out);
                            }
                        });
            }
        }
    }

    /**
     * Used to emit the wrappers into *.m files
     * 
     * @param object
     * @param out
     * @throws IOException
     */
    private void emitImplementation(CObject object, Writer out) throws IOException {

        if (CStruct.isStruct(object.name)) {
            // Handle the structs
            CStructOut cStructOut = new CStructOut(out, lib, object);
            cStructOut.emitImpl();
        } else if (!(object.isProtocol())) {
            // Handle classes apart from protocols
            CObjectOut cObjectOut = new CObjectOut(out, lib, object);
            cObjectOut.emitImpl();
        } else {
            // TODO Handle protocols
        }

        if (AdvisorWrapper.classHasInjectedCode(object.name))
            emitInjectedCode(object, out);
    }

    /**
     * Used to emit code to *.h files
     * 
     * @param object
     * @param out
     * @throws IOException
     */
    private static void emitHeader(CObject object, Writer out) throws IOException {

        out.append(BEGIN_DECL + "\n");

        // Including xmlvm-ios.h in NSObject causes cyclic dependencies
        if (!object.name.contains("NSObject"))
            out.append("#include \"xmlvm-ios.h\"\n");

        if (CStruct.isStruct(object.name)) {
            out.append("\n" + object.getName() + " to" + object.getName() + "(void * obj);\n");
            out.append("JAVA_OBJECT from" + object.getName() + "(" + object.getName() + " obj);\n");
            out.append("#define __ADDITIONAL_INSTANCE_FIELDS_" + object.getcClassName() + " \\ \n");
        } else if (!(object.isProtocol())) {
            out.append("#define __ADDITIONAL_INSTANCE_FIELDS_" + object.getcClassName() + " \\ \n");
            if (object.name.contains("NSObject"))
                out.append(" void *wrappedObjCObj;");
        } else {
            // TODO Handle protocols
        }

        emitAccumulatorReplacer(object.name, out);
        out.append("\n");
        out.append(END_DECL);
    }

    /**
     * Used to emit code into *.h in case a C reference needs to be stored in
     * order to tell the garbage collector about association
     * 
     * @param className
     * @param out
     * @throws IOException
     */
    private static void emitAccumulatorReplacer(String className, Writer out) throws IOException {

        if (AdvisorWrapper.needsReplacer(className)) {
            XObject obj = AdvisorWrapper.getSpecialClass(className);
            for (XProperty p : obj.getProperties()) {
                if (p.isReplace()) {
                    out.append("JAVA_OBJECT " + p.getName() + ";\\ \n");
                    // TODO: Change to specific type
                }
            }
        }
        if (AdvisorWrapper.needsAccumulator(className))
            out.append("JAVA_OBJECT acc_Array;");
    }

    /**
     * Used to emit injected code which is provided by the advice.xml
     * 
     * @param object
     * @param out
     * @throws IOException
     */
    private static void emitInjectedCode(CObject object, Writer out) throws IOException {
        List<XInjectedMethod> iMethods = AdvisorWrapper.getInjectedMethods(object.name);
        for (XInjectedMethod im : iMethods) {
            // TODO Consider cases where injected method has arguments
            out.append(CUtilsHelper.BEGIN_WRAPPER + "[" + object.getcClassName() + "_"
                    + im.getName() + "__]");
            out.append(im.getCode() + "\n");
            out.append(CUtilsHelper.END_WRAPPER);
        }
    }
}
