@class PLTimer, NSMutableDictionary, PLCoreStorage, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLOperator : NSObject

@property (retain) NSMutableDictionary *filterDefinitions;
@property (retain) NSMutableDictionary *filterDeltaLastEntryIDs;
@property (retain) NSMutableArray *bufferedEntries;
@property (retain) PLTimer *triggerBufferFlush;
@property (retain) NSMutableDictionary *lastLogDateForEntryKey;
@property (readonly, weak) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly, weak) PLCoreStorage *storage;
@property (readonly, weak) NSString *className;
@property (readonly, weak) NSString *storageQueueName;

+ (void)load;
+ (id)defaults;
+ (id)operator;
+ (id)entryEventBackwardDefinitions;
+ (id)className;
+ (BOOL)isEnabled;
+ (id)entryKeys;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (BOOL)fullMode;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)setEnabled:(BOOL)a0;
+ (id)entryEventForwardDefinitions;
+ (BOOL)isDebugEnabled;
+ (id)createEntriesForMetrics:(id)a0 withData:(id)a1 withDate:(id)a2;
+ (id)entryDefinitions;
+ (id)entryKeyForType:(id)a0 andName:(id)a1;
+ (id)entryKeyForType:(id)a0 andName:(id)a1 isDynamic:(BOOL)a2;
+ (BOOL)isDebugEnabledForKey:(id)a0;
+ (id)storageQueueName;
+ (id)trimConditionsWithEntryKey:(id)a0 withTrimDate:(id)a1 withCount:(id)a2 withStartDateKey:(id)a3;
+ (id)trimConditionsWithEntryKey:(id)a0 withTrimDate:(id)a1 withDuration:(id)a2 withStartDateKey:(id)a3;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (id)entryKeys;
- (void)flushBuffer;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEntry:(id)a0;
- (void)dealloc;
- (void)logEntries:(id)a0 withGroupID:(id)a1;
- (void)initTaskOperatorDependancies;
- (void)updateEntry:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)isDebugEnabled;
- (BOOL)defaultBoolForKey:(id)a0;
- (double)defaultDoubleForKey:(id)a0;
- (long long)defaultLongForKey:(id)a0;
- (id)defaultObjectForKey:(id)a0;
- (void)enableBufferFlushTimer:(unsigned long long)a0;
- (id)entryDefinitions;
- (id)initForTest;
- (BOOL)isDebugEnabledForKey:(id)a0;
- (void)logForSubsystem:(id)a0 category:(id)a1 data:(id)a2;
- (void)logForSubsystem:(id)a0 category:(id)a1 data:(id)a2 date:(id)a3;
- (void)logFromCFCallback:(id)a0;
- (void)logProportionateAggregateEntry:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)logRequestNotification:(id)a0;
- (void)postEntries:(id)a0;
- (void)postEntries:(id)a0 withGroupID:(id)a1;
- (BOOL)postFilteredNotificationForEntry:(id)a0 withFilteredDefition:(id)a1 withNotificationName:(id)a2;
- (void)setupFilterRequest:(id)a0;
- (BOOL)shouldWriteEntry:(id)a0 withDebug:(BOOL)a1;
- (void)subscribeNotificationsForEntries;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;
- (double)timeIntervalSinceLastLogForEntryKey:(id)a0;

@end
