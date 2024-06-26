@class UIView, NSString, NSArray, BKUIAlertView, BKUICurvesView, OBTrayButton, UIButton, NSObject, NSLayoutConstraint, BKUIIndicatorWindow;
@protocol OS_os_log, BKUIEmbeddedEnrollmentSelectionType;

@interface BKUIFingerPrintEnrollmentPhaseViewController : OBTouchIDEnrollmentWelcomeController {
    NSObject<OS_os_log> *bkui_fingerprint_enroll_view_controller_log;
}

@property (retain, nonatomic) BKUIAlertView *alertView;
@property (retain, nonatomic) UIView *mesaEnrollErrorButtonsContainer;
@property (retain, nonatomic) UIButton *mesaEnrollErrorButtonRestartEnroll;
@property (nonatomic) BOOL hideUnlockMessage;
@property (retain, nonatomic) BKUICurvesView *mesaFirstEnrollView;
@property (retain, nonatomic) BKUICurvesView *mesaSecondEnrollView;
@property (retain, nonatomic) NSArray *mesaEnrollContainerConstraints;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) OBTrayButton *retryButton;
@property (retain, nonatomic) OBTrayButton *skipButton;
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint;
@property (nonatomic) BOOL rotating;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) NSLayoutConstraint *enrollCurvesViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *enrollCurvesViewCenterConstraint;
@property (nonatomic) BOOL disableContentViewSizing;
@property (retain, nonatomic) NSString *headerTitle;
@property (nonatomic) double innerAndOuterCurvesViewHeightDiff;
@property (nonatomic) double enrollProgress;
@property (retain, nonatomic) BKUIIndicatorWindow *touchindicatorWindow;
@property (nonatomic) struct CGSize { double width; double height; } buttonTraySize;
@property (weak, nonatomic) id<BKUIEmbeddedEnrollmentSelectionType> delegate;
@property (nonatomic) unsigned long long enrollViewState;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL showDisclaimer;
@property (nonatomic) BOOL shouldShowFollowupFingerEnrollmentUpSell;
@property (nonatomic) BOOL showFollowUpEnrollmentUpSellContent;
@property (nonatomic) BOOL isSecondEnrollment;
@property (nonatomic) long long initialInterfaceOrientation;

- (id)_subtitleFont;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_forceLayout;
- (BOOL)shouldAnimateEntireView;
- (BOOL)_isIPad;
- (void)_continuePressed:(id)a0;
- (id)_detailPhasesText;
- (id)_detailTextDonePhase;
- (void)_enrollSkipped;
- (double)_enrollViewTopPadding;
- (void)_forceResetCurvesLayerToPercent:(double)a0;
- (void)_handleViewState:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_idealEnrollCurveViewSize;
- (BOOL)_showDisclaimerOnIpad;
- (BOOL)_topTouchButtonIpad;
- (void)_updateButtonTraySize;
- (void)_updateContentViewSizeToMatchConstraints;
- (void)_updateEnrollViewsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)handleEnrollmentDone;
- (void)handleEnrollmentFailure;
- (id)initInBuddy:(BOOL)a0 showDisclaimer:(BOOL)a1 hideUnlockMessage:(BOOL)a2 headerTitle:(id)a3 firstEnrollView:(id)a4 secondEnrollView:(id)a5;
- (id)initInBuddy:(BOOL)a0 showDisclaimer:(BOOL)a1 hideUnlockMessage:(BOOL)a2 showFollowUpSell:(BOOL)a3 headerTitle:(id)a4 firstEnrollView:(id)a5 secondEnrollView:(id)a6;
- (void)removeTouchIndicator;
- (void)setEnrollProgress:(float)a0 enrollView:(id)a1;
- (void)updateHeaderWithTitle:(id)a0 animated:(BOOL)a1 heightDifference:(id /* block */)a2;

@end
