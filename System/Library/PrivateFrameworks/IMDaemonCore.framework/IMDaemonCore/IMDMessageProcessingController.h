@class NSTimer;
@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject

@property (retain, nonatomic) id<IMDMessagePTaskStore> pTaskStore;
@property (retain, nonatomic) NSTimer *processingTimer;

- (id)init;
- (void)_processingTimerFired;
- (id)initWithMessagesPTaskStore:(id)a0;
- (BOOL)_pref_IMDCoreSpotlightHasMigrated;
- (void)scheduleInitialProcessingCheck;
- (void)messageProcessingTaskAdded:(id)a0;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)a0;
- (void)_indexSpotlightIfNeedForPTask:(id)a0;
- (void)dealloc;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)a0;

@end
