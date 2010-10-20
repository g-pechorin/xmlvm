/*
 * Copyright (c) 2004-2009 XMLVM --- An XML-based Programming Language
 * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 675 Mass
 * Ave, Cambridge, MA 02139, USA.
 * 
 * For more information, visit the XMLVM Home Page at http://www.xmlvm.org
 */
package org.xmlvm.proc.out;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.StringReader;
import java.util.ArrayList;
import java.util.List;

import org.xmlvm.Log;
import org.xmlvm.main.Arguments;
import org.xmlvm.proc.XmlvmProcessImpl;
import org.xmlvm.proc.out.build.MakeFile;
import org.xmlvm.proc.out.build.XCodeFile;
import org.xmlvm.util.universalfile.UniversalFile;
import org.xmlvm.util.universalfile.UniversalFileCreator;

public class IPhoneCOutputProcess extends XmlvmProcessImpl<COutputProcess> {

    // TODO: Replace with actual one-jar jar.
    private static final UniversalFile IPHONE_COCOA_COMPAT_LIB = UniversalFileCreator
                                                                       .createDirectory(
                                                                               "/iphone/cocoa-compat-lib.jar",
                                                                               "src/xmlvm2c/compat-lib/iphone");
    private static final UniversalFile IPHONE_JAVA_COMPAT_LIB  = UniversalFileCreator
                                                                       .createDirectory(
                                                                               "/iphone/java-compat-lib.jar",
                                                                               "src/xmlvm2c/compat-lib/java");
    private static final UniversalFile BOEHM_GC                = UniversalFileCreator
                                                                       .createDirectory(
                                                                               "/lib/boehmgc.jar",
                                                                               "lib/boehmgc.jar");

    public static final String         IPHONE_SRC              = "/src/xcode";
    public static final String         IPHONE_SRC_LIB          = IPHONE_SRC + "/lib/iphone";
    public static final String         IPHONE_SRC_APP          = IPHONE_SRC + "/app";
    public static final String         IPHONE_RESOURCES_SYS    = "/resources/sys";
    public static final String         IPHONE_RESOURCES_APP    = "/resources/app";
    public static final String         IPHONE_SRC_BOEHMGC      = IPHONE_SRC + "/boehmgc";

    private List<OutputFile>           result                  = new ArrayList<OutputFile>();

    public IPhoneCOutputProcess(Arguments arguments) {
        super(arguments);
        // Only COutputProcesses are supported as input.
        addSupportedInput(COutputProcess.class);
    }

    @Override
    public List<OutputFile> getOutputFiles() {
        return result;
    }

    @Override
    public boolean process() {
        List<COutputProcess> preprocesses = preprocess();

        Log.debug("Processing IPhoneCOutputProcess");

        // Add all the files from the preprocesses to our result list.
        for (COutputProcess preprocess : preprocesses) {
            for (OutputFile in : preprocess.getOutputFiles()) {
                OutputFile out = new OutputFile(in.getData());
                out.setFileName(in.getFileName());
                out.setLocation(in.getLocation() + IPHONE_SRC_APP);
                result.add(out);
            }
        }

        OutputFile iPhoneCocoaCompatLib = new OutputFile(IPHONE_COCOA_COMPAT_LIB);
        iPhoneCocoaCompatLib.setLocation(arguments.option_out() + IPHONE_SRC_LIB);
        result.add(iPhoneCocoaCompatLib);

        OutputFile iPhoneJavaCompatLib = new OutputFile(IPHONE_JAVA_COMPAT_LIB);
        iPhoneJavaCompatLib.setLocation(arguments.option_out() + IPHONE_SRC_LIB);
        result.add(iPhoneJavaCompatLib);

        OutputFile bohemGc = new OutputFile(BOEHM_GC);
        bohemGc.setLocation(arguments.option_out() + IPHONE_SRC_BOEHMGC);
        result.add(bohemGc);

        try {
            // Create Info.plist
            UniversalFile infoInFile = UniversalFileCreator.createFile("/iphone/Info.plist",
                    "var/iphone/Info.plist");
            BufferedReader infoIn = new BufferedReader(new StringReader(infoInFile
                    .getFileAsString()));
            StringBuilder infoOut = new StringBuilder();
            String line = null;
            while ((line = infoIn.readLine()) != null) {
                line = line.replaceAll("PROPERTY_BUNDLEIDENTIFIER", arguments
                        .option_property("bundleidentifier"));
                line = line.replaceAll("PROPERTY_BUNDLEVERSION", arguments
                        .option_property("bundleversion"));
                line = line.replaceAll("PROPERTY_BUNDLEDISPLAYNAME", arguments
                        .option_property("bundledisplayname"));
                line = line.replaceAll("PROPERTY_STATUSBARHIDDEN", arguments.option_property(
                        "statusbarhidden").toLowerCase().equals("true") ? "true" : "false");
                line = line.replaceAll("PROPERTY_PRERENDEREDICON", arguments.option_property(
                        "prerenderedicon").toLowerCase().equals("true") ? "true" : "false");
                line = line.replaceAll("PROPERTY_APPLICATIONEXITS", arguments.option_property(
                        "applicationexits").toLowerCase().equals("true") ? "true" : "false");
                line = line.replaceAll("XMLVM_APP", arguments.option_app_name());
                infoOut.append(line).append("\n");
            }
            OutputFile infoPlistFile = new OutputFile(infoOut.toString());
            infoPlistFile.setLocation(arguments.option_out() + IPHONE_RESOURCES_SYS);
            infoPlistFile.setFileName(arguments.option_app_name() + "-Info.plist");
            result.add(infoPlistFile);
        } catch (IOException ex) {
            ex.printStackTrace();
            return false;
        }

        /* Add resources, as defined */
        for (String resourcedir : arguments.option_resource()) {
            List<ResourceOutputFile> resources = ResourceOutputFile.listResources(resourcedir,
                    arguments.option_out() + IPHONE_RESOURCES_APP, arguments.option_out()
                            + IPHONE_SRC_APP);
            result.addAll(resources);
        }

        /* Create various buildfiles */
        MakeFile makefile = new MakeFile();
        Log.error(makefile.composeBuildFiles(result, arguments));
        XCodeFile xcode = new XCodeFile();
        Log.error(xcode.composeBuildFiles(result, arguments));

        return true;
    }
}