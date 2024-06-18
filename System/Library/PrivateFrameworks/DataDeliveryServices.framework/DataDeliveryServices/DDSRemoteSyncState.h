@class NSString, DDSBackgroundActivityScheduler, NSDate;
@protocol DDSRemoteSyncStateDelegate;

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate>

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long syncStatus;
@property (nonatomic) unsigned long long attemptCount;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) DDSBackgroundActivityScheduler *scheduler;
@property (weak, nonatomic) id<DDSRemoteSyncStateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildVersionString;
+ (double)timeIntervalUntilNextRegularUpdate;

- (void)resetState;
- (id)init;
- (void)requestRetry;
- (BOOL)shouldRequestCompleteRefresh;
- (void)requestUpdate;
- (void)loadState;
- (id)initWithDelegate:(id)a0;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (void)saveState;
- (void)completedUpdateCycleWithError:(id)a0;
- (void)scheduleRegularUpdate;
- (void).cxx_destruct;
- (void)beganUpdateCycle;
- (void)scheduleRetry;
- (void)requestCompleteRefresh;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (void)performScheduledActivityWithIdentifier:(id)a0;
- (double)timeBetweenSyncs;

@end
