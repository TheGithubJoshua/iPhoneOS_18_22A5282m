@class NSArray, CKModifyRecordZonesOperationInfo, NSMutableDictionary, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks> {
    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZonesByZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
}

@property (readonly, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyRecordZonesOperationInfo *operationInfo;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) id /* block */ perRecordZoneSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordZoneDeleteBlock;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;

+ (SEL)daemonInvocationSelector;
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
- (void)handleSaveForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;
- (void)setModifyRecordZonesCompletionBlockIVar:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleDeleteForRecordZoneID:(id)a0 error:(id)a1;

@end
