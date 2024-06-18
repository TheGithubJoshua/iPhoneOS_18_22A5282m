@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)init;
- (void)authenticateVeridianWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)signVeridianChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (id)_init;
- (void)verifyBatteryMatch:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)authenticateBatteryWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateTouchControllerWithChallenge:(id)a0 completionHandler:(id /* block */)a1 updateRegistry:(BOOL)a2;
- (void)authenticateTouchControllerWithChallenge:(id)a0 completionHandler:(id /* block */)a1;

@end
