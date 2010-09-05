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


/** @author teras */

#import "xmlvm.h"
#import "org_xmlvm_iphone_CGRect.h"
#import "org_xmlvm_iphone_UIColor.h"
#import "java_lang_String.h"

// UISegmentedControl
//----------------------------------------------------------------------------
typedef UISegmentedControl org_xmlvm_iphone_UISegmentedControl;
@interface UISegmentedControl (cat_org_xmlvm_iphone_UISegmentedControl)
- (void) __init_org_xmlvm_iphone_UISegmentedControl;
- (void) __init_org_xmlvm_iphone_UISegmentedControl___org_xmlvm_iphone_CGRect: (org_xmlvm_iphone_CGRect*) rect;
- (void) insertSegmentWithTitle___java_lang_String_int_boolean:(java_lang_String *) title :(int)segment :(int)animated;
- (void) setSelectedSegmentIndex___int:(int) index;
- (void) setSegmentedControlStyle___int:(int) style;
- (void) setTitle___java_lang_String_int:(java_lang_String *)title :(int)index;
- (java_lang_String *) getTitleForSegmentAtIndex___int:(int) index;
- (void) removeSegmentAtIndex___int_boolean:(int)index :(int)animated;
- (int) numberOfSegments__;
- (void) removeAllSegments__;
- (int) getSelectedSegmentIndex__;
- (int) getSegmentedControlStyle__;
- (org_xmlvm_iphone_UIColor*) getTintColor__;
- (void) setTintColor___org_xmlvm_iphone_UIColor :(org_xmlvm_iphone_UIColor*) tint;

@end
