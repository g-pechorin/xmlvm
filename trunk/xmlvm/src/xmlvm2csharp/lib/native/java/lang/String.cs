// Automatically generated by xmlvm2csharp (do not edit).

using global::org.xmlvm;
namespace java.lang {
public class String: global::java.lang.Object,global::java.io.Serializable,global::java.lang.Comparable,global::java.lang.CharSequence {
public virtual int toLowerCaseImpl(int n1){
//XMLVM_BEGIN_WRAPPER[java.lang.String: int toLowerCaseImpl(int)]
    global::System.String str = "" + (char)n1;
    str = str.ToLower();
    return str[0];
//XMLVM_END_WRAPPER[java.lang.String: int toLowerCaseImpl(int)]
}

public virtual int toUpperCaseImpl(int n1){
//XMLVM_BEGIN_WRAPPER[java.lang.String: int toUpperCaseImpl(int)]
    global::System.String str = "" + (char)n1;
    str = str.ToUpper();
    return str[0];
//XMLVM_END_WRAPPER[java.lang.String: int toUpperCaseImpl(int)]
}

//XMLVM_BEGIN_WRAPPER[java.lang.String]
//XMLVM_END_WRAPPER[java.lang.String]

} // end of class: String

} // end of namespace: java.lang
