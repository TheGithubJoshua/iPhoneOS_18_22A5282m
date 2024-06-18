@interface VUIApplicationNotificationManager : NSObject

+ (id)sharedInstance;

- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)dealloc;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_applicationWillTerminateNotification:(id)a0;
- (void)listenForApplicationNotifications;

@end
