
#include "org_xmlvm_iphone_UIApplicationDelegate.h"

__TIB_DEFINITION_org_xmlvm_iphone_UIApplicationDelegate __TIB_org_xmlvm_iphone_UIApplicationDelegate = {
    0, // classInitialized
    "org.xmlvm.iphone.UIApplicationDelegate", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
};

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


void __INIT_org_xmlvm_iphone_UIApplicationDelegate()
{
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_UIApplicationDelegate;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_UIApplicationDelegate.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.vtable[14] = (VTABLE_PTR) &org_xmlvm_iphone_UIApplicationDelegate_applicationDidFinishLaunching___org_xmlvm_iphone_UIApplication;
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.vtable[15] = (VTABLE_PTR) &org_xmlvm_iphone_UIApplicationDelegate_applicationWillTerminate___org_xmlvm_iphone_UIApplication;
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.vtable[16] = (VTABLE_PTR) &org_xmlvm_iphone_UIApplicationDelegate_applicationDidBecomeActive___org_xmlvm_iphone_UIApplication;
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.vtable[17] = (VTABLE_PTR) &org_xmlvm_iphone_UIApplicationDelegate_applicationWillResignActive___org_xmlvm_iphone_UIApplication;
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.vtable[18] = (VTABLE_PTR) &org_xmlvm_iphone_UIApplicationDelegate_applicationDidReceiveMemoryWarning___org_xmlvm_iphone_UIApplication;
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_UIApplicationDelegate.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);


    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_UIApplicationDelegate]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_UIApplicationDelegate(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_UIApplicationDelegate]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_UIApplicationDelegate()
{
    if (!__TIB_org_xmlvm_iphone_UIApplicationDelegate.classInitialized) __INIT_org_xmlvm_iphone_UIApplicationDelegate();
    org_xmlvm_iphone_UIApplicationDelegate* me = (org_xmlvm_iphone_UIApplicationDelegate*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_UIApplicationDelegate));
    me->tib = &__TIB_org_xmlvm_iphone_UIApplicationDelegate;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_UIApplicationDelegate]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIApplicationDelegate()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_UIApplicationDelegate();
    org_xmlvm_iphone_UIApplicationDelegate___INIT___(me);
    return me;
}

void org_xmlvm_iphone_UIApplicationDelegate___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIApplicationDelegate___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UIApplicationDelegate_applicationDidFinishLaunching___org_xmlvm_iphone_UIApplication(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIApplicationDelegate_applicationDidFinishLaunching___org_xmlvm_iphone_UIApplication]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UIApplicationDelegate_applicationWillTerminate___org_xmlvm_iphone_UIApplication(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIApplicationDelegate_applicationWillTerminate___org_xmlvm_iphone_UIApplication]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UIApplicationDelegate_applicationDidBecomeActive___org_xmlvm_iphone_UIApplication(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIApplicationDelegate_applicationDidBecomeActive___org_xmlvm_iphone_UIApplication]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UIApplicationDelegate_applicationWillResignActive___org_xmlvm_iphone_UIApplication(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIApplicationDelegate_applicationWillResignActive___org_xmlvm_iphone_UIApplication]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UIApplicationDelegate_applicationDidReceiveMemoryWarning___org_xmlvm_iphone_UIApplication(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIApplicationDelegate_applicationDidReceiveMemoryWarning___org_xmlvm_iphone_UIApplication]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}
