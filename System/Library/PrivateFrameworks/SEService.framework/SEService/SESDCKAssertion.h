@class NSString, NSObject;
@protocol SESDCKAssertionInterface, NSXPCProxyCreating;

@interface SESDCKAssertion : NSObject <SESDCKAssertionCallbackInterface> {
    NSObject<SESDCKAssertionInterface, NSXPCProxyCreating> *_proxy;
}

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProxy:(id)a0;
- (void)didInvalidate;
- (id)proxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithKeyIdentifier:(id)a0;

@end
