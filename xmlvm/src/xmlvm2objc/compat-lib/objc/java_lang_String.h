#import "xmlvm.h"
#import "java_lang_Object.h"

typedef NSMutableString java_lang_String;


@interface NSMutableString (cat_java_lang_String) //java_lang_String : java_lang_Object 

- (void) __init_java_lang_String___java_lang_String: (java_lang_String*) str;
- (void) __init_java_lang_StringBuilder;
- (void) __init_java_lang_StringBuilder___java_lang_String: (java_lang_String*) str;
+ (NSMutableString*) valueOf___int: (int) i;
+ (NSMutableString*) valueOf___float: (float) f;
+ (NSMutableString*) valueOf___double: (double) d;
+ (NSMutableString*) valueOf___java_lang_Object: (java_lang_Object*) o;
- (unichar) charAt___int: (int) idx;
- (int) lastIndexOf___int: (int) ch;
- (int) endsWith___java_lang_String: (java_lang_String*) s;
- (NSMutableString*) append___java_lang_String: (java_lang_String*) str;
- (NSMutableString*) append___java_lang_Object: (java_lang_Object*) obj;
- (NSMutableString*) append___int: (int) i;
- (NSMutableString*) append___float: (float) f;
- (NSMutableString*) substring___int_int: (int) from :(int) to;
- (NSMutableString*) substring___int: (int) from;
- (int) equals___java_lang_Object: (java_lang_Object*) o;
- (NSMutableString*) toString;
@end
