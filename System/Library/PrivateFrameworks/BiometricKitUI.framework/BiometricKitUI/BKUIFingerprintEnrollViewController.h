@class BKUICurvesView, BKExtendEnrollTouchIDOperation, UILabel, NSDate, NSObject, BioStreamsEventHelper, BKUIFingerPrintEnrollmentPhaseViewController, BKUIAlertView, BKDeviceTouchID, BiometricKitIdentity, UIView, NSString, BKUIFingerPrintEnrollTutorialViewController, NSTimer, BiometricKit, BKIdentity, BKEnrollTouchIDOperation;
@protocol OS_os_log;

@interface BKUIFingerprintEnrollViewController : BKUIBundleEnrollViewController <BKUIEmbeddedEnrollmentSelectionType, BKEnrollTouchIDOperationDelegate, BKExtendEnrollTouchIDOperationDelegate, CAAnimationDelegate> {
    BOOL _restartRequest;
    BOOL _didDisappear;
    BOOL _enrollmentPhaseTwo;
    BOOL _matchInProgress;
    long long _mesaEnrollSecondPhaseSteps;
    long long _ignoreTouchOffset;
    BiometricKitIdentity *_mesaEnrollFingerIdentity;
    NSDate *_enrollmentEndTime;
    NSTimer *_messageTimer;
    int _movedFingerCount;
    int _movedFingerThr;
    BOOL _movedFingerAlertShown;
    BOOL _stillFingerAlertShown;
    BOOL _showLiftYourFingerMsg;
    NSString *_lastPromptMessage;
    BOOL _cancelForRestart;
    BOOL _displayingFirstTitle;
    double _liftFingerMsgDelay;
    double _msgTransLength;
    double _msgShowTimeout;
    BOOL _enrollInProgress;
    BOOL _waitInProgress;
    float _currentProgress;
    BKUIAlertView *_alertView;
    BOOL _mesaEnrollCompactContainer;
    BKUICurvesView *_mesaFirstEnrollView;
    BKUICurvesView *_mesaSecondEnrollView;
    UIView *_alertHudView;
    UILabel *_alertHudText;
    float _alertHudWhite;
    float _alertHudAlpha;
    float _alertHudCorners;
    float _alertHudBorder;
    BOOL _smallCoverageMessage;
    long long _smallCoverageCount;
    long long _smallCoverageInRowCount;
    long long _maxSmallCoverageCount;
    BOOL _inBuddy;
    unsigned int _userid;
    NSObject<OS_os_log> *bkui_result_delegate_log;
    NSObject<OS_os_log> *bkui_biometric_kit_delegate_log;
    NSObject<OS_os_log> *bkui_fingerprint_enroll_view_controller_log;
    BiometricKit *_deprecatedBiometricKit;
}

