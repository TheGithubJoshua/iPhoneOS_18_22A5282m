@class NSString, TUCallCenter, SBLockScreenEmergencyDialerController;

@interface SBDashBoardEmergencyDialerViewController : SBHomeGestureDismissableCoverSheetViewController <SBLockScreenEmergencyDialerDelegate> {
    TUCallCenter *_callCenter;
    SBLockScreenEmergencyDialerController *_controller;
    BOOL _inEmergencyCall;
    BOOL _inEmergencyCallMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aggregateBehavior:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)presentationType;
- (void)viewDidLoad;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (long long)presentationPriority;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)aggregateAppearance:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_activateEmergencyDialerController;
- (void)_deactivateEmergencyDialerController;
- (void)_updateEmergencyCallMode:(id)a0;
- (void)emergencyDialer:(id)a0 willDeactivateWithError:(id)a1;

@end
