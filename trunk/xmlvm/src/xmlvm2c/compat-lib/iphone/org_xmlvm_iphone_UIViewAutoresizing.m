
#include "org_xmlvm_iphone_UIViewAutoresizing.h"

__TIB_DEFINITION_org_xmlvm_iphone_UIViewAutoresizing __TIB_org_xmlvm_iphone_UIViewAutoresizing = {
    0, // classInitialized
    "org.xmlvm.iphone.UIViewAutoresizing", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object, // extends
};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIViewAutoresizing;
//TODO _ARRAYTYPE not initialized
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIViewAutoresizing_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION

static JAVA_INT _STATIC_org_xmlvm_iphone_UIViewAutoresizing_None;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleLeftMargin;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleWidth;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleRightMargin;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleTopMargin;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleHeight;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleBottomMargin;

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
    {"None",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UIViewAutoresizing_None,
    "",
    JAVA_NULL},
    {"FlexibleLeftMargin",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleLeftMargin,
    "",
    JAVA_NULL},
    {"FlexibleWidth",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleWidth,
    "",
    JAVA_NULL},
    {"FlexibleRightMargin",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleRightMargin,
    "",
    JAVA_NULL},
    {"FlexibleTopMargin",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleTopMargin,
    "",
    JAVA_NULL},
    {"FlexibleHeight",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleHeight,
    "",
    JAVA_NULL},
    {"FlexibleBottomMargin",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleBottomMargin,
    "",
    JAVA_NULL},
};

void __INIT_org_xmlvm_iphone_UIViewAutoresizing()
{
    __TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_java_lang_Object.classInitialized) __INIT_java_lang_Object();
    __TIB_org_xmlvm_iphone_UIViewAutoresizing.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_UIViewAutoresizing;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_UIViewAutoresizing.vtable, __TIB_java_lang_Object.vtable, sizeof(__TIB_java_lang_Object.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_UIViewAutoresizing.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_UIViewAutoresizing.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_None = 0;
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleLeftMargin = 1;
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleWidth = 2;
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleRightMargin = 4;
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleTopMargin = 8;
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleHeight = 16;
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleBottomMargin = 32;

    __TIB_org_xmlvm_iphone_UIViewAutoresizing.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_UIViewAutoresizing.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_UIViewAutoresizing = __NEW_XMLVMClass(&__TIB_org_xmlvm_iphone_UIViewAutoresizing);
    __TIB_org_xmlvm_iphone_UIViewAutoresizing.clazz = __CLASS_org_xmlvm_iphone_UIViewAutoresizing;

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_UIViewAutoresizing]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_UIViewAutoresizing(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_UIViewAutoresizing]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_UIViewAutoresizing()
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    org_xmlvm_iphone_UIViewAutoresizing* me = (org_xmlvm_iphone_UIViewAutoresizing*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_UIViewAutoresizing));
    me->tib = &__TIB_org_xmlvm_iphone_UIViewAutoresizing;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_UIViewAutoresizing]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIViewAutoresizing()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_UIViewAutoresizing();
    org_xmlvm_iphone_UIViewAutoresizing___INIT___(me);
    return me;
}

JAVA_INT org_xmlvm_iphone_UIViewAutoresizing_GET_None()
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    return _STATIC_org_xmlvm_iphone_UIViewAutoresizing_None;
}

void org_xmlvm_iphone_UIViewAutoresizing_PUT_None(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_None = v;
}

JAVA_INT org_xmlvm_iphone_UIViewAutoresizing_GET_FlexibleLeftMargin()
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    return _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleLeftMargin;
}

void org_xmlvm_iphone_UIViewAutoresizing_PUT_FlexibleLeftMargin(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleLeftMargin = v;
}

JAVA_INT org_xmlvm_iphone_UIViewAutoresizing_GET_FlexibleWidth()
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    return _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleWidth;
}

void org_xmlvm_iphone_UIViewAutoresizing_PUT_FlexibleWidth(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleWidth = v;
}

JAVA_INT org_xmlvm_iphone_UIViewAutoresizing_GET_FlexibleRightMargin()
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    return _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleRightMargin;
}

void org_xmlvm_iphone_UIViewAutoresizing_PUT_FlexibleRightMargin(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleRightMargin = v;
}

JAVA_INT org_xmlvm_iphone_UIViewAutoresizing_GET_FlexibleTopMargin()
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    return _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleTopMargin;
}

void org_xmlvm_iphone_UIViewAutoresizing_PUT_FlexibleTopMargin(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleTopMargin = v;
}

JAVA_INT org_xmlvm_iphone_UIViewAutoresizing_GET_FlexibleHeight()
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    return _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleHeight;
}

void org_xmlvm_iphone_UIViewAutoresizing_PUT_FlexibleHeight(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleHeight = v;
}

JAVA_INT org_xmlvm_iphone_UIViewAutoresizing_GET_FlexibleBottomMargin()
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    return _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleBottomMargin;
}

void org_xmlvm_iphone_UIViewAutoresizing_PUT_FlexibleBottomMargin(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIViewAutoresizing.classInitialized) __INIT_org_xmlvm_iphone_UIViewAutoresizing();
    _STATIC_org_xmlvm_iphone_UIViewAutoresizing_FlexibleBottomMargin = v;
}

void org_xmlvm_iphone_UIViewAutoresizing___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIViewAutoresizing___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}
