@class SFService, NSObject;
@protocol OS_dispatch_queue;

@interface SFProxHandoffService : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    SFService *_service;
    int _serviceState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)_cleanup;
- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)_activated;
- (void)dealloc;
- (void)_completedWithError:(id)a0;
- (void)_serviceStart;

@end
