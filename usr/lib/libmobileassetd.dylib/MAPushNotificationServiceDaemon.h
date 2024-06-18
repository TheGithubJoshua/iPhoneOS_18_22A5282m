@class NSXPCListener, MAPushServiceConnection, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MAPushNotificationServiceDaemon : NSObject <MAPushServiceConnectionDelegate, NSXPCListenerDelegate, MAPushServiceProtocol>

@property (retain) NSXPCListener *listener;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) NSObject<OS_dispatch_queue> *clientUpstreamQueue;
@property (retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain) NSMutableArray *clients;
@property (retain) MAPushServiceConnection *pushServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (long long)channelTypeForDevice;
- (void)triggerPushNotificationWithPayload:(id)a0;
- (void)unsubscribeToChannelWithIdentifier:(id)a0;
- (void)channelSubscriptionsFailedWithReasons:(id)a0;
- (void)subscribeToChannelForCurrentPlatform;
- (void)pushJobsAwaitingTriggerWithCompletion:(id /* block */)a0;
- (void)subscribedChannelIDsWithCompletion:(id /* block */)a0;
- (void)startListeningForConnections;
- (void)unsubscribeFromAllChannels;
- (void).cxx_destruct;
- (void)addSyntheticJobWithType:(id)a0 assetSpecifier:(id)a1 matchingAssetVersion:(id)a2 triggerInterval:(long long)a3;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)subscribeToChannelWithIdentifier:(id)a0;
- (void)didReceivePushNotification:(id)a0;

@end
