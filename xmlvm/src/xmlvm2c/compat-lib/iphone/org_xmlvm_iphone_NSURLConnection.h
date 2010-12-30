#ifndef __ORG_XMLVM_IPHONE_NSURLCONNECTION__
#define __ORG_XMLVM_IPHONE_NSURLCONNECTION__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSData)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnection
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnection
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSURLConnection)
#endif
// Class declarations for org.xmlvm.iphone.NSURLConnection
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSURLConnection, 14)

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSURLConnection
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSURLConnection \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSURLConnection \
    } org_xmlvm_iphone_NSURLConnection

struct org_xmlvm_iphone_NSURLConnection {
    __TIB_DEFINITION_org_xmlvm_iphone_NSURLConnection* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSURLConnection;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnection
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnection
typedef struct org_xmlvm_iphone_NSURLConnection org_xmlvm_iphone_NSURLConnection;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSURLConnection 14

void __INIT_org_xmlvm_iphone_NSURLConnection();
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSURLConnection();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSURLConnection();
JAVA_OBJECT org_xmlvm_iphone_NSURLConnection_sendSynchronousRequest___org_xmlvm_iphone_NSMutableURLRequest_org_xmlvm_iphone_NSHTTPURLResponseHolder_org_xmlvm_iphone_NSErrorHolder(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
JAVA_OBJECT org_xmlvm_iphone_NSURLConnection_connectionWithRequest___org_xmlvm_iphone_NSMutableURLRequest_org_xmlvm_iphone_NSURLConnectionDelegate(JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif