#ifndef __ORG_XMLVM_IPHONE_ADBANNERCONTENTSIZEIDENTIFIER__
#define __ORG_XMLVM_IPHONE_ADBANNERCONTENTSIZEIDENTIFIER__

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
// Class declarations for org.xmlvm.iphone.ADBannerContentSizeIdentifier
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_ADBannerContentSizeIdentifier, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_ADBannerContentSizeIdentifier)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_ADBannerContentSizeIdentifier;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_ADBannerContentSizeIdentifier_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_ADBannerContentSizeIdentifier_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_ADBannerContentSizeIdentifier_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_ADBannerContentSizeIdentifier
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_ADBannerContentSizeIdentifier \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_ADBannerContentSizeIdentifier \
    } org_xmlvm_iphone_ADBannerContentSizeIdentifier

struct org_xmlvm_iphone_ADBannerContentSizeIdentifier {
    __TIB_DEFINITION_org_xmlvm_iphone_ADBannerContentSizeIdentifier* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_ADBannerContentSizeIdentifier;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_ADBannerContentSizeIdentifier
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_ADBannerContentSizeIdentifier
typedef struct org_xmlvm_iphone_ADBannerContentSizeIdentifier org_xmlvm_iphone_ADBannerContentSizeIdentifier;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_ADBannerContentSizeIdentifier 6

void __INIT_org_xmlvm_iphone_ADBannerContentSizeIdentifier();
void __INIT_IMPL_org_xmlvm_iphone_ADBannerContentSizeIdentifier();
void __DELETE_org_xmlvm_iphone_ADBannerContentSizeIdentifier(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_ADBannerContentSizeIdentifier(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_ADBannerContentSizeIdentifier();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_ADBannerContentSizeIdentifier();
JAVA_OBJECT org_xmlvm_iphone_ADBannerContentSizeIdentifier_GET_Portrait();
void org_xmlvm_iphone_ADBannerContentSizeIdentifier_PUT_Portrait(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_ADBannerContentSizeIdentifier_GET_Landscape();
void org_xmlvm_iphone_ADBannerContentSizeIdentifier_PUT_Landscape(JAVA_OBJECT v);

#endif
