@class VSAMSBagLoadOperation, VSDeveloperServiceConnection, NSString, NSOperationQueue, VSRemoteNotifier, VSPreferences;

@interface VSIdentityProviderAvailabilityInfoCenter : NSObject <VSRemoteNotifierDelegate>

@property (nonatomic) long long status;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (nonatomic) BOOL hasDeterminedInitialStatus;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSDeveloperServiceConnection *developerServiceConnection;
@property (retain, nonatomic) VSAMSBagLoadOperation *mockAMSBagLoadOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (id)defaultCenter;

- (id)init;
- (void)determineIdentityProviderAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void).cxx_destruct;
- (void)_sendStatusChangeNotification;
- (void)_accountStoreChanged:(id)a0;
- (void)_beginStatusUpdateAttemptWithCompletionHandler:(id /* block */)a0;

@end
