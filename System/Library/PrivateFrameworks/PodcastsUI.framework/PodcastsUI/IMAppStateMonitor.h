@class UIApplication;

@interface IMAppStateMonitor : NSObject

@property (retain, nonatomic) UIApplication *app;
@property (nonatomic) long long applicationState;
@property (nonatomic) double backgroundTimeRemaining;

+ (id)sharedInstance;

- (void)applicationWillResignActive;
- (id)init;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void).cxx_destruct;
- (void)applicationDidFinishLaunching;

@end
