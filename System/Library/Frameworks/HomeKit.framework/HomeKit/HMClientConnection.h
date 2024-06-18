@class NSUUID, HMFMessageDispatcher, NSString, HMXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMXPCClient *xpcClient;
@property (retain, nonatomic) NSUUID *uuid;
@property BOOL shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)sharedInstance;
+ (BOOL)areAnyTelevisionAccessoriesConfigured;
+ (BOOL)areAnySpeakersConfigured;
+ (BOOL)areAnyAppleTVAccessoriesConfigured;
+ (BOOL)areAnyHomePodsConfigured;
+ (BOOL)areAnyLargeHomePodConfigured;
+ (BOOL)areHomesConfigured;
+ (BOOL)areAnyAccessoriesConfigured;
+ (id)siriHomeIdentifier;
+ (BOOL)areAnyHomePodMiniConfigured;
+ (id)siriCurrentHome;

- (void)_start;
- (id)init;
- (void)sendIntentRequestCommand:(id)a0 withPayload:(id)a1 completionHandler:(id /* block */)a2;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)a0;
- (void)_retrySendingSignOutWithCompletion:(id /* block */)a0;
- (void)_reportResultsTohandler:(id /* block */)a0;
- (void)_registerToDaemon;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)shouldRetrySendingSignOutMessageDueToError:(id)a0;
- (void)notifyAccountStatusUpdate:(unsigned long long)a0 accountIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_primaryAccountDidChange:(id)a0 modified:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithNoValidation;
- (void)_reportIntentResultTohandler:(id /* block */)a0;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;

@end
