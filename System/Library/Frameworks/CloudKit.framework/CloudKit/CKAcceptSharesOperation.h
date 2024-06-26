@class CKAcceptSharesOperationInfo, NSMutableDictionary, NSArray;
@protocol CKAcceptSharesOperationCallbacks;

@interface CKAcceptSharesOperation : CKOperation <CKAcceptSharesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL;
@property (readonly, nonatomic) id<CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKAcceptSharesOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ acceptSharesCompletionBlock;

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
- (void).cxx_destruct;
- (id)initWithShareMetadatas:(id)a0;
- (void)handleShareAcceptanceForURL:(id)a0 share:(id)a1 error:(id)a2;
- (void)setAcceptSharesCompletionBlockIVar:(id /* block */)a0;

@end
