// Automatically generated by xmlvm2csharp (do not edit).

using global::org.xmlvm;
namespace java.io {
public class ObjectOutputStream: global::java.io.OutputStream,global::java.io.ObjectOutput,global::java.io.ObjectStreamConstants {
private void writeFieldValues(global::java.lang.Object n1, global::java.io.ObjectStreamClass n2){
//XMLVM_BEGIN_WRAPPER[java.io.ObjectOutputStream: void writeFieldValues(java.lang.Object, java.io.ObjectStreamClass)]
    org.xmlvm._nElement _r0;
    _r0.i = 0;
    _r0.l = 0;
    _r0.f = 0;
    _r0.d = 0;
    global::System.Object _r0_o = null;
    org.xmlvm._nElement _r1;
    _r1.i = 0;
    _r1.l = 0;
    _r1.f = 0;
    _r1.d = 0;
    global::System.Object _r1_o = null;
    org.xmlvm._nElement _r2;
    _r2.i = 0;
    _r2.l = 0;
    _r2.f = 0;
    _r2.d = 0;
    global::System.Object _r2_o = null;
    org.xmlvm._nElement _r3;
    _r3.i = 0;
    _r3.l = 0;
    _r3.f = 0;
    _r3.d = 0;
    global::System.Object _r3_o = null;
    org.xmlvm._nElement _r4;
    _r4.i = 0;
    _r4.l = 0;
    _r4.f = 0;
    _r4.d = 0;
    global::System.Object _r4_o = null;
    org.xmlvm._nElement _r5;
    _r5.i = 0;
    _r5.l = 0;
    _r5.f = 0;
    _r5.d = 0;
    global::System.Object _r5_o = null;
    org.xmlvm._nElement _r6;
    _r6.i = 0;
    _r6.l = 0;
    _r6.f = 0;
    _r6.d = 0;
    global::System.Object _r6_o = null;
    org.xmlvm._nElement _r7;
    _r7.i = 0;
    _r7.l = 0;
    _r7.f = 0;
    _r7.d = 0;
    global::System.Object _r7_o = null;
    org.xmlvm._nElement _r8;
    _r8.i = 0;
    _r8.l = 0;
    _r8.f = 0;
    _r8.d = 0;
    global::System.Object _r8_o = null;
    org.xmlvm._nElement _r9;
    _r9.i = 0;
    _r9.l = 0;
    _r9.f = 0;
    _r9.d = 0;
    global::System.Object _r9_o = null;
    org.xmlvm._nElement _r10;
    _r10.i = 0;
    _r10.l = 0;
    _r10.f = 0;
    _r10.d = 0;
    global::System.Object _r10_o = null;
    org.xmlvm._nExceptionAdapter _ex = null;
    _r8_o = this;
    _r9_o = n1;
    _r10_o = n2;
    _r0_o = ((java.io.ObjectStreamClass) _r10_o).fields();
    _r1_o = ((java.io.ObjectStreamClass) _r10_o).forClass();
    _r2.i = ((org.xmlvm._nIArray) _r0_o).Length;
    _r3.i = 0;
    label10:;
    if (_r3.i < _r2.i) goto label13;
    return;
    label13:;
    _r4_o = ((org.xmlvm._nArrayAdapter<global::System.Object>) _r0_o)[_r3.i];
    try {
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
    _r5.l = ((java.io.ObjectStreamField) _r4_o).getFieldID((org.xmlvm.runtime.RedTypeMarker) _r5_o, (java.lang.Class) _r1_o);
    _r7.i = ((java.io.ObjectStreamField) _r4_o).isPrimitive() ? 1 : 0;
    if (_r7.i == 0) goto label159;
    _r7.i = ((java.io.ObjectStreamField) _r4_o).getTypeCode();
    switch (_r7.i) {
    case 66: goto label61;
    case 67: goto label75;
    case 68: goto label87;
    case 70: goto label99;
    case 73: goto label111;
    case 74: goto label123;
    case 83: goto label135;
    case 90: goto label147;
    }
    _r0_o = new java.io.IOException();
    _r1_o = new java.lang.String();
    ((java.lang.String)_r1_o).@this(new org.xmlvm._nArrayAdapter<char>("luni.BF".ToCharArray()));
    _r2.i = ((java.io.ObjectStreamField) _r4_o).getTypeCode();
    _r1_o = org.apache.harmony.luni.@internal.nls.Messages.getString((java.lang.String) _r1_o, (char) _r2.i);
    ((java.io.IOException) _r0_o).@this((java.lang.String) _r1_o);
    throw new org.xmlvm._nExceptionAdapter((java.io.IOException) _r0_o);
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label50:;
    _r0_o = _ex.getJavaException();
    _ex = null;
    _r0_o = new java.io.InvalidClassException();
    _r1_o = ((java.io.ObjectStreamClass) _r10_o).getName();
    ((java.io.InvalidClassException) _r0_o).@this((java.lang.String) _r1_o);
    throw new org.xmlvm._nExceptionAdapter((java.io.InvalidClassException) _r0_o);
    label61:;
    try {
    _r4_o = ((java.io.ObjectOutputStream) _r8_o)._foutput;
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getByte
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getByte");
    ((java.io.DataOutputStream) _r4_o).writeByte((int) _r5.i);
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label72:;
    try {
    _r3.i = _r3.i + 1;
    goto label10;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label75:;
    try {
    _r4_o = ((java.io.ObjectOutputStream) _r8_o)._foutput;
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getChar
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getChar");
    ((java.io.DataOutputStream) _r4_o).writeChar((int) _r5.i);
    goto label72;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label87:;
    try {
    _r4_o = ((java.io.ObjectOutputStream) _r8_o)._foutput;
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getDouble
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getDouble");
    ((java.io.DataOutputStream) _r4_o).writeDouble((double) _r5.d);
    goto label72;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label99:;
    try {
    _r4_o = ((java.io.ObjectOutputStream) _r8_o)._foutput;
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getFloat
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getFloat");
    ((java.io.DataOutputStream) _r4_o).writeFloat((float) _r5.f);
    goto label72;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label111:;
    try {
    _r4_o = ((java.io.ObjectOutputStream) _r8_o)._foutput;
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getInt
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getInt");
    ((java.io.DataOutputStream) _r4_o).writeInt((int) _r5.i);
    goto label72;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label123:;
    try {
    _r4_o = ((java.io.ObjectOutputStream) _r8_o)._foutput;
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getLong
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getLong");
    ((java.io.DataOutputStream) _r4_o).writeLong((long) _r5.l);
    goto label72;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label135:;
    try {
    _r4_o = ((java.io.ObjectOutputStream) _r8_o)._foutput;
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getShort
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getShort");
    ((java.io.DataOutputStream) _r4_o).writeShort((int) _r5.i);
    goto label72;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label147:;
    try {
    _r4_o = ((java.io.ObjectOutputStream) _r8_o)._foutput;
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getBoolean
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getBoolean");
    ((java.io.DataOutputStream) _r4_o).writeBoolean(0!=_r5.i);
    goto label72;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label159:;
    try {
// Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: java.io.ObjectOutputStream,org.apache.harmony.misc.accessors.ObjectAccessor accessor");
// Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getObject
throw new org.xmlvm._nNotYetImplementedException("Red class access removed: org.apache.harmony.misc.accessors.ObjectAccessor getObject");
    _r4.i = ((java.io.ObjectStreamField) _r4_o).isUnshared() ? 1 : 0;
    if (_r4.i == 0) goto label175;
    ((java.io.ObjectOutputStream) _r8_o).writeUnshared((java.lang.Object) _r5_o);
    goto label72;
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    label175:;
    try {
    ((java.io.ObjectOutputStream) _r8_o).writeObject((java.lang.Object) _r5_o);
    }
    catch (org.xmlvm._nExceptionAdapter ex) {
        global::System.Object _java_exception = ex.getJavaException();
        if (_java_exception is java.lang.NoSuchFieldError) {
            _ex = ex;
            goto label50;
        }
        throw ex;
    } // end catch
    goto label72;
    label180:;
//XMLVM_END_WRAPPER[java.io.ObjectOutputStream: void writeFieldValues(java.lang.Object, java.io.ObjectStreamClass)]
}

//XMLVM_BEGIN_WRAPPER[java.io.ObjectOutputStream]
//XMLVM_END_WRAPPER[java.io.ObjectOutputStream]

} // end of class: ObjectOutputStream

} // end of namespace: java.io
