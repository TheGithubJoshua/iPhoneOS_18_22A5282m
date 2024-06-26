@class NSArray;
@protocol CKReplaceMergeableDeltasOperationCallbacks;

@interface CKDReplaceMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKReplaceMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

- (id)nameForState:(unsigned long long)a0;
- (void)main;
- (BOOL)makeStateTransition;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void).cxx_destruct;
- (void)_encryptMergeableDeltas;
- (void)_replaceMergeableDeltas;
- (void)handleReplaceDeltasRequest:(id)a0 result:(id)a1;

@end
