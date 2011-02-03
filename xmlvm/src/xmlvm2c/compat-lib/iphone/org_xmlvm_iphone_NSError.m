#include "xmlvm.h"
#include "java_util_Map.h"
#include "java_lang_String.h"

#include "org_xmlvm_iphone_NSError.h"

__TIB_DEFINITION_org_xmlvm_iphone_NSError __TIB_org_xmlvm_iphone_NSError = {
    0, // classInitialized
    __INIT_org_xmlvm_iphone_NSError, // classInitializer
    "org.xmlvm.iphone.NSError", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static JAVA_OBJECT* __constructor0_arg_types[] = {
    &__CLASS_java_lang_String,
    &__CLASS_int,
    &__CLASS_java_util_Map,
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
    {&__constructor0_arg_types[0],
    sizeof(__constructor0_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_NSError();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    case 0:
        org_xmlvm_iphone_NSError___INIT____java_lang_String_int_java_util_Map(obj, argsArray[0], ((java_lang_Integer*) argsArray[1])->fields.java_lang_Integer.value_, argsArray[2]);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

void __INIT_org_xmlvm_iphone_NSError()
{
    __TIB_org_xmlvm_iphone_NSError.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_NSError.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_NSError;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_NSError.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    __TIB_org_xmlvm_iphone_NSError.vtable[14] = (VTABLE_PTR) &org_xmlvm_iphone_NSError_domain__;
    __TIB_org_xmlvm_iphone_NSError.vtable[15] = (VTABLE_PTR) &org_xmlvm_iphone_NSError_code__;
    __TIB_org_xmlvm_iphone_NSError.vtable[16] = (VTABLE_PTR) &org_xmlvm_iphone_NSError_userInfo__;
    __TIB_org_xmlvm_iphone_NSError.vtable[17] = (VTABLE_PTR) &org_xmlvm_iphone_NSError_description__;
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_NSError.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_NSError.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_NSError.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSError.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_NSError.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_NSError.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSError.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_NSError = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_NSError);
    __TIB_org_xmlvm_iphone_NSError.clazz = __CLASS_org_xmlvm_iphone_NSError;
    __CLASS_org_xmlvm_iphone_NSError_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_NSError, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_NSError]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_NSError(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_NSError]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_NSError()
{
    if (!__TIB_org_xmlvm_iphone_NSError.classInitialized) __INIT_org_xmlvm_iphone_NSError();
    org_xmlvm_iphone_NSError* me = (org_xmlvm_iphone_NSError*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_NSError));
    me->tib = &__TIB_org_xmlvm_iphone_NSError;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_NSError]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSError()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

void org_xmlvm_iphone_NSError___INIT____java_lang_String_int_java_util_Map(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2, JAVA_OBJECT n3)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSError___INIT____java_lang_String_int_java_util_Map]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSError_error___java_lang_String_int_java_util_Map(JAVA_OBJECT n1, JAVA_INT n2, JAVA_OBJECT n3)
{
    if (!__TIB_org_xmlvm_iphone_NSError.classInitialized) __INIT_org_xmlvm_iphone_NSError();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSError_error___java_lang_String_int_java_util_Map]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSError_domain__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSError_domain__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_INT org_xmlvm_iphone_NSError_code__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSError_code__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSError_userInfo__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSError_userInfo__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSError_description__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSError_description__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

