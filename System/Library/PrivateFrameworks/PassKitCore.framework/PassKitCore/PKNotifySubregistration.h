@class NSString, PKNotifyRegistration;

@interface PKNotifySubregistration : NSObject <PKInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PKNotifyRegistration *_parent;
    id /* block */ _handler;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeHandler;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParent:(id)a0 handler:(id /* block */)a1;
- (void)_invalidateFromParent:(BOOL)a0;

@end
