#ifndef __ORG_XMLVM_IPHONE_SKPAYMENTTRANSACTION__
#define __ORG_XMLVM_IPHONE_SKPAYMENTTRANSACTION__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
// Class declarations for org.xmlvm.iphone.SKPaymentTransaction
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_SKPaymentTransaction, 21)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKPaymentTransaction;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKPaymentTransaction_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_SKPaymentTransaction
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_SKPaymentTransaction \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_SKPaymentTransaction \
    } org_xmlvm_iphone_SKPaymentTransaction

struct org_xmlvm_iphone_SKPaymentTransaction {
    __TIB_DEFINITION_org_xmlvm_iphone_SKPaymentTransaction* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_SKPaymentTransaction;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKPaymentTransaction
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKPaymentTransaction
typedef struct org_xmlvm_iphone_SKPaymentTransaction org_xmlvm_iphone_SKPaymentTransaction;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_SKPaymentTransaction 21
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKPaymentTransaction_getError__ 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKPaymentTransaction_getOriginalTransaction__ 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKPaymentTransaction_getPayment__ 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKPaymentTransaction_getTransactionDate__ 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKPaymentTransaction_getTransactionIdentifier__ 18
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKPaymentTransaction_getTransactionReceipt__ 19
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_SKPaymentTransaction_getTransactionState__ 20

void __INIT_org_xmlvm_iphone_SKPaymentTransaction();
void __DELETE_org_xmlvm_iphone_SKPaymentTransaction(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_SKPaymentTransaction(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_SKPaymentTransaction();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_SKPaymentTransaction();
// Vtable index: 14
JAVA_OBJECT org_xmlvm_iphone_SKPaymentTransaction_getError__(JAVA_OBJECT me);
// Vtable index: 15
JAVA_OBJECT org_xmlvm_iphone_SKPaymentTransaction_getOriginalTransaction__(JAVA_OBJECT me);
// Vtable index: 16
JAVA_OBJECT org_xmlvm_iphone_SKPaymentTransaction_getPayment__(JAVA_OBJECT me);
// Vtable index: 17
JAVA_OBJECT org_xmlvm_iphone_SKPaymentTransaction_getTransactionDate__(JAVA_OBJECT me);
// Vtable index: 18
JAVA_OBJECT org_xmlvm_iphone_SKPaymentTransaction_getTransactionIdentifier__(JAVA_OBJECT me);
// Vtable index: 19
JAVA_OBJECT org_xmlvm_iphone_SKPaymentTransaction_getTransactionReceipt__(JAVA_OBJECT me);
// Vtable index: 20
JAVA_INT org_xmlvm_iphone_SKPaymentTransaction_getTransactionState__(JAVA_OBJECT me);

#endif
