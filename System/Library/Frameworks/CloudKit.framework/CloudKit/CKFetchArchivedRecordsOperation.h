@class NSMutableDictionary, NSDictionary, CKFetchArchivedRecordsOperationInfo, NSArray;
@protocol CKFetchArchivedRecordsOperationCallbacks;

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation <CKFetchArchivedRecordsOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *statusByZoneID;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (readonly, nonatomic) id<CKFetchArchivedRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchArchivedRecordsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchArchivedRecordsCompletionBlock;

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
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleFetchForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (id)initWithRecordZoneIDs:(id)a0 configurationsByRecordZoneID:(id)a1;
- (void)handleChangeSetCompletionForRecordZoneID:(id)a0 serverChangeToken:(id)a1 archivedRecordStatus:(long long)a2 error:(id)a3 reply:(id /* block */)a4;
- (id)recordZoneArchivesStatusByZoneID;

@end
