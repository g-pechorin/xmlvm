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

import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

import org.xmlvm.main.Arguments;
import org.xmlvm.proc.XmlvmProcessImpl;
import org.xmlvm.proc.in.InputProcess.EmptyInputProcess;
import org.xmlvm.util.FileUtil;
import org.xmlvm.util.JarUtil;
import org.xmlvm.util.universalfile.UniversalFile;

/**
 * Creates a template project.
 */
public class TemplateOutputProcess extends XmlvmProcessImpl<EmptyInputProcess> {

    private static final String     IPHONE_TEMPL_PROJNAME  = "__PROJNAME__";
    private static final String     IPHONE_TEMPL_TRIMSEED  = "__XMLVMTRIMMERSEED__";
    private static final String     IPHONE_TEMPL_JAR_PATH  = "/iphone/netbeans/";
    private static final String     IPHONE_TEMPL_FILE_PATH = "var/iphone/netbeans/";
    private static final String[][] Files                  = { { "Main.java", "src/java/iphone/" },
            { "build.xml", "" }, { "manifest.mf", "" }, { "build-impl.xml", "nbproject/" },
            { "xcode.xml", "nbproject/" }, { "xcode.properties", "nbproject/" },
            { "genfiles.properties", "nbproject/" }, { "project.properties", "nbproject/" },
            { "project.xml", "nbproject/" }, { ".project", "" }, { ".classpath", "" },
            { "demo.png", "resources/app" } };
    private static final String[]   EmptyConfigFiles       = { "NetBeans.properties", "Xcode.properties"};
    private static final String     ConfigLocation         = "nbproject/configs";
    private List<OutputFile>        result                 = new ArrayList<OutputFile>();

    public TemplateOutputProcess(Arguments arguments) {
        super(arguments);
        addSupportedInput(EmptyInputProcess.class);
    }

    @Override
    public List<OutputFile> getOutputFiles() {
        return result;
    }

    @Override
    public boolean process() {
        String projname = arguments.option_app_name();
        String outpath = arguments.option_out() + "/";

        for (String[] file : Files) {
            if (!addFile(file[0], outpath + file[1], projname)) {
                return false;
            }
        }
        for (String file : EmptyConfigFiles) {
            OutputFile config = new OutputFile("");
            config.setFileName(file);
            config.setLocation(outpath + ConfigLocation);
            result.add(config);
        }

        File jarlib = new File(JarUtil.findSelfJar());
        ResourceOutputFile jarout = new ResourceOutputFile(jarlib.getParent(), outpath + "lib/",
                jarlib.getName());
        result.add(jarout);

        return true;
    }

    private boolean addFile(String filename, String to, String projname) {
        OutputFile file = new OutputFile((UniversalFile)null);
        file.setFileName(filename);
        file.setLocation(to);
        if (!file.setDataFromStream(FileUtil.findStreamResource(IPHONE_TEMPL_JAR_PATH + filename,
                IPHONE_TEMPL_FILE_PATH + filename)))
            return false;
        if (!filename.endsWith(".png")) {
            file.setData(file.getData().replace(IPHONE_TEMPL_PROJNAME, projname));
        }
        if (filename.equals("xcode.properties")) {
            file.setData(file.getData().replace(IPHONE_TEMPL_TRIMSEED, String.valueOf(new Random().nextLong())));
        }
        result.add(file);
        return true;
    }
}
