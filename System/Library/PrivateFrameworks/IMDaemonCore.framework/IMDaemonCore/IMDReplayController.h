@class NSDictionary, IMDReplayStorageIterationContext, IMDReplayStorageController;

@interface IMDReplayController : NSObject {
    IMDReplayStorageController *_suspendedStorageController;
}

@property (retain, nonatomic) NSDictionary *syncTaskByServiceName;
@property (retain, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext;
@property (copy, nonatomic) id /* block */ automationCompletionBlock;
@property (retain, nonatomic) IMDReplayStorageController *storageController;
@property (readonly, nonatomic) BOOL isRecordingReplayDB;

+ (long long)batchSize;
+ (id)sharedInstance;

- (id)init;
- (void)restoreDefaultStoreControllerInstance;
- (void)scheduleSyncTaskForServices:(id)a0;
- (void)endRecordingReplayDatabase;
- (void)startRecordingReplayDatabase;
- (void)_processBatch:(id)a0;
- (BOOL)storeMessage:(id)a0 type:(unsigned char)a1 error:(id *)a2;
- (void)deleteReplayDBIfNotUnderFirstUnlock;
- (void)overrideStorageControllerWithDatabaseFromPath:(id)a0;
- (void)_fetchNexBatchOfMessagesAndReplay;
- (void)replayMessages;
- (void)dealloc;
- (id)initWithStorageController:(id)a0;
- (void)replayMessagesWithCompletion:(id /* block */)a0;

@end
