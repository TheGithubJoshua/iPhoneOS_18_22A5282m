@class UIWindow, CUUIEnvironment, CUNavigationController, NSObject;
@protocol OS_dispatch_queue;

@interface CUProxCardController : NSObject <CUActivatable, CUUIEnvironmentable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_queue> *_uiQueue;
}

@property (retain, nonatomic) CUNavigationController *navigationController;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) CUUIEnvironment *environment;

- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidate;

@end
