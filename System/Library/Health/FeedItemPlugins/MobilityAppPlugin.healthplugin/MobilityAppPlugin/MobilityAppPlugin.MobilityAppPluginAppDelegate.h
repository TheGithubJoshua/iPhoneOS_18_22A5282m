@interface MobilityAppPlugin.MobilityAppPluginAppDelegate : NSObject <UIApplicationTestingDelegate, WDNotificationPolicy> {
    void /* unknown type, empty encoding */ analyticsManager;
}

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;

@end
