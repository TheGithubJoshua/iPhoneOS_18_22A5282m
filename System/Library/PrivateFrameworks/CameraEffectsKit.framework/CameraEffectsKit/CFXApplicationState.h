@interface CFXApplicationState : NSObject

@property (class, readonly, nonatomic) CFXApplicationState *sharedInstance;

@property (nonatomic) BOOL isRegisteredForEvents;
@property (nonatomic) long long applicationState;

+ (void)beginMonitoringApplicationState;

- (void)applicationDidBecomeActive:(id)a0;
- (id)init;
- (void)applicationWillResignActive:(id)a0;
- (void)registerForEvents;
- (void)unregisterForEvents;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
