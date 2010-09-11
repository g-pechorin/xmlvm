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

qx.Class.define("org_eclipse_swt_widgets_Label",{
	extend: org_eclipse_swt_widgets_Control,
	construct: function(){
		this.qxComponent= new qx.ui.basic.Label("label");
	},
	members:
	{	
		label: 0,
		$$init____org_eclipse_swt_widgets_Composite_int: function(parentComposite, type){
			
		},
		$setText___java_lang_String: function(label){
			this.label = label.$str;
			this.qxComponent.setContent(label.$str);
			//this.qxComponent.set({Content: label.$str });
		},
		$getText: function(){
			return new java_lang_String(this.label);
		}
	}
});