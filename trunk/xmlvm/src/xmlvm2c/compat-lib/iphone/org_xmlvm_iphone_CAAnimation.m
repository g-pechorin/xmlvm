#include "xmlvm.h"
#include "org_xmlvm_iphone_CAMediaTiming.h"
#include "org_xmlvm_iphone_CAAction.h"
#include "java_lang_String.h"

#include "org_xmlvm_iphone_CAAnimation.h"

__TIB_DEFINITION_org_xmlvm_iphone_CAAnimation __TIB_org_xmlvm_iphone_CAAnimation = {
    0, // classInitialized
    "org.xmlvm.iphone.CAAnimation", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_CAAnimation;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_CAAnimation_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
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
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_CAAnimation();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    case 0:
        org_xmlvm_iphone_CAAnimation___INIT___(obj);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

void __INIT_org_xmlvm_iphone_CAAnimation()
{
    __TIB_org_xmlvm_iphone_CAAnimation.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_CAAnimation.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_CAAnimation;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_CAAnimation.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[14] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_getDelegate__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[15] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setDelegate___org_xmlvm_iphone_NSObject;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[16] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_isRemovedOnCompletion__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[17] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setRemovedOnCompletion___boolean;
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_CAAnimation.numImplementedInterfaces = 2;
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 2);
    __INIT_FOR_CLASS_org_xmlvm_iphone_CAMediaTiming(&__TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]);
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[11] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[12] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[13] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[14] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[15] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[16] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[17] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[18] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[19] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[20] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[21] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[22] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[23] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[24] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[25] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0]->vtable[26] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];
    __INIT_FOR_CLASS_org_xmlvm_iphone_CAAction(&__TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][1]);
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][1]->vtable[11] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[-1];

    __TIB_org_xmlvm_iphone_CAAnimation.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_CAAnimation.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_CAAnimation.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_CAAnimation.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_CAAnimation.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_CAAnimation = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_CAAnimation);
    __TIB_org_xmlvm_iphone_CAAnimation.clazz = __CLASS_org_xmlvm_iphone_CAAnimation;
    __CLASS_org_xmlvm_iphone_CAAnimation_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_CAAnimation, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_CAAnimation]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_CAAnimation(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_CAAnimation]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_CAAnimation()
{
    if (!__TIB_org_xmlvm_iphone_CAAnimation.classInitialized) __INIT_org_xmlvm_iphone_CAAnimation();
    org_xmlvm_iphone_CAAnimation* me = (org_xmlvm_iphone_CAAnimation*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_CAAnimation));
    me->tib = &__TIB_org_xmlvm_iphone_CAAnimation;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_CAAnimation]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_CAAnimation()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_CAAnimation();
    org_xmlvm_iphone_CAAnimation___INIT___(me);
    return me;
}

void org_xmlvm_iphone_CAAnimation___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_CAAnimation_defaultValueForKey___java_lang_String(JAVA_OBJECT n1)
{
    if (!__TIB_org_xmlvm_iphone_CAAnimation.classInitialized) __INIT_org_xmlvm_iphone_CAAnimation();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_defaultValueForKey___java_lang_String]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_CAAnimation_getDelegate__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getDelegate__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setDelegate___org_xmlvm_iphone_NSObject(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setDelegate___org_xmlvm_iphone_NSObject]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_BOOLEAN org_xmlvm_iphone_CAAnimation_isRemovedOnCompletion__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_isRemovedOnCompletion__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setRemovedOnCompletion___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setRemovedOnCompletion___boolean]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

