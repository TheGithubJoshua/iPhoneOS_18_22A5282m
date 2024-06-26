@class CKServerChangeToken, NSMutableDictionary, IMDRecordZoneManager, NSObject, IMDCKMessageSyncCKOperationFactory;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore;

@interface IMDCKMessageSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) id<IMDCKSyncTokenStore> syncTokenStore;
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken;
@property (retain, nonatomic) IMDCKMessageSyncCKOperationFactory *CKOperationFactory;
@property (retain, nonatomic) CKServerChangeToken *archivedRecordSyncToken;
@property (nonatomic) unsigned long long deviceConditionsToCheck;
@property (retain, nonatomic) NSMutableDictionary *visitedChats;
@property (nonatomic) BOOL encounteredIncompatibleMessage;

+ (id)sharedInstance;

- (long long)syncControllerRecordType;
- (id)init;
- (void)_scheduleOperation:(id)a0;
- (void).cxx_destruct;
- (id)_chatRegistry;
- (id)_recordsToSave;
- (void)deleteMessagesZone;
- (id)_recordsToSaveWithAttemptCount:(unsigned long long)a0;
- (id)_changeTokenKey;
- (id)_recordKeyManagerSharedInstance;
- (void)_resetSyncToken;
- (id)_ckUtilitiesInstance;
- (id)_constructMessageRecordIDUsingTombStoneDictionary:(id)a0;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)a0;
- (void)_deleteMessagesWithRecordIDs:(id)a0 completion:(id /* block */)a1;
- (BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)a0 deviceConditionsToCheck:(unsigned long long)a1 currentBatchCount:(long long)a2 maxBatchCount:(long long)a3;
- (BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)a0 maxBatchCount:(long long)a1 activity:(id)a2;
- (BOOL)_doesAnyRecordZoneIDHavePendingArchivedRecords:(long long)a0;
- (void)_fetchArchivedRecordsIfNeeded:(BOOL)a0 currentBatchCount:(long long)a1 maxNumberOfBatches:(long long)a2 activity:(id)a3 withCompletionBlock:(id /* block */)a4;
- (void)_fetchMessageZoneChangesSyncType:(long long)a0 currentBatchCount:(long long)a1 maxNumberOfBatches:(long long)a2 activity:(id)a3 completionBlock:(id /* block */)a4;
- (void)_hasMarkedAllMessagesAsNeedingSync;
- (BOOL)_isCoreDuetSyncForMaxBatchCount:(long long)a0 activity:(id)a1;
- (BOOL)_isDiskSpaceAvailableForSyncType:(long long)a0 currentBatchCount:(long long)a1;
- (BOOL)_isValidCKRecordToSync:(id)a0;
- (BOOL)_kickOffWriteIfNeededForSyncType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (void)_kickOffWriteOnCKQueueWithActivity:(id)a0 completion:(id /* block */)a1;
- (void)_markAllIncompatibleMessagesForDeletion;
- (void)_markAllUnsuccessFullSyncMessagesAsNeedingSync;
- (unsigned long long)_messageDeleteBatchSize;
- (id)_messageRecordSalt;
- (BOOL)_messageZoneCreated;
- (id)_messageZoneID;
- (void)_migrateSyncTokens;
- (void)_needsToMarkAllMessagesAsNeedingSync;
- (void)_noteSyncEnded;
- (long long)_numberOfBatchesOfMessagesToFetchInInitialSync;
- (unsigned long long)_numberOfMessagesToUpload;
- (unsigned long long)_numberOfRecordsToFetchForSyncType:(long long)a0;
- (id)_operationErrorForModifyingRecordCompletion:(id)a0;
- (void)_processArchivedRecordsFetchCompletionZoneID:(id)a0 serverChangeToken:(id)a1 moreComing:(BOOL)a2 currentBatchCount:(long long)a3 maxNumberOfBatches:(long long)a4 activity:(id)a5 error:(id)a6 completionBlock:(id /* block */)a7;
- (void)_processFetchArchivedRecordCompletionWithError:(id)a0 WithCompletionBlock:(id /* block */)a1;
- (void)_processFetchRecordZoneChangesCompletionWithError:(id)a0 completionBlock:(id /* block */)a1;
- (void)_processModifyRecordsCompletion:(id)a0 deletedRecordIDs:(id)a1 operationError:(id)a2 isLastBatchOfWrite:(BOOL)a3 activity:(id)a4 writeCompletionBlock:(id /* block */)a5;
- (void)_processRecordChange:(id)a0;
- (void)_processRecordDeletionCompletion:(id)a0 error:(id)a1 completionBlock:(id /* block */)a2;
- (void)_processRecordWriteCompletionForRecord:(id)a0 NSError:(id)a1;
- (void)_processRecordZoneFetchCompletionZoneID:(id)a0 serverChangeToken:(id)a1 clientChangeTokenData:(id)a2 moreComing:(BOOL)a3 NSError:(id)a4 syncType:(long long)a5 currentBatchCount:(long long)a6 maxNumberOfBatches:(long long)a7 shouldFetchArchivedRecords:(BOOL)a8 activity:(id)a9 completionBlock:(id /* block */)a10;
- (void)_resetArvchivedRecordSyncToken;
- (id)_sharedIMDMessageStore;
- (BOOL)_shouldDeferCoreDuetMessagesSyncWithActivity:(id)a0;
- (BOOL)_shouldFetchArchivedRecords:(id)a0;
- (BOOL)_shouldMarkAllMessagesAsNeedingSync;
- (id)_syncOperationGroupName;
- (void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)a0 maxBatchCount:(long long)a1;
- (void)_writeDirtyMessagesToCloudKitWithActivity:(id)a0 completion:(id /* block */)a1;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)deleteMessageSyncToken;
- (void)incompatibleMessageDeleteDetected:(id)a0;
- (id)initWithSyncTokenStore:(id)a0;
- (void)syncDeletedMessagesToCloudKitWithCompletion:(id /* block */)a0;
- (void)syncMessagesWithSyncType:(long long)a0 deviceConditionsToCheck:(unsigned long long)a1 activity:(id)a2 completionBlock:(id /* block */)a3;

@end
