
#include "org_xmlvm_iphone_UITableViewStyle.h"

__TIB_DEFINITION_org_xmlvm_iphone_UITableViewStyle __TIB_org_xmlvm_iphone_UITableViewStyle = {
    0, // classInitialized
    "org.xmlvm.iphone.UITableViewStyle", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object, // extends
};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewStyle;
//TODO _ARRAYTYPE not initialized
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewStyle_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION

static JAVA_INT _STATIC_org_xmlvm_iphone_UITableViewStyle_Plain;
static JAVA_INT _STATIC_org_xmlvm_iphone_UITableViewStyle_Grouped;

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
    {"Plain",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UITableViewStyle_Plain,
    "",
    JAVA_NULL},
    {"Grouped",
    &__CLASS_int_TYPE,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UITableViewStyle_Grouped,
    "",
    JAVA_NULL},
};

void __INIT_org_xmlvm_iphone_UITableViewStyle()
{
    __TIB_org_xmlvm_iphone_UITableViewStyle.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_java_lang_Object.classInitialized) __INIT_java_lang_Object();
    __TIB_org_xmlvm_iphone_UITableViewStyle.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_UITableViewStyle;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_UITableViewStyle.vtable, __TIB_java_lang_Object.vtable, sizeof(__TIB_java_lang_Object.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_UITableViewStyle.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_UITableViewStyle.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);
    _STATIC_org_xmlvm_iphone_UITableViewStyle_Plain = 0;
    _STATIC_org_xmlvm_iphone_UITableViewStyle_Grouped = 1;

    __TIB_org_xmlvm_iphone_UITableViewStyle.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_UITableViewStyle.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_UITableViewStyle = __NEW_XMLVMClass(&__TIB_org_xmlvm_iphone_UITableViewStyle);
    __TIB_org_xmlvm_iphone_UITableViewStyle.clazz = __CLASS_org_xmlvm_iphone_UITableViewStyle;

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_UITableViewStyle]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_UITableViewStyle(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_UITableViewStyle]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_UITableViewStyle()
{
    if (!__TIB_org_xmlvm_iphone_UITableViewStyle.classInitialized) __INIT_org_xmlvm_iphone_UITableViewStyle();
    org_xmlvm_iphone_UITableViewStyle* me = (org_xmlvm_iphone_UITableViewStyle*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_UITableViewStyle));
    me->tib = &__TIB_org_xmlvm_iphone_UITableViewStyle;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_UITableViewStyle]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITableViewStyle()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_UITableViewStyle();
    org_xmlvm_iphone_UITableViewStyle___INIT___(me);
    return me;
}

JAVA_INT org_xmlvm_iphone_UITableViewStyle_GET_Plain()
{
    if (!__TIB_org_xmlvm_iphone_UITableViewStyle.classInitialized) __INIT_org_xmlvm_iphone_UITableViewStyle();
    return _STATIC_org_xmlvm_iphone_UITableViewStyle_Plain;
}

void org_xmlvm_iphone_UITableViewStyle_PUT_Plain(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UITableViewStyle.classInitialized) __INIT_org_xmlvm_iphone_UITableViewStyle();
    _STATIC_org_xmlvm_iphone_UITableViewStyle_Plain = v;
}

JAVA_INT org_xmlvm_iphone_UITableViewStyle_GET_Grouped()
{
    if (!__TIB_org_xmlvm_iphone_UITableViewStyle.classInitialized) __INIT_org_xmlvm_iphone_UITableViewStyle();
    return _STATIC_org_xmlvm_iphone_UITableViewStyle_Grouped;
}

void org_xmlvm_iphone_UITableViewStyle_PUT_Grouped(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UITableViewStyle.classInitialized) __INIT_org_xmlvm_iphone_UITableViewStyle();
    _STATIC_org_xmlvm_iphone_UITableViewStyle_Grouped = v;
}

void org_xmlvm_iphone_UITableViewStyle___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UITableViewStyle___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}
