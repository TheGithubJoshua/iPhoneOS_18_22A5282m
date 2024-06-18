@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;

@interface IMDMessageHistorySyncController : NSObject

@property (nonatomic) BOOL replayControllerNeedsSync;
@property (nonatomic) BOOL ckChatSyncControllerNeedsSync;
@property (nonatomic) BOOL idsTransportLogNeedsSync;
@property (retain, nonatomic) id<IMDMessageHistorySyncTask> currentlyExecutingSyncTask;
@property (retain, nonatomic) id<IMDMessageHistorySyncTaskFactory> syncTaskFactory;

- (id)initWithMessageHistorySyncTaskFactory:(id)a0;
- (void)replayControllerWantsToSync;
- (void)ckChatSyncControllerWantsToSync;
- (void)IDSTransportLogWantsToSync;
- (void)_scheduleNextEvaluation;
- (void)dealloc;
- (void)_evaluateStateAndActIfNeeded;

@end
