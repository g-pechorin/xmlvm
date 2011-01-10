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

package org.xmlvm.test;

import java.lang.reflect.Field;

public class ReflectionTest {

    public static String staticLabel = "Hello World";

    public int           x;
    public String        label;


    public ReflectionTest() {
        x = 42;
        label = "XMLVM";
    }

    public static void main(String[] args) throws InstantiationException, IllegalAccessException {
        Class<ReflectionTest> clazz = ReflectionTest.class;
        System.out.println(clazz.getName());
        ReflectionTest obj = clazz.newInstance();
        System.out.println(obj.getClass().getName());
        System.out.println(obj.x);
        System.out.println(int.class.getName());

        for (Field field : ReflectionTest.class.getDeclaredFields()) {
            System.out.println(field.getName() + " (" + field.getType().getName() + ") = " + field.get(obj));
        }
    }

}