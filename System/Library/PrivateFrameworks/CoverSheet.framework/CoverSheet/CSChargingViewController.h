@class NSString, CSBatteryChargingInfo, BCBatteryDeviceController, NSMutableSet, CSBatteryChargingView;

@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {
    BCBatteryDeviceController *_batteryController;
    CSBatteryChargingView *_chargingView;
    CSBatteryChargingInfo *_chargingInfo;
    NSMutableSet *_displayedBatteryDevices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)aggregateBehavior:(id)a0;
- (void)_updateChargingViewIfNecessary;
- (long long)presentationStyle;
- (long long)presentationType;
- (void)viewDidLoad;
- (void)connectedDevicesDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)a0;
- (void)_updateChargingViewLegibility;
- (double)durationBeforeDismissal;
- (void)_createNewChargingViewForDoubleBattery:(id)a0;
- (id)initWithChargingInfo:(id)a0;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)a0;

@end
