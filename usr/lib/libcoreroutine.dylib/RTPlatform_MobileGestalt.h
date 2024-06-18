@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {
    NSUserDefaults *_userDefaults;
    RTNanoRegistry *_nanoRegistry;
}

- (id)productType;
- (id)deviceClass;
- (id)systemModel;
- (id)init;
- (id)systemVersion;
- (BOOL)internalInstall;
- (BOOL)lowEndHardware;
- (BOOL)supportsScenarioTriggers;
- (BOOL)macOSPlatform;
- (void).cxx_destruct;
- (BOOL)supportsCoreRoutineCapability;
- (BOOL)isTinkerPaired;
- (id)initWithNanoRegistry:(id)a0 userDefaults:(id)a1;
- (BOOL)simulatorPlatform;
- (BOOL)isWatchPaired;
- (BOOL)supportsMultiUser;
- (BOOL)watchPlatform;
- (BOOL)iPhoneDevice;
- (BOOL)iPhonePlatform;
- (id)userAssignedDeviceName;

@end
