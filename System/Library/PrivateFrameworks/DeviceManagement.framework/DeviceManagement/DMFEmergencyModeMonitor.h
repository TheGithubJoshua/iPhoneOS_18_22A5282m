@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject

@property (class, readonly) DMFEmergencyModeMonitor *sharedMonitor;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)remoteInterface;

- (id)init;
- (id)initWithXPCConnection:(id)a0;
- (BOOL)disableEmergencyModeWithError:(id *)a0;
- (void).cxx_destruct;
- (void)emergencyModeStatusWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)emergencyModeStatusWithError:(id *)a0;
- (BOOL)enableEmergencyModeForDuration:(double)a0 withError:(id *)a1;
- (BOOL)enableEmergencyModeWithError:(id *)a0;

@end
