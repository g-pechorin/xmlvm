#include "xmlvm.h"
#include "org_xmlvm_iphone_UIFont.h"
#include "org_xmlvm_iphone_NSData.h"
#include "org_xmlvm_iphone_CGPoint.h"
#include "org_xmlvm_iphone_NSURL.h"
#include "org_xmlvm_iphone_CGSize.h"
#include "java_lang_String.h"

#include "org_xmlvm_iphone_NSString.h"

__TIB_DEFINITION_org_xmlvm_iphone_NSString __TIB_org_xmlvm_iphone_NSString = {
    0, // classInitialized
    "org.xmlvm.iphone.NSString", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSString;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSString_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION

NSString* toNSString(JAVA_OBJECT o)
{
	java_lang_String* s = (java_lang_String*) o;
	org_xmlvm_runtime_XMLVMArray* value = s->fields.java_lang_String.value_;
	JAVA_INT offset = s->fields.java_lang_String.offset_;
	JAVA_INT count = s->fields.java_lang_String.count_;
	const unichar* str = ((JAVA_ARRAY_CHAR*) value->fields.org_xmlvm_runtime_XMLVMArray.array_) + offset;
	return [[NSString alloc] initWithCharacters:str length:count];
}

JAVA_OBJECT toJavaString(NSString* str)
{
    java_lang_String* s = __NEW_java_lang_String();
    const char* chars = [str UTF8String];
    int len = [str length];
    JAVA_ARRAY_CHAR* data = XMLVM_MALLOC(len * 2);
    int i;
    for (i = 0; i < len; i++) {
        data[i] = chars[i];
    }
    org_xmlvm_runtime_XMLVMArray* charArray = XMLVMArray_createSingleDimensionWithData(__CLASS_char_ARRAYTYPE, len, data);
    java_lang_String___INIT____char_ARRAYTYPE(s, charArray);
    return s;
}
    
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_NSString();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

void __INIT_org_xmlvm_iphone_NSString()
{
    __TIB_org_xmlvm_iphone_NSString.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_NSString.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_NSString;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_NSString.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_NSString.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_NSString.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_NSString.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSString.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_NSString.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_NSString.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSString.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_NSString = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_NSString);
    __TIB_org_xmlvm_iphone_NSString.clazz = __CLASS_org_xmlvm_iphone_NSString;
    __CLASS_org_xmlvm_iphone_NSString_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_NSString, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_NSString]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_NSString(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_NSString]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_NSString()
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    org_xmlvm_iphone_NSString* me = (org_xmlvm_iphone_NSString*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_NSString));
    me->tib = &__TIB_org_xmlvm_iphone_NSString;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_NSString]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSString()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

JAVA_OBJECT org_xmlvm_iphone_NSString_stringWithContentsOfFile___java_lang_String(JAVA_OBJECT n1)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_stringWithContentsOfFile___java_lang_String]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSString_stringWithContentsOfURL___org_xmlvm_iphone_NSURL_int(JAVA_OBJECT n1, JAVA_INT n2)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_stringWithContentsOfURL___org_xmlvm_iphone_NSURL_int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSString_stringWithContentsOfURL___org_xmlvm_iphone_NSURL(JAVA_OBJECT n1)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_stringWithContentsOfURL___org_xmlvm_iphone_NSURL]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSString_dataUsingEncoding___java_lang_String_int(JAVA_OBJECT n1, JAVA_INT n2)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_dataUsingEncoding___java_lang_String_int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSString_stringByAddingPercentEscapesUsingEncoding___java_lang_String_int(JAVA_OBJECT n1, JAVA_INT n2)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_stringByAddingPercentEscapesUsingEncoding___java_lang_String_int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSString_componentsSeparatedByString___java_lang_String_java_lang_String(JAVA_OBJECT n1, JAVA_OBJECT n2)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_componentsSeparatedByString___java_lang_String_java_lang_String]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSString_initWithData___org_xmlvm_iphone_NSData_int(JAVA_OBJECT n1, JAVA_INT n2)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_initWithData___org_xmlvm_iphone_NSData_int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_NSString_drawAtPoint___java_lang_String_org_xmlvm_iphone_CGPoint_org_xmlvm_iphone_UIFont(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_drawAtPoint___java_lang_String_org_xmlvm_iphone_CGPoint_org_xmlvm_iphone_UIFont]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSString_sizeWithFont___java_lang_String_org_xmlvm_iphone_UIFont(JAVA_OBJECT n1, JAVA_OBJECT n2)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_sizeWithFont___java_lang_String_org_xmlvm_iphone_UIFont]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSString_sizeWithFont___java_lang_String_org_xmlvm_iphone_UIFont_org_xmlvm_iphone_CGSize_int(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3, JAVA_INT n4)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_sizeWithFont___java_lang_String_org_xmlvm_iphone_UIFont_org_xmlvm_iphone_CGSize_int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_BOOLEAN org_xmlvm_iphone_NSString_writeToFile___java_lang_String_java_lang_String_boolean_int(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3, JAVA_INT n4)
{
    if (!__TIB_org_xmlvm_iphone_NSString.classInitialized) __INIT_org_xmlvm_iphone_NSString();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSString_writeToFile___java_lang_String_java_lang_String_boolean_int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

