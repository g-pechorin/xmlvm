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

#import "java_net_URL.h"
#import "java_net_HttpURLConnection.h"


// java.net.URL
//----------------------------------------------------------------------------
@implementation java_net_URL

- (void) __init_java_net_URL___java_lang_String: (java_lang_String*) urlString
{
	self->url = [NSURL URLWithString: urlString];
}

- (void) dealloc
{
	[self->url release];
	[super dealloc];
}

- (java_net_URLConnection*) openConnection__
{
	return [[java_net_HttpURLConnection alloc] initWithURL:self->url];
}

@end
