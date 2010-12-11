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
#import "java_lang_Object.h"
#import "java_lang_String.h"
#import "java_lang_Comparable.h"

// java.lang.Long
//----------------------------------------------------------------------------
@interface java_lang_Long : java_lang_Object <NSCopying, java_lang_Comparable> {

JAVA_LONG number;

}

- (id) init;
- (id) copyWithZone:(NSZone *)zone;
- (NSUInteger) hash;
- (void) __init_java_lang_Long___long :(JAVA_LONG) l;
- (BOOL) isEqual:(id)anObject;
- (JAVA_LONG) longValue__;
+ (JAVA_LONG) parseLong___java_lang_String: (java_lang_String *) str;
+ (JAVA_LONG) parseLong___java_lang_String_int: (java_lang_String*) str :(int) radix;
+ (java_lang_Long*) valueOf___long: (JAVA_LONG) l;
- (int) compareTo___java_lang_Object: (java_lang_Object*) obj;
- (int) compareTo___java_lang_Long: (java_lang_Long*) l;

@end