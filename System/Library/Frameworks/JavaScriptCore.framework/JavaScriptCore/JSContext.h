@class JSValue, JSVirtualMachine, NSString;

@interface JSContext : NSObject {
    struct RetainPtr<JSVirtualMachine> { void *m_ptr; } m_virtualMachine;
    struct OpaqueJSContext { } *m_context;
    struct Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No> { struct JSValue *m_slot; } m_exception;
    struct WeakObjCPtr<id<JSModuleLoaderDelegate>> { id m_weakReference; } m_moduleLoaderDelegate;
}

@property (readonly) JSValue *globalObject;
@property (retain) JSValue *exception;
@property (copy) id /* block */ exceptionHandler;
@property (readonly) JSVirtualMachine *virtualMachine;
@property (copy) NSString *name;
@property (nonatomic, getter=isInspectable) BOOL inspectable;

+ (id)currentContext;
+ (id)currentCallee;
+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { } *)a0;
+ (id)currentThis;
+ (id)currentArguments;

- (id)init;
- (id)moduleLoaderDelegate;
- (id)dependencyIdentifiersForModuleJSScript:(id)a0;
- (id)wrapperMap;
- (id)evaluateScript:(id)a0 withSourceURL:(id)a1;
- (struct OpaqueJSContext { } *)JSGlobalContextRef;
- (id)wrapperForObjCObject:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)_remoteInspectionEnabled;
- (void)_setITMLDebuggableType;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue { } *)a0;
- (void)notifyException:(struct OpaqueJSValue { } *)a0;
- (void)endCallbackWithData:(void *)a0;
- (id)wrapperForJSObject:(struct OpaqueJSValue { } *)a0;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (id)initWithVirtualMachine:(id)a0;
- (void)ensureWrapperMap;
- (id)valueFromNotifyException:(struct OpaqueJSValue { } *)a0;
- (id)evaluateJSScript:(id)a0;
- (id).cxx_construct;
- (void)beginCallbackWithData:(void *)a0 calleeValue:(struct OpaqueJSValue { } *)a1 thisValue:(struct OpaqueJSValue { } *)a2 argumentCount:(unsigned long long)a3 arguments:(const struct OpaqueJSValue **)a4;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (struct __CFRunLoop { } *)_debuggerRunLoop;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop { } *)a0;
- (void)dealloc;
- (id)evaluateScript:(id)a0;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)a0;
- (void)setModuleLoaderDelegate:(id)a0;
- (void)_setRemoteInspectionEnabled:(BOOL)a0;

@end
