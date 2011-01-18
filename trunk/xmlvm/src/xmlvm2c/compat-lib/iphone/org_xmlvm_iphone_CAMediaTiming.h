#ifndef __ORG_XMLVM_IPHONE_CAMEDIATIMING__
#define __ORG_XMLVM_IPHONE_CAMEDIATIMING__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif

XMLVM_DEFINE_CLASS(org_xmlvm_iphone_CAMediaTiming, 27)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_CAMediaTiming;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_CAMediaTiming_ARRAYTYPE;

#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CAMediaTiming
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CAMediaTiming
typedef struct org_xmlvm_iphone_CAMediaTiming org_xmlvm_iphone_CAMediaTiming;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_CAMediaTiming 27
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_isAutoreverses__ 11
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setAutoreverses___boolean 12
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getBeginTime__ 13
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setBeginTime___double 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getDuration__ 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setDuration___double 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getFillMode__ 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setFillMode___java_lang_String 18
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getRepeatCount__ 19
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setRepeatCount___float 20
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getRepeatDuration__ 21
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setRepeatDuration___double 22
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getSpeed__ 23
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setSpeed___float 24
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getTimeOffset__ 25
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setTimeOffset___double 26

void __INIT_FOR_CLASS_org_xmlvm_iphone_CAMediaTiming(__TIB_DEFINITION_TEMPLATE** interface);
void __INIT_org_xmlvm_iphone_CAMediaTiming();

#endif
