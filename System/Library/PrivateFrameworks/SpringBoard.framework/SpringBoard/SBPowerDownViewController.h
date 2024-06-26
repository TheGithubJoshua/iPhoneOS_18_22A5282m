@class SBPowerDownView, SBFUserAuthenticationController, SBPasscodeEntryTransientOverlayViewController, NSString, SPBeaconManager, NSMutableArray, SBWindowSceneManager;
@protocol SBFLockOutStatusProvider, SBPowerDownViewControllerDelegate;

@interface SBPowerDownViewController : SBTransientOverlayViewController <SBPowerDownViewDelegate, SBPasscodeEntryTransientOverlayViewControllerDelegate> {
    unsigned long long _aggdStartTime;
    SBPowerDownView *_powerDownView;
}

@property (retain, nonatomic) SPBeaconManager *beaconManager;
@property (retain, nonatomic) SBWindowSceneManager *windowSceneManager;
@property (retain, nonatomic) SBPasscodeEntryTransientOverlayViewController *passcodeEntryTransientOverlayViewController;
@property (retain, nonatomic) NSMutableArray *externalDisplayDimmingWindows;
@property (retain, nonatomic) SBFUserAuthenticationController *userAuthController;
@property (nonatomic) BOOL userWantsFindMySuppressed;
@property (retain, nonatomic) id<SBFLockOutStatusProvider> lockOutController;
@property (weak, nonatomic) id<SBPowerDownViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDisableSiri;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)handleLockButtonPress;
- (BOOL)shouldDisableControlCenter;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (int)_preferredStatusBarVisibility;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)passcodeEntryTransientOverlayViewControllerStatusText;
- (BOOL)_canShowWhileLocked;
- (long long)idleTimerMode;
- (void)viewWillAppear:(BOOL)a0;
- (id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;
- (void)_setPasscodeVisible:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)passcodeEntryTransientOverlayViewController:(id)a0 authenticatePasscode:(id)a1;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (void)powerDownViewAnimateOutCompleted:(id)a0;
- (void)powerDownViewRequestCancel:(id)a0;
- (void)powerDownViewRequestPowerDown:(id)a0;
- (void)powerDownViewWillAnimateIn:(id)a0;
- (void)powerDownViewWillAnimateOut:(id)a0;
- (void)showPowerDownFindMyAlert;
- (void)showPowerDownFindMyAlertWithProceed:(id /* block */)a0 cancelCompletion:(id /* block */)a1;
- (void)_beginTimeTracking;
- (void)_endTimeTrackingIncludingReportWithKey:(id)a0;
- (void)_incrementCountForKey:(id)a0;
- (BOOL)allowsStackingOverlayContentAbove;
- (void)didTapTemporarilyDisableFindMy;
- (id)initWithWindowSceneManager:(id)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (void)powerDownViewDidCancelSlide:(id)a0;
- (void)powerDownViewDidCompleteSlide:(id)a0;
- (void)powerDownViewDidFireIdleTimer:(id)a0;
- (void)powerDownViewDidReceiveCancelButtonAction:(id)a0;
- (BOOL)shouldDisableBanners;
- (BOOL)shouldPendAlertItems;
- (void)userAcknowledgedFindMyInfo;

@end
