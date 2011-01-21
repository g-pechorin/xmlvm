#include "xmlvm.h"

#include "org_xmlvm_iphone_UIProgressView.h"

__TIB_DEFINITION_org_xmlvm_iphone_UIProgressView __TIB_org_xmlvm_iphone_UIProgressView = {
    0, // classInitialized
    "org.xmlvm.iphone.UIProgressView", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_UIControl, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIProgressView;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIProgressView_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static JAVA_OBJECT* __constructor0_arg_types[] = {
    &__CLASS_int,
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
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_UIProgressView();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    case 0:
        org_xmlvm_iphone_UIProgressView___INIT____int(obj, ((java_lang_Integer*) argsArray[0])->fields.java_lang_Integer.value_);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

void __INIT_org_xmlvm_iphone_UIProgressView()
{
    __TIB_org_xmlvm_iphone_UIProgressView.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_UIControl.classInitialized) __INIT_org_xmlvm_iphone_UIControl();
    __TIB_org_xmlvm_iphone_UIProgressView.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_UIProgressView;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_UIProgressView.vtable, __TIB_org_xmlvm_iphone_UIControl.vtable, sizeof(__TIB_org_xmlvm_iphone_UIControl.vtable));
    // Initialize vtable for this class
    __TIB_org_xmlvm_iphone_UIProgressView.vtable[72] = (VTABLE_PTR) &org_xmlvm_iphone_UIProgressView_setProgress___float;
    __TIB_org_xmlvm_iphone_UIProgressView.vtable[73] = (VTABLE_PTR) &org_xmlvm_iphone_UIProgressView_getProgress__;
    __TIB_org_xmlvm_iphone_UIProgressView.vtable[74] = (VTABLE_PTR) &org_xmlvm_iphone_UIProgressView_getProgressViewStyle__;
    __TIB_org_xmlvm_iphone_UIProgressView.vtable[75] = (VTABLE_PTR) &org_xmlvm_iphone_UIProgressView_setProgressViewStyle___int;
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_UIProgressView.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_UIProgressView.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_UIProgressView.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_UIProgressView.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_UIProgressView.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_UIProgressView.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_UIProgressView.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_UIProgressView = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_UIProgressView);
    __TIB_org_xmlvm_iphone_UIProgressView.clazz = __CLASS_org_xmlvm_iphone_UIProgressView;
    __CLASS_org_xmlvm_iphone_UIProgressView_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_UIProgressView, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_UIProgressView]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_UIProgressView(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_UIProgressView]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_UIProgressView()
{
    if (!__TIB_org_xmlvm_iphone_UIProgressView.classInitialized) __INIT_org_xmlvm_iphone_UIProgressView();
    org_xmlvm_iphone_UIProgressView* me = (org_xmlvm_iphone_UIProgressView*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_UIProgressView));
    me->tib = &__TIB_org_xmlvm_iphone_UIProgressView;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_UIProgressView]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIProgressView()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

void org_xmlvm_iphone_UIProgressView___INIT____int(JAVA_OBJECT me, JAVA_INT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIProgressView___INIT____int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UIProgressView_setProgress___float(JAVA_OBJECT me, JAVA_FLOAT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIProgressView_setProgress___float]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_FLOAT org_xmlvm_iphone_UIProgressView_getProgress__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIProgressView_getProgress__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_INT org_xmlvm_iphone_UIProgressView_getProgressViewStyle__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIProgressView_getProgressViewStyle__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UIProgressView_setProgressViewStyle___int(JAVA_OBJECT me, JAVA_INT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIProgressView_setProgressViewStyle___int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}
