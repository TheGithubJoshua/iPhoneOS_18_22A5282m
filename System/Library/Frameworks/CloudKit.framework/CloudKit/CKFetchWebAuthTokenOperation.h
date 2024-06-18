@class NSString, CKFetchWebAuthTokenOperationInfo;
@protocol CKFetchWebAuthTokenOperationCallbacks;

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation <CKFetchWebAuthTokenOperationCallbacks>

@property (copy, nonatomic) NSString *webAuthToken;
@property (readonly, nonatomic) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchWebAuthTokenOperationInfo *operationInfo;
@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) id /* block */ fetchWebAuthTokenCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (SEL)daemonCallbackCompletionSelector;
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
- (void).cxx_destruct;
- (void)handleOperationDidCompleteWithWebAuthToken:(id)a0 metrics:(id)a1 error:(id)a2;
- (id)initWithAPIToken:(id)a0;

@end
