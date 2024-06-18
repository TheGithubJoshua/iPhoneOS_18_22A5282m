@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (BOOL)isLowPowerModeEnabled;
+ (BOOL)isInternalBuild;
+ (BOOL)isiPad;
+ (BOOL)isBetaBuild;
+ (id)internalDeviceCode;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isAudioAccessory;
+ (id)sharedInstance;
+ (id)deviceUUID;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isDNUEnabled;
+ (BOOL)isLowEndHardware;

- (id)init;
- (void)dealloc;

@end
