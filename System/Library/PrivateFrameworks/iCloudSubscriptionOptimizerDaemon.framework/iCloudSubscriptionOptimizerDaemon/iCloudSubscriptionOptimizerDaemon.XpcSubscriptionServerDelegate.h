@interface iCloudSubscriptionOptimizerDaemon.XpcSubscriptionServerDelegate : NSObject <NSXPCListenerDelegate>

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;

@end
