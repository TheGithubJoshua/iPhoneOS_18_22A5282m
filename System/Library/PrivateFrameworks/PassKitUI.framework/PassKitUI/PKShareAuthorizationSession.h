@class LAContext;

@interface PKShareAuthorizationSession : NSObject {
    LAContext *_context;
}

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)authorizeDeviceOwnerWithAuthHandler:(id /* block */)a0 completion:(id /* block */)a1;

@end
