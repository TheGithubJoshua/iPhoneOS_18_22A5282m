@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks>

@property (nonatomic) unsigned long long quotaAvailable;
@property (readonly, nonatomic) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ fetchUserQuotaCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (SEL)daemonCallbackCompletionSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)a0 metrics:(id)a1 error:(id)a2;

@end
