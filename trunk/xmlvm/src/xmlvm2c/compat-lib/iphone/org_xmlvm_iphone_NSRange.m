#include "xmlvm.h"

#include "org_xmlvm_iphone_NSRange.h"

__TIB_DEFINITION_org_xmlvm_iphone_NSRange __TIB_org_xmlvm_iphone_NSRange = {
    0, // classInitialized
    "org.xmlvm.iphone.NSRange", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSRange;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSRange_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
    {"location",
    &__CLASS_int,
    0 | java_lang_reflect_Modifier_PUBLIC,
    XMLVM_OFFSETOF(org_xmlvm_iphone_NSRange, fields.org_xmlvm_iphone_NSRange.location_),
    0,
    "",
    JAVA_NULL},
    {"length",
    &__CLASS_int,
    0 | java_lang_reflect_Modifier_PUBLIC,
    XMLVM_OFFSETOF(org_xmlvm_iphone_NSRange, fields.org_xmlvm_iphone_NSRange.length_),
    0,
    "",
    JAVA_NULL},
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_NSRange();
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

void __INIT_org_xmlvm_iphone_NSRange()
{
    __TIB_org_xmlvm_iphone_NSRange.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_NSRange.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_NSRange;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_NSRange.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_NSRange.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_NSRange.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_NSRange.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSRange.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_NSRange.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_NSRange.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSRange.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_NSRange = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_NSRange);
    __TIB_org_xmlvm_iphone_NSRange.clazz = __CLASS_org_xmlvm_iphone_NSRange;
    __CLASS_org_xmlvm_iphone_NSRange_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_NSRange, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_NSRange]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_NSRange(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_NSRange]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_NSRange()
{
    if (!__TIB_org_xmlvm_iphone_NSRange.classInitialized) __INIT_org_xmlvm_iphone_NSRange();
    org_xmlvm_iphone_NSRange* me = (org_xmlvm_iphone_NSRange*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_NSRange));
    me->tib = &__TIB_org_xmlvm_iphone_NSRange;
    me->fields.org_xmlvm_iphone_NSRange.location_ = 0;
    me->fields.org_xmlvm_iphone_NSRange.length_ = 0;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_NSRange]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSRange()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}
