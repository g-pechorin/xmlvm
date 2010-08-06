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


@interface java_io_Reader : java_lang_Object 

- (void) __init_java_io_Reader;
- (void) __init_java_io_Reader___java_lang_Object: (java_lang_Object*) lock;

- (int) read__;
- (int) read___char_ARRAYTYPE: (XMLVMArray *) buffer;
- (int) read___char_ARRAYTYPE_int_int: (XMLVMArray *) buffer: (int) pos: (int) len;
- (bool) ready__;
- (void) mark___int: (int) readAheadLimit;
- (BOOL) markSupported__;
- (long) skip___long: (long) n;
- (void) reset__;
- (void) close__;

@end