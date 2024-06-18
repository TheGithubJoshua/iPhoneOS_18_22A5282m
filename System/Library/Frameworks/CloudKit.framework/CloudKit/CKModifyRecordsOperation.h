@class NSData, NSMutableDictionary, CKModifyRecordsOperationInfo, NSMutableSet, NSDictionary, NSMutableArray, NSArray;
@protocol CKModifyRecordsOperationCallbacks;

@interface CKModifyRecordsOperation : CKDatabaseOperation <CKModifyRecordsOperationCallbacks>

@property (retain, nonatomic) NSMutableArray *savedRecords;
@property (retain, nonatomic) NSMutableArray *deletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordsByRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (retain, nonatomic) NSMutableDictionary *assetsByRecordIDAndRecordKey;
@property (nonatomic) BOOL shouldReportRecordsInFlight;
@property (retain, nonatomic) NSMutableSet *packagesToDestroy;
@property (readonly, nonatomic) id<CKModifyRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyRecordsOperationInfo *operationInfo;
@property (nonatomic) BOOL alwaysFetchPCSFromServer;
@property (nonatomic) BOOL shouldOnlySaveAssetContent;
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (copy, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (copy, nonatomic) id /* block */ recordsInFlightBlock;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (copy, nonatomic) NSArray *recordsToSave;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) long long savePolicy;
@property (copy, nonatomic) NSData *clientChangeTokenData;
@property (nonatomic) BOOL atomic;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ perRecordSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordDeleteBlock;
@property (copy, nonatomic) id /* block */ modifyRecordsCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (void)ckSignpostBegin;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)setModifyRecordsCompletionBlockIVar:(id /* block */)a0;
- (id)init;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)handleRecordUploadForRecordID:(id)a0 recordKey:(id)a1 arrayIndex:(long long)a2 signature:(id)a3 size:(unsigned long long)a4 paddedFileSize:(unsigned long long)a5 uploaded:(BOOL)a6 uploadReceipt:(id)a7 uploadReceiptExpiration:(double)a8 wrappedAssetKey:(id)a9 clearAssetKey:(id)a10 referenceSignature:(id)a11;
- (BOOL)_prepareFieldValuesForUploadWithError:(id *)a0;
- (void)handleDeleteForRecordID:(id)a0 error:(id)a1;
- (void)destroyPackagesInRecords:(id)a0;
- (void).cxx_destruct;
- (void)handleRecordModificationForRecordID:(id)a0 didProgress:(double)a1;
- (void)destroyPackages:(id)a0;
- (void)handleSaveForRecordID:(id)a0 recordMetadata:(id)a1 error:(id)a2;
- (BOOL)claimPackagesInRecord:(id)a0 error:(id *)a1;
- (void)handleRecordIDsInFlight:(id)a0 reply:(id /* block */)a1;

@end
