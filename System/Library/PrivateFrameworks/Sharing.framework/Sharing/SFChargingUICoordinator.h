@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface SFChargingUICoordinator : SFXPCClient {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _animationSPIAdopted;
    BOOL _runningAsCarry;
    NSDate *_uiUpdateMaxDate;
    NSDate *_uiUpdateRequestDate;
    id /* block */ _uiUpdateHandler;
    BOOL _uiUpdateMinTimeElapsed;
    BOOL _uiUpdateShouldDismiss;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
}

@property (nonatomic) long long defaultDuration;

- (BOOL)shouldEscapeXpcTryCatch;
- (void)onqueue_connectionEstablished;
- (void)initialViewControllerDidAppear;
- (void)requestAnimationDateWithCompletion:(id /* block */)a0;
- (id)remoteObjectInterface;
- (void)activate;
- (void)_timingRestartMinTimer;
- (void)_requestToDismissUIHandler:(id /* block */)a0;
- (void)requestToShowUIWithHandler:(id /* block */)a0;
- (void)requestToStartAnimationAtDate:(id)a0;
- (id)machServiceName;
- (void)_sendDismissUIWithReason:(long long)a0;
- (void)requestToDismissUIHandler:(id /* block */)a0;
- (void)_timingInvalidateMinTimer;
- (void)invalidate;
- (void).cxx_destruct;
- (void)initialViewControllerDidDisappear;
- (void)_dismissUI;
- (id)exportedInterface;
- (void)_initialViewControllerDidAppear;
- (void)onqueue_connectionInterrupted;
- (void)_requestToStartAnimationAtDate:(id)a0;
- (void)sendDismissUIWithReason:(long long)a0;
- (void)onqueue_connectionInvalidated;
- (void)_activate;
- (void)_initialViewControllerDidDisappear;
- (void)_invalidate;

@end
