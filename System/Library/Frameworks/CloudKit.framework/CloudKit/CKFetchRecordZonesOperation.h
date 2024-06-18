@class NSArray, CKFetchRecordZonesOperationInfo, NSMutableDictionary;
@protocol CKFetchRecordZonesOperationCallbacks;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation <CKFetchRecordZonesOperationCallbacks>

@property (readonly, nonatomic) id<CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordZonesOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *recordZoneErrors;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (nonatomic) BOOL ignorePCSFailures;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) id /* block */ perRecordZoneCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (id)fetchAllRecordZonesOperation;
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
- (id)initWithRecordZoneIDs:(id)a0;
- (void)handleFetchForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;
- (void)setFetchRecordZonesCompletionBlockIVar:(id /* block */)a0;
- (void).cxx_destruct;

@end
