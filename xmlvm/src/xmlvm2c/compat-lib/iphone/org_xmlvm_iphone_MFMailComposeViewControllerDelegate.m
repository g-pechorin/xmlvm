
#include "org_xmlvm_iphone_MFMailComposeViewControllerDelegate.h"

__TIB_DEFINITION_org_xmlvm_iphone_MFMailComposeViewControllerDelegate __TIB_org_xmlvm_iphone_MFMailComposeViewControllerDelegate = {
    0, // classInitialized
    "org.xmlvm.iphone.MFMailComposeViewControllerDelegate", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
};

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


void __INIT_org_xmlvm_iphone_MFMailComposeViewControllerDelegate()
{
    __TIB_org_xmlvm_iphone_MFMailComposeViewControllerDelegate.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_MFMailComposeViewControllerDelegate.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_MFMailComposeViewControllerDelegate;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_MFMailComposeViewControllerDelegate.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_MFMailComposeViewControllerDelegate.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_MFMailComposeViewControllerDelegate.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);


    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_MFMailComposeViewControllerDelegate]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_MFMailComposeViewControllerDelegate(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_MFMailComposeViewControllerDelegate]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_MFMailComposeViewControllerDelegate()
{
    if (!__TIB_org_xmlvm_iphone_MFMailComposeViewControllerDelegate.classInitialized) __INIT_org_xmlvm_iphone_MFMailComposeViewControllerDelegate();
    org_xmlvm_iphone_MFMailComposeViewControllerDelegate* me = (org_xmlvm_iphone_MFMailComposeViewControllerDelegate*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_MFMailComposeViewControllerDelegate));
    me->tib = &__TIB_org_xmlvm_iphone_MFMailComposeViewControllerDelegate;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_MFMailComposeViewControllerDelegate]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_MFMailComposeViewControllerDelegate()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_MFMailComposeViewControllerDelegate();
    org_xmlvm_iphone_MFMailComposeViewControllerDelegate___INIT___(me);
    return me;
}

void org_xmlvm_iphone_MFMailComposeViewControllerDelegate___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_MFMailComposeViewControllerDelegate___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}
