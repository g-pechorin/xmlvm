#ifndef __ORG_XMLVM_IPHONE_CGAFFINETRANSFORM__
#define __ORG_XMLVM_IPHONE_CGAFFINETRANSFORM__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGAffineTransform
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGAffineTransform
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGAffineTransform)
#endif
// Class declarations for org.xmlvm.iphone.CGAffineTransform
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_CGAffineTransform, 14)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_CGAffineTransform
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_CGAffineTransform \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_CGAffineTransform \
    } org_xmlvm_iphone_CGAffineTransform

struct org_xmlvm_iphone_CGAffineTransform {
    __CLASS_DEFINITION_org_xmlvm_iphone_CGAffineTransform* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_CGAffineTransform;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGAffineTransform
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGAffineTransform
typedef struct org_xmlvm_iphone_CGAffineTransform org_xmlvm_iphone_CGAffineTransform;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_CGAffineTransform 14

void __INIT_org_xmlvm_iphone_CGAffineTransform();
JAVA_OBJECT __NEW_org_xmlvm_iphone_CGAffineTransform();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_CGAffineTransform();
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_make___float_float_float_float_float_float(JAVA_FLOAT n1, JAVA_FLOAT n2, JAVA_FLOAT n3, JAVA_FLOAT n4, JAVA_FLOAT n5, JAVA_FLOAT n6);
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_makeRotation___float(JAVA_FLOAT n1);
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_makeScale___float_float(JAVA_FLOAT n1, JAVA_FLOAT n2);
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_makeTranslation___float_float(JAVA_FLOAT n1, JAVA_FLOAT n2);
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_rotate___org_xmlvm_iphone_CGAffineTransform_float(JAVA_OBJECT n1, JAVA_FLOAT n2);
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_scale___org_xmlvm_iphone_CGAffineTransform_float_float(JAVA_OBJECT n1, JAVA_FLOAT n2, JAVA_FLOAT n3);
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_translate___org_xmlvm_iphone_CGAffineTransform_float_float(JAVA_OBJECT n1, JAVA_FLOAT n2, JAVA_FLOAT n3);
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_concat___org_xmlvm_iphone_CGAffineTransform_org_xmlvm_iphone_CGAffineTransform(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT org_xmlvm_iphone_CGAffineTransform_identity__();

#endif
