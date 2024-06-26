@class NSArray, NSString, NSMutableDictionary, NSOperationQueue, NSObject, APSConnection;
@protocol OS_dispatch_queue;

@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate, CKPropertiesDescription> {
    NSString *_apsEnvironment;
    NSMutableDictionary *_subscriptionInfos;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
    APSConnection *_apsConnection;
    unsigned long long _strategy;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSArray *notificationObservers;
@property (readonly, copy, nonatomic) NSString *machServiceName;
@property BOOL useOpportunisticPushTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void)handlePushNotificationWithPayload:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithStrategy:(unsigned long long)a0;
- (id)redactedDescription;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (BOOL)isRegisteredForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (BOOL)hasInitializedAPSConnection;
- (void)connectionDidReconnect:(id)a0;
- (id)initWithStrategy:(unsigned long long)a0 machServiceName:(id)a1;
- (void)didReceiveIncomingPushWithPayload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)uniqueKeyForSubscriptionID:(id)a0 inDatabase:(id)a1;
- (void).cxx_destruct;
- (void)unregisterForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (void)registerForSubscriptionWithID:(id)a0 inDatabase:(id)a1 handler:(id /* block */)a2;
- (id)apsConnectionOnQueue;
- (void)dealloc;

@end
