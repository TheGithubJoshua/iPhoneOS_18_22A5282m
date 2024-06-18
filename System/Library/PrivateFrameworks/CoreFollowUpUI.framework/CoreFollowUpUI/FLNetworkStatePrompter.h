@class UIViewController;

@interface FLNetworkStatePrompter : NSObject {
    UIViewController *_presenter;
}

- (id)initWithPresenter:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_cancelActionWithCompletionHandler:(id /* block */)a0;
- (id)_disableAirplaneActionWithCompletionHandler:(id /* block */)a0;
- (void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(id /* block */)a0;
- (void)_mainQueue_verificationFailedAlert;
- (void)preflightNetworkStateWithCompletionHandler:(id /* block */)a0;

@end
