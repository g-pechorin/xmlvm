#include "xmlvm.h"
#include "org_xmlvm_iphone_NSMutableURLRequest.h"
#include "org_xmlvm_iphone_NSHTTPURLResponseHolder.h"
#include "org_xmlvm_iphone_NSURLConnectionDelegate.h"
#include "org_xmlvm_iphone_NSErrorHolder.h"

#include "org_xmlvm_iphone_NSURLConnection.h"

__TIB_DEFINITION_org_xmlvm_iphone_NSURLConnection __TIB_org_xmlvm_iphone_NSURLConnection = {
    0, // classInitialized
    "org.xmlvm.iphone.NSURLConnection", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSURLConnection;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSURLConnection_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_NSURLConnection();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

void __INIT_org_xmlvm_iphone_NSURLConnection()
{
    __TIB_org_xmlvm_iphone_NSURLConnection.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_NSURLConnection.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_NSURLConnection;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_NSURLConnection.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_NSURLConnection.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_NSURLConnection.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_NSURLConnection.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSURLConnection.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_NSURLConnection.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_NSURLConnection.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSURLConnection.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_NSURLConnection = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_NSURLConnection);
    __TIB_org_xmlvm_iphone_NSURLConnection.clazz = __CLASS_org_xmlvm_iphone_NSURLConnection;
    __CLASS_org_xmlvm_iphone_NSURLConnection_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_NSURLConnection, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_NSURLConnection]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_NSURLConnection(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_NSURLConnection]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_NSURLConnection()
{
    if (!__TIB_org_xmlvm_iphone_NSURLConnection.classInitialized) __INIT_org_xmlvm_iphone_NSURLConnection();
    org_xmlvm_iphone_NSURLConnection* me = (org_xmlvm_iphone_NSURLConnection*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_NSURLConnection));
    me->tib = &__TIB_org_xmlvm_iphone_NSURLConnection;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_NSURLConnection]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSURLConnection()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

JAVA_OBJECT org_xmlvm_iphone_NSURLConnection_sendSynchronousRequest___org_xmlvm_iphone_NSMutableURLRequest_org_xmlvm_iphone_NSHTTPURLResponseHolder_org_xmlvm_iphone_NSErrorHolder(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3)
{
    if (!__TIB_org_xmlvm_iphone_NSURLConnection.classInitialized) __INIT_org_xmlvm_iphone_NSURLConnection();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSURLConnection_sendSynchronousRequest___org_xmlvm_iphone_NSMutableURLRequest_org_xmlvm_iphone_NSHTTPURLResponseHolder_org_xmlvm_iphone_NSErrorHolder]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSURLConnection_connectionWithRequest___org_xmlvm_iphone_NSMutableURLRequest_org_xmlvm_iphone_NSURLConnectionDelegate(JAVA_OBJECT n1, JAVA_OBJECT n2)
{
    if (!__TIB_org_xmlvm_iphone_NSURLConnection.classInitialized) __INIT_org_xmlvm_iphone_NSURLConnection();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSURLConnection_connectionWithRequest___org_xmlvm_iphone_NSMutableURLRequest_org_xmlvm_iphone_NSURLConnectionDelegate]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}
