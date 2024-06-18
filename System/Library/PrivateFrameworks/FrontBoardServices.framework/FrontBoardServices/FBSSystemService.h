@class FBSOpenApplicationService, FBSSystemAppProxy;

@interface FBSSystemService : NSObject {
    FBSSystemAppProxy *_systemAppProxy;
    FBSOpenApplicationService *_defaultOpenApplicationService;
}

+ (id)clientCallbackQueue;
+ (id)sharedService;

- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void)reboot;
- (void)shutdown;
- (id)init;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (BOOL)isPasscodeLockedOrBlocked;
- (void)setBadgeValue:(id)a0 forBundleID:(id)a1;
- (void)shutdownWithOptions:(id)a0;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (id)badgeValueForBundleID:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)dataResetWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)setKeyboardFocusApplicationWithBundleID:(id)a0 pid:(int)a1 completion:(id /* block */)a2;
- (void)setKeyboardFocusApplicationPID:(int)a0 completion:(id /* block */)a1;
- (void)openApplication:(id)a0 options:(id)a1 clientPort:(unsigned int)a2 withResult:(id /* block */)a3;
- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (void)openApplication:(id)a0 options:(id)a1 withResult:(id /* block */)a2;
- (void)openURL:(id)a0 application:(id)a1 options:(id)a2 clientPort:(unsigned int)a3 withResult:(id /* block */)a4;
- (unsigned int)createClientPort;
- (id)processHandleForApplication:(id)a0;
- (void)setKeyboardFocusApplicationPID:(int)a0 deferringToken:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)cleanupClientPort:(unsigned int)a0;
- (id)systemApplicationBundleIdentifier;
- (void)sendActions:(id)a0 withResult:(id /* block */)a1;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (int)pidForApplication:(id)a0;

@end
