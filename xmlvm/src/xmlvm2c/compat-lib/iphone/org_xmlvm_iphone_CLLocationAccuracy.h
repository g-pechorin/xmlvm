#ifndef __ORG_XMLVM_IPHONE_CLLOCATIONACCURACY__
#define __ORG_XMLVM_IPHONE_CLLOCATIONACCURACY__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
// Class declarations for org.xmlvm.iphone.CLLocationAccuracy
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_CLLocationAccuracy, 11)

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_CLLocationAccuracy
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_CLLocationAccuracy \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_CLLocationAccuracy \
    } org_xmlvm_iphone_CLLocationAccuracy

struct org_xmlvm_iphone_CLLocationAccuracy {
    __TIB_DEFINITION_org_xmlvm_iphone_CLLocationAccuracy* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_CLLocationAccuracy;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CLLocationAccuracy
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CLLocationAccuracy
typedef struct org_xmlvm_iphone_CLLocationAccuracy org_xmlvm_iphone_CLLocationAccuracy;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_CLLocationAccuracy 11

void __INIT_org_xmlvm_iphone_CLLocationAccuracy();
JAVA_OBJECT __NEW_org_xmlvm_iphone_CLLocationAccuracy();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_CLLocationAccuracy();
JAVA_DOUBLE org_xmlvm_iphone_CLLocationAccuracy_GET_BestForNavigation();
void org_xmlvm_iphone_CLLocationAccuracy_PUT_BestForNavigation(JAVA_DOUBLE v);
JAVA_DOUBLE org_xmlvm_iphone_CLLocationAccuracy_GET_Best();
void org_xmlvm_iphone_CLLocationAccuracy_PUT_Best(JAVA_DOUBLE v);
JAVA_DOUBLE org_xmlvm_iphone_CLLocationAccuracy_GET_NearestTenMeters();
void org_xmlvm_iphone_CLLocationAccuracy_PUT_NearestTenMeters(JAVA_DOUBLE v);
JAVA_DOUBLE org_xmlvm_iphone_CLLocationAccuracy_GET_HundredMeters();
void org_xmlvm_iphone_CLLocationAccuracy_PUT_HundredMeters(JAVA_DOUBLE v);
JAVA_DOUBLE org_xmlvm_iphone_CLLocationAccuracy_GET_Kilometer();
void org_xmlvm_iphone_CLLocationAccuracy_PUT_Kilometer(JAVA_DOUBLE v);
JAVA_DOUBLE org_xmlvm_iphone_CLLocationAccuracy_GET_ThreeKilometers();
void org_xmlvm_iphone_CLLocationAccuracy_PUT_ThreeKilometers(JAVA_DOUBLE v);

#endif