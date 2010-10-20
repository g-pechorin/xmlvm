#ifndef __ORG_XMLVM_IPHONE_NSURL__
#define __ORG_XMLVM_IPHONE_NSURL__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURL
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURL
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSURL)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for org.xmlvm.iphone.NSURL
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSURL, 15)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_NSURL
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_NSURL \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_NSURL \
    } org_xmlvm_iphone_NSURL

struct org_xmlvm_iphone_NSURL {
    __CLASS_DEFINITION_org_xmlvm_iphone_NSURL* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSURL;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURL
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURL
typedef struct org_xmlvm_iphone_NSURL org_xmlvm_iphone_NSURL;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSURL 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_NSURL_absoluteString__ 14

void __INIT_org_xmlvm_iphone_NSURL();
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSURL();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSURL();
JAVA_OBJECT org_xmlvm_iphone_NSURL_URLWithString___java_lang_String(JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_NSURL_fileURLWithPath___java_lang_String(JAVA_OBJECT n1);
// Vtable index: 14
JAVA_OBJECT org_xmlvm_iphone_NSURL_absoluteString__(JAVA_OBJECT me);

#endif