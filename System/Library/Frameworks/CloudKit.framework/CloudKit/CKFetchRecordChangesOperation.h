@class CKServerChangeToken, NSMutableDictionary, NSData, CKFetchRecordZoneChangesOperationInfo, CKRecordZoneID, NSArray;
@protocol CKFetchRecordChangesOperationCallbacks;

@interface CKFetchRecordChangesOperation : CKDatabaseOperation <CKFetchRecordChangesOperationCallbacks>

@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long status;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) BOOL fetchAllChanges;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (copy, nonatomic) id /* block */ serverChangeTokenFetchedBlock;
@property (copy, nonatomic) id /* block */ changeTokensUpdatedBlock;
@property (readonly, nonatomic) id<CKFetchRecordChangesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (readonly, nonatomic) BOOL moreComing;
@property (copy, nonatomic) id /* block */ fetchRecordChangesCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (SEL)daemonCallbackCompletionSelector;
+ (Class)operationInfoClass;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)ckSignpostBegin;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)init;
- (id)activityCreate;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleChangeForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (long long)changeTypesFromSetCallbacks;
- (void)handleChangeSetCompletionWithServerChangeToken:(id)a0 clientChangeTokenData:(id)a1 recordChangesStatus:(long long)a2 reply:(id /* block */)a3;
- (void)handleDeleteForRecordID:(id)a0;
- (void)handleOperationDidCompleteWithServerChangeToken:(id)a0 clientChangeTokenData:(id)a1 recordChangesStatus:(long long)a2 metrics:(id)a3 error:(id)a4;
- (id)initWithRecordZoneID:(id)a0 previousServerChangeToken:(id)a1;

@end
