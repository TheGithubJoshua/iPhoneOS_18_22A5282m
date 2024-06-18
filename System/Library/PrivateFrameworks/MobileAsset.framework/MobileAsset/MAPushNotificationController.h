@class NSLock, NSXPCConnection;

@interface MAPushNotificationController : NSObject <MAServiceClientProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSLock *serviceConnectionLock;

+ (id)sharedInstance;

- (id)init;
- (void)unsubscribeToChannelWithIdentifier:(id)a0;
- (id)_serviceConnection;
- (void)subscribedChannelIDsWithCompletion:(id /* block */)a0;
- (void)unsubscribeFromAllChannels;
- (void).cxx_destruct;
- (void)addSyntheticJobWithType:(id)a0 assetSpecifier:(id)a1 matchingAssetVersion:(id)a2 triggerInterval:(long long)a3;
- (id)synchronousProxy;
- (void)subscribeToChannelWithIdentifier:(id)a0;
- (void)triggerNotificationWithPayload:(id)a0;
- (id)asyncProxy;
- (void)asyncSubscribeToChannelWithIdentifier:(id)a0;
- (void)asyncUnsubscribeToChannelWithIdentifier:(id)a0;
- (void)didReceivePushNotificationWithInfo:(id)a0;
- (id)pushJobDescriptions;
- (id)subscribedChannelIDs;

@end
