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

package org.xmlvm.proc.out;

import static org.xmlvm.proc.out.IPhoneOutputProcess.IPHONE_SRC;

import java.util.ArrayList;
import java.util.List;

import org.xmlvm.main.Arguments;
import org.xmlvm.proc.XmlvmProcessImpl;
import org.xmlvm.util.universalfile.UniversalFile;
import org.xmlvm.util.universalfile.UniversalFileCreator;

/**
 * This process takes output from the {@link COutputProcess} and adds additional
 * libraries to the output, such as basic compatibility libraries.
 */
public class AugmentedCOutputProcess extends XmlvmProcessImpl<COutputProcess> {
    private static final String        TAG                = AugmentedCOutputProcess.class
                                                                  .getSimpleName();

    private static final UniversalFile C_JAVA_COMPAT_LIB  = UniversalFileCreator.createDirectory(
                                                                  "/xmlvm2c/java-compat-lib.jar",
                                                                  "src/xmlvm2c/compat-lib/java");
    private static final UniversalFile BOEHM_GC_LIB       = UniversalFileCreator.createDirectory(
                                                                  "/lib/boehmgc.jar",
                                                                  "lib/boehmgc.jar");
    private static final String        BOEHM_LIB_NAME     = "boehmgc";

    public static final String         IPHONE_BOEHMGC_LIB = IPHONE_SRC + "/lib/" + BOEHM_LIB_NAME;

    private final List<OutputFile>     outputFiles        = new ArrayList<OutputFile>();


    /**
     * Initialized the process with the given arguments.
     */
    public AugmentedCOutputProcess(Arguments arguments) {
        super(arguments);
        addSupportedInput(COutputProcess.class);
    }

    @Override
    public List<OutputFile> getOutputFiles() {
        return outputFiles;
    }

    @Override
    public boolean process() {
        StringBuilder classListBuffer = new StringBuilder();
        classListBuffer.append("// Generated by AugmentedCOutputProcess. Do not edit!\n\n");
        classListBuffer.append("#include \"xmlvm.h\"\n\n");
        StringBuilder classListArrayBuffer = new StringBuilder();
        classListArrayBuffer.append("JAVA_OBJECT* __xmlvm_class_list[] = {\n");

        for (COutputProcess preProcess : preprocess()) {
            for (OutputFile outputFile : preProcess.getOutputFiles()) {
                String clazz = outputFile.getTag(COutputProcess.TAG_CLASS_NAME);
                if (clazz != null) {
                    classListBuffer.append("extern JAVA_OBJECT " + clazz + ";\n");
                    classListArrayBuffer.append("    &" + clazz + ",\n");
                }
                outputFiles.add(outputFile);
            }
        }

        classListArrayBuffer.append("};\n");
        classListBuffer.append("\n");
        classListBuffer.append(classListArrayBuffer);
        
        // Write out the list of all classes to file xmlvm-class-list.c
        OutputFile classListFile = new OutputFile(classListBuffer.toString());
        classListFile.setLocation(arguments.option_out());
        classListFile.setFileName("xmlvm-class-list." + arguments.option_c_source_extension());
        outputFiles.add(classListFile);

        // This is mainly xmlvm.m. and xmlvm.h, which just need to be copied
        // over.
        OutputFile iPhoneJavaCompatLib = new OutputFile(C_JAVA_COMPAT_LIB);
        iPhoneJavaCompatLib.setLocation(arguments.option_out());
        iPhoneJavaCompatLib.setTag(OutputFile.TAG_LIB_NAME, "");
        outputFiles.add(iPhoneJavaCompatLib);

        OutputFile boehmGc = new OutputFile(BOEHM_GC_LIB);
        boehmGc.setLocation(arguments.option_out());
        boehmGc.setTag(OutputFile.TAG_LIB_NAME, BOEHM_LIB_NAME);
        outputFiles.add(boehmGc);
        return true;
    }
}