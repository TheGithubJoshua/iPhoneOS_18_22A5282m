@class PLCFNotificationOperatorComposition;

@interface PLPersistentConnectionAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *intervalChangedNotification;
@property (readonly) PLCFNotificationOperatorComposition *preferencesChangedNotification;

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void).cxx_destruct;
- (long long)pollingInterval;
- (void)logEventForwardConfig;
- (void)logEventPointCache;
- (BOOL)pushEnabled;

@end
