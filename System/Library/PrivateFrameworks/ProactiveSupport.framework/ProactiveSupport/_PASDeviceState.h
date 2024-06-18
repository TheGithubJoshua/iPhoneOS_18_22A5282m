@interface _PASDeviceState : NSObject

+ (int)lockState;
+ (BOOL)isUnlocked;
+ (void)blockUntilFirstUnlock;
+ (BOOL)isDeviceFormattedForProtection;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; } *)a0;
+ (id)currentOsBuild;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (void)setDefaultSystemCallbacks;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (BOOL)isClassCLocked;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;

@end
