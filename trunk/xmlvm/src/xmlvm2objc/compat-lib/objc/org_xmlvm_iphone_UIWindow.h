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

#import "xmlvm.h"
#import "org_xmlvm_iphone_CGRect.h"
#import "org_xmlvm_iphone_CGPoint.h"
#import "org_xmlvm_iphone_UIView.h"
#import "org_xmlvm_iphone_UIApplication.h"

// UIWindow
//----------------------------------------------------------------------------
typedef UIWindow org_xmlvm_iphone_UIWindow;
@interface UIWindow (cat_org_xmlvm_iphone_UIWindow)
- (void) __init_org_xmlvm_iphone_UIWindow__;
- (void) __init_org_xmlvm_iphone_UIWindow___org_xmlvm_iphone_CGRect :(org_xmlvm_iphone_CGRect*)n1;
- (void) addSubview___org_xmlvm_iphone_UIView :(org_xmlvm_iphone_UIView*)view;
- (void) makeKeyAndVisible__;
- (org_xmlvm_iphone_CGPoint*) convertPointFromWindow___org_xmlvm_iphone_CGPoint_org_xmlvm_iphone_UIWindow:(org_xmlvm_iphone_CGPoint*)point :(org_xmlvm_iphone_UIWindow*) window;
- (org_xmlvm_iphone_CGPoint*) convertPointToWindow___org_xmlvm_iphone_CGPoint_org_xmlvm_iphone_UIWindow:(org_xmlvm_iphone_CGPoint*)point :(org_xmlvm_iphone_UIWindow*) window;
- (org_xmlvm_iphone_CGRect*) convertRectFromWindow___org_xmlvm_iphone_CGRect_org_xmlvm_iphone_UIWindow:(org_xmlvm_iphone_CGRect*)rect :(org_xmlvm_iphone_UIWindow*) window;
- (org_xmlvm_iphone_CGRect*) convertRectToWindow___org_xmlvm_iphone_CGRect_org_xmlvm_iphone_UIWindow:(org_xmlvm_iphone_CGRect*)rect :(org_xmlvm_iphone_UIWindow*) window;
@end