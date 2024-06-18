@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (BOOL)isRunningOnInternalBuild;
+ (id)deviceStateMonitor;

- (id)init;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (BOOL)isDataAvailableForClassC;
- (void)handleKeyBagLockNotification;
- (void)dealloc;
- (BOOL)deviceIsPasswordConfigured;

@end
