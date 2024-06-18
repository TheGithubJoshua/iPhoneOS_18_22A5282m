@class NSString;

@interface TCSBehavior : NSObject {
    int _firstUnlockToken;
}

@property (readonly, nonatomic) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL isAppleInternalInstall;
@property (readonly, nonatomic) BOOL isM8Device;
@property (readonly, nonatomic) BOOL isRunningInStoreDemoModeOrSimulator;
@property (readonly, nonatomic) NSString *regionCode;

+ (id)regionCode;
+ (id)sharedBehavior;
+ (BOOL)_isAppleInternalInstall;
+ (BOOL)isAppleInternalInstall;
+ (id)_regionCode;
+ (BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isM8Device;
+ (BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isRunningInStoreDemoModeOrSimulator;
+ (BOOL)isM8Device;
+ (BOOL)isRunningInStoreDemoModeOrSimulator;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleDeviceFirstUnlock;

@end
