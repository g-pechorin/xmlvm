/*
 * Copyright (c) 2004-2010 XMLVM --- An XML-based Programming Language
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

qx.Class.define("android_widget_AbsoluteLayout$LayoutParams", {
  extend: java_lang_Object,
  construct: function() {
    this.base(arguments);
  },
  members: {
    $$$width: 0,
    $$$height: 0,
    $$$x: 0,
    $$$y: 0,
    $$init____int_int_int_int: function(width, height, x, y) {
      this.$$$width = width;
      this.$$$height = height;
      this.$$$x = x;
      this.$$$y = y;
    }
  }
});