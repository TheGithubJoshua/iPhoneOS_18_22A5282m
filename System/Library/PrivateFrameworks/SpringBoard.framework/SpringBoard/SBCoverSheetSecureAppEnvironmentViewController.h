@class SBFZStackParticipant, NSString, SBDashBoardHostedAppViewController, SBFTraitsParticipant, SBTraitsSceneParticipantDelegate, SBSystemApertureZStackPolicyAssistant;
@protocol BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBSystemApertureZStackPolicyAssistantDelegate, BLSBacklightStateObserving, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, SBFTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController> {
    id<BSInvalidatable> _biometricMatchingAssertion;
    unsigned long long _currentOrientationMask;
    SBFTraitsParticipant *_secureAppTraitsParticipant;
    SBTraitsSceneParticipantDelegate *_secureAppTraitsParticipantDelegateHelper;
    SBSystemApertureZStackPolicyAssistant *_systemApertureZStackPolicyAssistant;
}

@property (readonly, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController;
@property (weak, nonatomic) id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> delegate;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL contentOccludesBackground;

- (BOOL)canHostAnApp;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void)zStackParticipantDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)_updateSystemApertureZStackPolicyAssistant;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (id)hostedAppSceneHandle;
- (BOOL)handlesRotationIndependentOfCoverSheet;
- (void)viewWillDisappear:(BOOL)a0;
- (id)participantAssociatedWindows:(id)a0;
- (id)_traitsArbiter;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)updateOrientationSceneSettingsForParticipant:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)hostedAppSceneHandles;
- (unsigned long long)supportedInterfaceOrientations;
- (id)traitsParticipantForSceneHandle:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)conformsToCSApplicationHosting;
- (void)systemApertureZStackPolicyAssistantDidChange:(id)a0;
- (void)secureAppOfTypeDidBegin:(unsigned long long)a0;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (BOOL)needsActuationForUpdateReasons:(long long)a0;
- (BOOL)isHostingAnApp;
- (void)conformsToSBApplicationHosting;
- (id)participantAssociatedSceneIdentityTokens:(id)a0;
- (void)backlight:(id)a0 didChangeAlwaysOnEnabled:(BOOL)a1;
- (void)_acquireSecureAppTraitsParticipantIfNeeded;
- (void)_actuateTraitsParticipantResolution;
- (id)_currentSecureAppAction;
- (void)_invalidateTraitsParticipantAndDelegateHelper;
- (void)_updateIdleWarnModeForAlwaysOnEnabled:(BOOL)a0;
- (void)_updateSupportedOrientationsMaskForSecureAppAction;
- (void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
- (id)initWithSecureAppViewController:(id)a0;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)a0 animated:(BOOL)a1;
- (void)relinquishHomeGesture;
- (void)requestHomeGestureOwnership;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)a0;
- (void)takeHiddenAssertionForHomeGrabber:(id)a0 animated:(BOOL)a1;
- (void)updateHomeGrabberHiddenAssertion:(BOOL)a0;

@end
