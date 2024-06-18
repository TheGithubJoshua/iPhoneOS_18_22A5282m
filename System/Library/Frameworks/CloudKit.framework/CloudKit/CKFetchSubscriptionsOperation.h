@class CKFetchSubscriptionsOperationInfo, NSArray, NSMutableDictionary;
@protocol CKFetchSubscriptionsOperationCallbacks;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks> {
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}

@property (readonly, nonatomic) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchSubscriptionsOperationInfo *operationInfo;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (copy, nonatomic) NSArray *subscriptionIDs;
@property (copy, nonatomic) id /* block */ perSubscriptionCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchSubscriptionCompletionBlock;

+ (id)fetchAllSubscriptionsOperation;
+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)ckSignpostBegin;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)init;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithSubscriptionIDs:(id)a0;
- (void)setFetchSubscriptionCompletionBlockIVar:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleSubscriptionFetchForSubscriptionID:(id)a0 subscription:(id)a1 error:(id)a2;

@end
