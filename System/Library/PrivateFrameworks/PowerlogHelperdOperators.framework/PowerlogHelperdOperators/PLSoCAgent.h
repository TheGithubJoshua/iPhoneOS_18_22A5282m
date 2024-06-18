@interface PLSoCAgent : PLAgent

+ (void)load;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)initTaskOperatorDependancies;
- (id)requestLTSStats;
- (void)taskingEndNotificationReceived:(id)a0;
- (void)logEventPointLifetimeServoStats:(id)a0;
- (void)registerForTaskingEndNotification;
- (void)registerForTaskingStartNotification;
- (void)taskingStartNotificationReceived:(id)a0;

@end
