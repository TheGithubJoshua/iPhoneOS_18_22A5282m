@class SBSecureAppManager, NSString, CSCoverSheetViewController, SBInProcessSecureAppAction;

@interface SBDashBoardApplicationLauncher : NSObject <CSExternalEventHandling, SBLockScreenApplicationLaunching, CSApplicationLaunching, CSCameraPrewarming> {
    SBInProcessSecureAppAction *_secureAppAction;
    BOOL _cameraIsPrewarming;
    BOOL _cameraPrewarmSucceeded;
}

@property (retain, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (weak, nonatomic) SBSecureAppManager *secureAppManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)conformsToCSEventHandling;
- (BOOL)handleTransitionRequest:(id)a0;
- (void)notePrewarmRequestWasUseful;
- (void)_launchQuickNote;
- (void)_attemptToUnlockToCameraCompletion:(id /* block */)a0;
- (BOOL)handleEvent:(id)a0;
- (void)_prewarmCamera;
- (BOOL)_canHandleTransitionRequest:(id)a0 outActivatingSceneEntity:(id *)a1;
- (void)_activateAppSceneBelowDashBoard:(id)a0 secureAppType:(unsigned long long)a1 withActions:(id)a2 interactive:(BOOL)a3 completion:(id /* block */)a4;
- (void)launchQuickNote;
- (BOOL)_backgroundLaunchCamera;
- (void)_presentApplicationSceneEntity:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_coolCameraIfNecessary;
- (void)prewarmCameraHardware:(BOOL)a0 andApplication:(BOOL)a1;
- (void)notePrewarmRequestEnded;
- (void)_activateCameraAnimated:(BOOL)a0 actions:(id)a1 completion:(id /* block */)a2;
- (void)_reallyActivateAppSceneWithEntity:(id)a0 interactive:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)dealloc;
- (BOOL)wouldHandleButtonEvent:(id)a0;

@end
