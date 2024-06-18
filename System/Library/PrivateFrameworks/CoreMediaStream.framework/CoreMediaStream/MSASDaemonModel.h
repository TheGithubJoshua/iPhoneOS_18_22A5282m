@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (id)init;
- (id)earliestNextActivityDate;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (void)clearAllNextActivityDates;
- (id)nextActivityDateByPersonID;

@end
