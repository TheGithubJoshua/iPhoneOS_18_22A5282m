@class CSCoverSheetViewController, NSString, SBUIFlashlightController, SBLockScreenDefaults, CSLockScreenSettings;
@protocol SBFLockOutStatusProvider, CSCameraPrewarming;

@interface CSQuickActionsViewController : CSCoverSheetViewControllerBase <CSQuickActionsDelegate, SBUIFlashlightObserver> {
    SBUIFlashlightController *_flashlight;
    CSLockScreenSettings *_prototypeSettings;
    SBLockScreenDefaults *_lockScreenDefaults;
}

@property (nonatomic) BOOL animatingToCamera;
@property (weak, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (retain, nonatomic) id<SBFLockOutStatusProvider> lockOutController;
@property (retain, nonatomic) id<CSCameraPrewarming> cameraPrewarmer;
@property (nonatomic) BOOL suppressingVisibleChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;
+ (BOOL)deviceSupportsButtons;

- (void)_resetIdleTimer;
- (BOOL)allowsCameraPress;
- (void)flashlightLevelDidChange:(unsigned long long)a0;
- (void)touchBeganForButton:(id)a0;
- (id)quickActionsViewIfLoaded;
- (id)init;
- (void)loadView;
- (void)_setupFlashlight;
- (BOOL)allowsFlashlight;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_tearDownFlashlightIfOff;
- (id)initWithLockScreenDefaults:(id)a0;
- (long long)presentationStyle;
- (void)_updateFlashlightButtonState;
- (BOOL)_isFlashlightOn;
- (long long)presentationType;
- (void)_tearDownFlashlight;
- (void)_toggleFlashlight;
- (void)fireActionForButton:(id)a0;
- (void)_addStateCaptureHandlers;
- (BOOL)handleEvent:(id)a0;
- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (void)_launchCamera;
- (void)_deviceBlockStateDidChangeNotification:(id)a0;
- (BOOL)_shouldPrewarmOnTouch;
- (void).cxx_destruct;
- (long long)presentationPriority;
- (BOOL)allowsFlashlightInteraction;
- (BOOL)isPortrait;
- (BOOL)_shouldPrelaunchOnTouch;
- (void)_featureLockStateDidChangeNotification:(id)a0;
- (void)dealloc;
- (BOOL)hasCamera;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)interpretsLocationAsContent:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)a0;
- (void)touchEndedForButton:(id)a0;
- (id)quickActionsView;
- (BOOL)hasFlashlight;
- (void)_updateFlashlightButtonAvailability;
- (BOOL)_supportsCamera;

@end
