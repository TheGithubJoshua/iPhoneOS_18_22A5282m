@class NSMutableDictionary, CKDiscoverUserIdentitiesOperationInfo;
@protocol CKDiscoverAllUserIdentitiesOperationCallbacks;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation <CKDiscoverAllUserIdentitiesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *identityToContactIdentifiers;
@property (readonly, nonatomic) id<CKDiscoverAllUserIdentitiesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ userIdentityDiscoveredBlock;
@property (copy, nonatomic) id /* block */ discoverAllUserIdentitiesCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (Class)operationInfoClass;

- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)a0;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)init;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleUserIdentityDiscovery:(id)a0;

@end
