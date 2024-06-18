@interface SDLockHandler : NSObject

+ (void)checkSBLockState;
+ (BOOL)deviceFirstUnlockedInMKB;
+ (BOOL)unlockedSinceBoot;
+ (BOOL)deviceFirstUnlockedInSB;
+ (BOOL)migrationComplete;
+ (void)_deviceLockSetupSB;
+ (BOOL)deviceUnlocked;
+ (void)_deviceLockSetup;
+ (void)setupHandlerWithIndexQueue:(id)a0 pipelineOnly:(BOOL)a1 indexEnabled:(BOOL)a2 delegate:(id)a3;
+ (void)_deviceLockSetupMKB;
+ (void)_deviceLockSetUpMigrationCheck;
+ (void)_checkSBLockState:(int)a0;

@end
