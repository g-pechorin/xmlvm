#ifndef __ORG_XMLVM_IPHONE_NSTIMER__
#define __ORG_XMLVM_IPHONE_NSTIMER__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"
#include "java_lang_Runnable.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Runnable
#define XMLVM_FORWARD_DECL_java_lang_Runnable
XMLVM_FORWARD_DECL(java_lang_Runnable)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSTimerDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSTimerDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSTimerDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
// Class declarations for org.xmlvm.iphone.NSTimer
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSTimer, 16)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_NSTimer void *ocTimer;
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_NSTimer \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_NSTimer \
    } org_xmlvm_iphone_NSTimer

struct org_xmlvm_iphone_NSTimer {
    __CLASS_DEFINITION_org_xmlvm_iphone_NSTimer* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSTimer;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSTimer
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSTimer
typedef struct org_xmlvm_iphone_NSTimer org_xmlvm_iphone_NSTimer;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSTimer 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_NSTimer_run__ 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_NSTimer_invalidate__ 15

void __INIT_org_xmlvm_iphone_NSTimer();
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSTimer();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSTimer();
void org_xmlvm_iphone_NSTimer___INIT____float_org_xmlvm_iphone_NSTimerDelegate_java_lang_Object_boolean(JAVA_OBJECT me, JAVA_FLOAT n1, JAVA_OBJECT n2, JAVA_OBJECT n3, JAVA_BOOLEAN n4);
JAVA_OBJECT org_xmlvm_iphone_NSTimer_scheduledTimerWithTimeInterval___float_org_xmlvm_iphone_NSTimerDelegate_java_lang_Object_boolean(JAVA_FLOAT n1, JAVA_OBJECT n2, JAVA_OBJECT n3, JAVA_BOOLEAN n4);
// Vtable index: 14
void org_xmlvm_iphone_NSTimer_run__(JAVA_OBJECT me);
// Vtable index: 15
void org_xmlvm_iphone_NSTimer_invalidate__(JAVA_OBJECT me);

#endif