@class SPBeaconManager;

@interface SBLowPowerAlertItem : SBAlertItem {
    unsigned int _talkLevel;
}

@property (nonatomic) BOOL showFindMyAlert;
@property (nonatomic) BOOL hasEnableLowPowerModeAction;
@property (retain, nonatomic) SPBeaconManager *beaconManager;

+ (void)initialize;
+ (BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned int)a0;
+ (unsigned int)_thresholdForLevel:(unsigned int)a0;
+ (void)setBatteryLevel:(unsigned int)a0;

- (id)init;
- (id)initWithLevel:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)_isLowPowerModeEnabled;
- (id)_batteryPercentageString;
- (id)_createSystemApertureElement;
- (void)_didDeactivateForDismissAction;
- (void)_enableLowPowerMode;
- (id)_enableLowPowerModeActionTitle;
- (void)_enableLowPowerModeActionTriggered;
- (id)_lowBatteryTitle;
- (BOOL)_supportsLowPowerMode;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)didDeactivateForReason:(int)a0;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)wakeDisplay;

@end
