// Automatically generated by xmlvm2csharp. Do not edit!

using org.xmlvm;

namespace Compatlib.System {
public class Object: global::java.lang.Object {
public new void @this(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Object: void <init>()]
//XMLVM_END_WRAPPER[Compatlib.System.Object: void <init>()]
}

public virtual global::System.Object ToString(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Object: Compatlib.System.String ToString()]
    java.lang.String jst = org.xmlvm._nUtil.toJavaString(base.ToString());
    Compatlib.System.String st = new Compatlib.System.String();
    st.@this(jst);
    return st;
//XMLVM_END_WRAPPER[Compatlib.System.Object: Compatlib.System.String ToString()]
}

public virtual bool Equals(Compatlib.System.Object n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Object: boolean Equals(Compatlib.System.Object)]
    return this == n1;
//XMLVM_END_WRAPPER[Compatlib.System.Object: boolean Equals(Compatlib.System.Object)]
}

//XMLVM_BEGIN_WRAPPER[Compatlib.System.Object]
//XMLVM_END_WRAPPER[Compatlib.System.Object]

} // end of class: Object

} // end of namespace: Compatlib.System
