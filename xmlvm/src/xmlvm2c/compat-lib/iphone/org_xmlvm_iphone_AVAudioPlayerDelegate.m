
#include "org_xmlvm_iphone_AVAudioPlayerDelegate.h"

__TIB_DEFINITION_org_xmlvm_iphone_AVAudioPlayerDelegate __TIB_org_xmlvm_iphone_AVAudioPlayerDelegate;


void __INIT_org_xmlvm_iphone_AVAudioPlayerDelegate(__TIB_DEFINITION_TEMPLATE** interface)
{
    if (!__TIB_org_xmlvm_iphone_AVAudioPlayerDelegate.classInitialized) {
        __TIB_org_xmlvm_iphone_AVAudioPlayerDelegate.className = "org.xmlvm.iphone.AVAudioPlayerDelegate";
        __TIB_org_xmlvm_iphone_AVAudioPlayerDelegate.extends = (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object;
        __TIB_org_xmlvm_iphone_AVAudioPlayerDelegate.numInterfaces = 0;
        __TIB_org_xmlvm_iphone_AVAudioPlayerDelegate.classInitialized = 1;
    }
    if (interface != JAVA_NULL) {
        *interface = (__TIB_DEFINITION_TEMPLATE*) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_org_xmlvm_iphone_AVAudioPlayerDelegate));
        XMLVM_MEMCPY(*interface, &__TIB_org_xmlvm_iphone_AVAudioPlayerDelegate, sizeof(__TIB_DEFINITION_org_xmlvm_iphone_AVAudioPlayerDelegate));
    }
}
