@class NSMutableDictionary, NSDictionary, CKFetchRecordsOperationInfo, NSArray, NSMutableSet;
@protocol CKFetchRecordsOperationCallbacks;

@interface CKFetchRecordsOperation : CKDatabaseOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets> {
    NSMutableSet *_packagesToDestroy;
    unsigned long long _mergeableValueCount;
    unsigned long long _mergeableDeltaCount;
    unsigned long long _assetBackedMergeableDeltaCount;
    NSMutableDictionary *_recordErrors;
}

@property (readonly, nonatomic) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordsOperationInfo *operationInfo;
@property (nonatomic) BOOL isFetchCurrentUserOperation;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (nonatomic) BOOL dropInMemoryAssetContentASAP;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (copy, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (retain, nonatomic) NSMutableDictionary *recordIDsToRecords;
@property (copy, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (copy, nonatomic) NSDictionary *recordIDsToETags;
@property (copy, nonatomic) id /* block */ perRecordETagMatchedBlock;
@property (copy, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID;

+ (SEL)daemonInvocationSelector;
+ (id)fetchCurrentUserRecordOperation;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)ckSignpostBegin;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)init;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithRecordIDs:(id)a0;
- (void)handleFetchForRecordID:(id)a0 didProgress:(double)a1;
- (void).cxx_destruct;
- (void)handleFetchForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (void)setFetchRecordsCompletionBlockIVar:(id /* block */)a0;
- (void)handleAssetDataForRecordID:(id)a0 recordKey:(id)a1 arrayIndex:(long long)a2 data:(id)a3 offset:(unsigned long long)a4;
- (BOOL)claimPackagesInRecord:(id)a0 error:(id *)a1;

@end
