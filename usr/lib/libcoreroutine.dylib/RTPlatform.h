@interface RTPlatform : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentPlatform;
+ (BOOL)operatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)operatingSystemNoGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromString:(id)a0;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 atLeastVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 equalToVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 noGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a1;

- (id)productType;
- (id)serialNumber;
- (id)deviceClass;
- (id)systemModel;
- (id)buildVersion;
- (id)systemVersion;
- (BOOL)internalInstall;
- (BOOL)lowEndHardware;
- (BOOL)supportsScenarioTriggers;
- (BOOL)macOSPlatform;
- (BOOL)paired;
- (BOOL)supportsCoreRoutineCapability;
- (BOOL)isTinkerPaired;
- (BOOL)simulatorPlatform;
- (BOOL)isWatchPaired;
- (BOOL)supportsMultiUser;
- (BOOL)watchPlatform;
- (BOOL)iPhoneDevice;
- (BOOL)iPhonePlatform;
- (id)userAssignedDeviceName;
- (BOOL)supportsPairedDevice;
- (unsigned long long)deviceMemorySize;
- (BOOL)usesTSCForClustering;

@end
