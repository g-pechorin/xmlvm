
#include "org_xmlvm_iphone_CGDataProvider.h"

__TIB_DEFINITION_org_xmlvm_iphone_CGDataProvider __TIB_org_xmlvm_iphone_CGDataProvider = {
    0, // classInitialized
    "org.xmlvm.iphone.CGDataProvider", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_CGDataProvider;
//TODO _ARRAYTYPE not initialized
JAVA_OBJECT __CLASS_org_xmlvm_iphone_CGDataProvider_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

void __INIT_org_xmlvm_iphone_CGDataProvider()
{
    __TIB_org_xmlvm_iphone_CGDataProvider.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_CGDataProvider.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_CGDataProvider;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_CGDataProvider.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_CGDataProvider.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_CGDataProvider.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_CGDataProvider.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_CGDataProvider.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_CGDataProvider = __NEW_XMLVMClass(&__TIB_org_xmlvm_iphone_CGDataProvider);
    __TIB_org_xmlvm_iphone_CGDataProvider.clazz = __CLASS_org_xmlvm_iphone_CGDataProvider;

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_CGDataProvider]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_CGDataProvider(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_CGDataProvider]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_CGDataProvider()
{
    if (!__TIB_org_xmlvm_iphone_CGDataProvider.classInitialized) __INIT_org_xmlvm_iphone_CGDataProvider();
    org_xmlvm_iphone_CGDataProvider* me = (org_xmlvm_iphone_CGDataProvider*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_CGDataProvider));
    me->tib = &__TIB_org_xmlvm_iphone_CGDataProvider;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_CGDataProvider]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_CGDataProvider()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

JAVA_OBJECT org_xmlvm_iphone_CGDataProvider_providerToPath___java_lang_String(JAVA_OBJECT n1)
{
    if (!__TIB_org_xmlvm_iphone_CGDataProvider.classInitialized) __INIT_org_xmlvm_iphone_CGDataProvider();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CGDataProvider_providerToPath___java_lang_String]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}
