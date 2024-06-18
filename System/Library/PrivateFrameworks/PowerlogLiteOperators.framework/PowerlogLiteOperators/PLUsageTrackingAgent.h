@class USUsageReporter;

@interface PLUsageTrackingAgent : PLAgent

@property (retain) USUsageReporter *usageReporter;

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventIntervalDefinitionUsageTime;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)logEventIntervalUsageTime;
- (void).cxx_destruct;
- (void)initTaskOperatorDependancies;
- (void)logEntriesFromUsageReports:(id)a0;

@end
