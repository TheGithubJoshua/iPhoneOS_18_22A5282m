@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (void)load;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventPointDefinitionDistributionEvents;

- (void)initOperatorDependancies;
- (id)init;
- (void)startAccounting;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)stopAccounting;

@end
