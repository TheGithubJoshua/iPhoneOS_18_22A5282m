@class UIWindow, NSString, _SBHUDHostViewController, NSCountedSet, SBWindowScene, SBHUDSettings;
@protocol BSInvalidatable;

@interface SBHUDController : NSObject <_SBHUDHostViewControllerDelegate, PTSettingsKeyObserver, BSDescriptionProviding, UIViewControllerTransitioningDelegate> {
    NSCountedSet *_hudHiddenAssertions;
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic) UIWindow *hudWindow;
@property (readonly, nonatomic) _SBHUDHostViewController *hudViewController;
@property (readonly, nonatomic) SBHUDSettings *settings;
@property (readonly, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) BOOL anyHUDsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultCrossfadeAnimatorForHUDController:(id)a0;

- (void)_setupStateCapture;
- (void)_presentHUD:(id)a0 animated:(BOOL)a1;
- (void)hudViewController:(id)a0 willDismissHUD:(id)a1;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)windowSceneDidConnect:(id)a0;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)a0 withReason:(id)a1;
- (void)_tearDown;
- (void)_notificationWhichWeWantToUseToTearEverythingDown:(id)a0;
- (void)hudViewController:(id)a0 didPresentHUD:(id)a1;
- (void)dismissHUDs:(BOOL)a0;
- (void)_createHUDWindowIfNeeded;
- (id)HUDSessionForViewController:(id)a0 identifier:(id)a1;
- (void)hudViewController:(id)a0 didDismissHUD:(id)a1;
- (id)presentingHUDs;
- (id)succinctDescription;
- (id)knownHUDs;
- (void)_finishedTransitionForHUD:(id)a0 intendedState:(long long)a1 finalState:(long long)a2;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)hudViewController:(id)a0 willPresentHUD:(id)a1;
- (void)_dismissHUD:(id)a0 animated:(BOOL)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)presentedHUDControllerForIdentifier:(id)a0;
- (id)knownHUDControllerForIdentifier:(id)a0;
- (void)_tearDownIfNoHuds;
- (id)presentedHUDs;

@end
