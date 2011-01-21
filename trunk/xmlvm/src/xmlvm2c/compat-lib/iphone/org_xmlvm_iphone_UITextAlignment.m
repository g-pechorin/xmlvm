#include "xmlvm.h"

#include "org_xmlvm_iphone_UITextAlignment.h"

__TIB_DEFINITION_org_xmlvm_iphone_UITextAlignment __TIB_org_xmlvm_iphone_UITextAlignment = {
    0, // classInitialized
    "org.xmlvm.iphone.UITextAlignment", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITextAlignment;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITextAlignment_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION

static JAVA_INT _STATIC_org_xmlvm_iphone_UITextAlignment_Left;
static JAVA_INT _STATIC_org_xmlvm_iphone_UITextAlignment_Center;
static JAVA_INT _STATIC_org_xmlvm_iphone_UITextAlignment_Right;

#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
    {"Left",
    &__CLASS_int,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UITextAlignment_Left,
    "",
    JAVA_NULL},
    {"Center",
    &__CLASS_int,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UITextAlignment_Center,
    "",
    JAVA_NULL},
    {"Right",
    &__CLASS_int,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UITextAlignment_Right,
    "",
    JAVA_NULL},
};

static JAVA_OBJECT* __constructor0_arg_types[] = {
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
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_UITextAlignment();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    case 0:
        org_xmlvm_iphone_UITextAlignment___INIT___(obj);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

void __INIT_org_xmlvm_iphone_UITextAlignment()
{
    __TIB_org_xmlvm_iphone_UITextAlignment.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_java_lang_Object.classInitialized) __INIT_java_lang_Object();
    __TIB_org_xmlvm_iphone_UITextAlignment.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_UITextAlignment;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_UITextAlignment.vtable, __TIB_java_lang_Object.vtable, sizeof(__TIB_java_lang_Object.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_UITextAlignment.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_UITextAlignment.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);
    _STATIC_org_xmlvm_iphone_UITextAlignment_Left = 0;
    _STATIC_org_xmlvm_iphone_UITextAlignment_Center = 1;
    _STATIC_org_xmlvm_iphone_UITextAlignment_Right = 2;

    __TIB_org_xmlvm_iphone_UITextAlignment.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_UITextAlignment.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_UITextAlignment.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_UITextAlignment.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_UITextAlignment.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_UITextAlignment = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_UITextAlignment);
    __TIB_org_xmlvm_iphone_UITextAlignment.clazz = __CLASS_org_xmlvm_iphone_UITextAlignment;
    __CLASS_org_xmlvm_iphone_UITextAlignment_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_UITextAlignment, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_UITextAlignment]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_UITextAlignment(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_UITextAlignment]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_UITextAlignment()
{
    if (!__TIB_org_xmlvm_iphone_UITextAlignment.classInitialized) __INIT_org_xmlvm_iphone_UITextAlignment();
    org_xmlvm_iphone_UITextAlignment* me = (org_xmlvm_iphone_UITextAlignment*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_UITextAlignment));
    me->tib = &__TIB_org_xmlvm_iphone_UITextAlignment;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_UITextAlignment]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITextAlignment()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_UITextAlignment();
    org_xmlvm_iphone_UITextAlignment___INIT___(me);
    return me;
}

JAVA_INT org_xmlvm_iphone_UITextAlignment_GET_Left()
{
    if (!__TIB_org_xmlvm_iphone_UITextAlignment.classInitialized) __INIT_org_xmlvm_iphone_UITextAlignment();
    return _STATIC_org_xmlvm_iphone_UITextAlignment_Left;
}

void org_xmlvm_iphone_UITextAlignment_PUT_Left(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UITextAlignment.classInitialized) __INIT_org_xmlvm_iphone_UITextAlignment();
    _STATIC_org_xmlvm_iphone_UITextAlignment_Left = v;
}

JAVA_INT org_xmlvm_iphone_UITextAlignment_GET_Center()
{
    if (!__TIB_org_xmlvm_iphone_UITextAlignment.classInitialized) __INIT_org_xmlvm_iphone_UITextAlignment();
    return _STATIC_org_xmlvm_iphone_UITextAlignment_Center;
}

void org_xmlvm_iphone_UITextAlignment_PUT_Center(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UITextAlignment.classInitialized) __INIT_org_xmlvm_iphone_UITextAlignment();
    _STATIC_org_xmlvm_iphone_UITextAlignment_Center = v;
}

JAVA_INT org_xmlvm_iphone_UITextAlignment_GET_Right()
{
    if (!__TIB_org_xmlvm_iphone_UITextAlignment.classInitialized) __INIT_org_xmlvm_iphone_UITextAlignment();
    return _STATIC_org_xmlvm_iphone_UITextAlignment_Right;
}

void org_xmlvm_iphone_UITextAlignment_PUT_Right(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UITextAlignment.classInitialized) __INIT_org_xmlvm_iphone_UITextAlignment();
    _STATIC_org_xmlvm_iphone_UITextAlignment_Right = v;
}

void org_xmlvm_iphone_UITextAlignment___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UITextAlignment___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}
