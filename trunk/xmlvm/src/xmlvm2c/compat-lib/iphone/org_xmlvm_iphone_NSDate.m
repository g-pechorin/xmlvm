
#include "org_xmlvm_iphone_NSDate.h"

__CLASS_DEFINITION_org_xmlvm_iphone_NSDate __CLASS_org_xmlvm_iphone_NSDate = {
    0, // classInitialized
    "org.xmlvm.iphone.NSDate", // className
    (__CLASS_DEFINITION_TEMPLATE*) &__CLASS_org_xmlvm_iphone_NSObject, // extends
};

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


void __INIT_org_xmlvm_iphone_NSDate()
{
    __CLASS_org_xmlvm_iphone_NSDate.classInitialized = 1;
    // Initialize base class if necessary
    if (!__CLASS_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __CLASS_org_xmlvm_iphone_NSDate.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_NSDate;
    // Copy vtable from base class
    XMLVM_MEMCPY(__CLASS_org_xmlvm_iphone_NSDate.vtable, __CLASS_org_xmlvm_iphone_NSObject.vtable, sizeof(__CLASS_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    __CLASS_org_xmlvm_iphone_NSDate.vtable[14] = (VTABLE_PTR) &org_xmlvm_iphone_NSDate_timeIntervalSinceReferenceDate__;
    // Initialize vtable for implementing interfaces
    __CLASS_org_xmlvm_iphone_NSDate.numImplementedInterfaces = 0;
    __CLASS_org_xmlvm_iphone_NSDate.implementedInterfaces = (__CLASS_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__CLASS_DEFINITION_TEMPLATE*) * 0);


    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_NSDate]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_NSDate()
{
    if (!__CLASS_org_xmlvm_iphone_NSDate.classInitialized) __INIT_org_xmlvm_iphone_NSDate();
    org_xmlvm_iphone_NSDate* me = (org_xmlvm_iphone_NSDate*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_NSDate));
    me->__class = &__CLASS_org_xmlvm_iphone_NSDate;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_NSDate]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSDate()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

void __DELETE_org_xmlvm_iphone_NSDate(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_NSDate]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSDate_date__()
{
    if (!__CLASS_org_xmlvm_iphone_NSDate.classInitialized) __INIT_org_xmlvm_iphone_NSDate();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSDate_date__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSDate_dateWithTimeIntervalSince1970___double(JAVA_DOUBLE n1)
{
    if (!__CLASS_org_xmlvm_iphone_NSDate.classInitialized) __INIT_org_xmlvm_iphone_NSDate();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSDate_dateWithTimeIntervalSince1970___double]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSDate_dateWithTimeIntervalSinceReferenceDate___double(JAVA_DOUBLE n1)
{
    if (!__CLASS_org_xmlvm_iphone_NSDate.classInitialized) __INIT_org_xmlvm_iphone_NSDate();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSDate_dateWithTimeIntervalSinceReferenceDate___double]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_DOUBLE org_xmlvm_iphone_NSDate_timeIntervalSinceReferenceDate__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSDate_timeIntervalSinceReferenceDate__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