@property (retain) BKDeviceTouchID *bkDevice;
@property (retain) BKEnrollTouchIDOperation *bkEnroll;
@property (retain) BKExtendEnrollTouchIDOperation *bkExtendEnroll;
@property (retain) BKIdentity *bkIdentity;
@property long long bkProgress;
@property (nonatomic) BOOL waitForFingerLift;
@property (nonatomic) BOOL fingerOn;
@property (retain, nonatomic) BKUIFingerPrintEnrollTutorialViewController *tutorialController;
@property (retain, nonatomic) BKUIFingerPrintEnrollmentPhaseViewController *enrollmentControlller;
@property (retain, nonatomic) BioStreamsEventHelper *bioStreamEventHelper;
@property (nonatomic) BOOL followUPEnrollmentUpSell;
@property (retain, nonatomic) BiometricKitIdentity *firstFollowUpIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillResignActive:(id)a0;
- (void)homeButtonPressed;
- (void)operation:(id)a0 finishedWithReason:(long long)a1;
- (void)operation:(id)a0 presenceStateChanged:(BOOL)a1;
- (id)_subtitleFont;
- (void)loadView;
- (void)operation:(id)a0 stateChanged:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (id /* block */)menuAction;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)statusMessage:(unsigned int)a0;
- (void)enrollResult:(id)a0;
- (BOOL)isModalInPresentation;
- (void)enrollProgress:(id)a0;
- (void)enrollOperation:(id)a0 failedWithReason:(long long)a1;
- (void)enrollOperation:(id)a0 finishedWithIdentity:(id)a1;
- (void)enrollOperation:(id)a0 percentCompleted:(long long)a1;
- (void)enrollOperation:(id)a0 progressedWithTouchIDInfo:(id)a1;
- (void)extendEnroll:(id)a0 hasUpdated:(BOOL)a1;
- (void)fingerprintCaptureOperation:(id)a0 encounteredCaptureError:(long long)a1;
- (void)matchResult:(id)a0 withDetails:(id)a1;
- (void)touchIDButtonPressedInOperation:(id)a0;
- (void)_skipEnrollment;
- (void)_startTutorial:(BOOL)a0;
- (void)handleProgress:(unsigned int)a0;
- (void)_messageTimeout;
- (BOOL)_showDisclaimer;
- (id)bundleAlertView;
- (void)enrollDoneContinueButtonPressed;
- (void)_animateHeaderTitle:(id)a0;
- (unsigned long long)_bkDeviceIdentityCount;
- (unsigned long long)_bkIdentityCount;
- (void)_cancelActiveEnrollOperation;
- (void)_cancelEnrollmentAndRestart:(BOOL)a0;
- (void)_cancelEnrollmentMatch;
- (id)_deviceAwareLocalizedStringForKey:(id)a0;
- (void)_enrollHapticFeedback:(id)a0;
- (void)_failEnrollment:(int)a0 withMessage:(id)a1;
- (void)_finishEnrollmentPhaseTwo;
- (void)_hapticFeedback:(BOOL)a0;
- (id)_liftFingerString;
- (id)_placeFingerString;
- (id)_readyString;
- (void)_requestNewAuthToken;
- (void)_resetUI;
- (void)_restartEnrollment;
- (void)_safeBioKitDelegateClear;
- (void)_sendEnrollResult:(int)a0 identity:(id)a1;
- (void)_setTapRecognizer:(id)a0;
- (BOOL)_shouldHideUnlockMessage;
- (void)_showDirtOnSensorAlertView;
- (void)_showLiftYourFinger;
- (void)_showLiftYourFingerWithDelay;
- (void)_showSkipEnrollmentAlert;
- (void)_showSmallCoverageAlertView;
- (void)_startEnroll;
- (void)_startEnrollOperation;
- (void)_startEnrollmentMatch;
- (void)_startExtendEnrollOperation;
- (void)_startInitialTutorial:(BOOL)a0;
- (void)_startMessageTimer:(double)a0;
- (void)_stopBiometricOperations;
- (void)_stopMessageTimer;
- (void)_stopTutorialTransitionToEnrollView;
- (BOOL)_topTouchButtonIpad;
- (void)_transitionPromptMessage:(id)a0;
- (void)_transitionToEnrollView:(BOOL)a0;
- (void)_transitionToTutorialView:(BOOL)a0;
- (void)_tutorialContinueButtonPressed;
- (BOOL)_useAlertHud;
- (id)biometricKit;
- (void)cancelEnroll;
- (void)constructAlertView;
- (void)createEnrollUI;
- (void)didSelectPrimaryButton:(id)a0;
- (void)didSelectSecondaryButton:(id)a0;
- (void)initPromptMessage;
- (void)respondToTapGesture:(id)a0;
- (void)restartEnroll;
- (void)restartEnrollPressed:(id)a0;
- (void)setBiometricKit:(id)a0;
- (void)showSecondFingerEnrollmentUpSell;
- (void)skipEnrollmentPressed:(id)a0;
- (void)transitionToEnrollView:(BOOL)a0;
- (void)transitionToTutorialView:(BOOL)a0;
- (void)transitionToTutorialView:(BOOL)a0 completion:(id /* block */)a1;
- (void)tutorialContinueButtonPressed:(id)a0;
- (void)tutorialSkipButtonPressed:(id)a0;

@end