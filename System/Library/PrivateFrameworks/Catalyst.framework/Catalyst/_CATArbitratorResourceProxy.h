@class NSString, _CATArbitratorRegistrationEntry;

@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy> {
    id mResource;
    _CATArbitratorRegistrationEntry *mRegistration;
}

@property (readonly, nonatomic) BOOL isExclusive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithResource:(id)a0 registration:(id)a1 exclusive:(BOOL)a2;

@end
