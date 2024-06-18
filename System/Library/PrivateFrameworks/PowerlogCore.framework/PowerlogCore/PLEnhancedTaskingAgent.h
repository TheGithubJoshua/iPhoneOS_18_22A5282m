@interface PLEnhancedTaskingAgent : PLAgent

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)allowlistForSignpostAggregatedData;
+ (id)entryEventIntervalDefinitionUINavigationController;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (void)initTaskOperatorDependancies;

@end
