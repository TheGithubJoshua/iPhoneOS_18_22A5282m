@interface EXXPCUtil : NSObject

+ (int)servicePidFromXPCConnection:(id)a0;
+ (id)sharedInstance;
+ (int)addExternalServiceForPid:(int)a0 path:(id)a1 overlay:(id)a2;
+ (void)assertIsExtensionProcess;
+ (void)checkInWithLaunchd;

@end
