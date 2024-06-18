@class NSString;

@interface WKObject : NSProxy <WKObject> {
    BOOL _hasInitializedTarget;
    struct RetainPtr<NSObject> { void *m_ptr; } _target;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNSDictionary__;
- (BOOL)isNSSet__;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isNSValue__;
- (Class)classForKeyedArchiver;
- (void)forwardInvocation:(id)a0;
- (Class)classForCoder;
- (BOOL)isNSCFConstantString__;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isNSTimeZone__;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNSOrderedSet__;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isNSData__;
- (BOOL)isNSNumber__;
- (BOOL)isNSDate__;
- (BOOL)isNSString__;
- (BOOL)isNSObject__;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)_web_createTarget;
- (BOOL)isNSArray__;

@end
