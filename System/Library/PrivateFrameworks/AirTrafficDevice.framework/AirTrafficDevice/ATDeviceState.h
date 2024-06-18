@interface ATDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (void)blockUntilFirstUnlock;
+ (BOOL)isClassCLocked;
+ (void)registerBlockForFirstUnlock:(id /* block */)a0;

@end
