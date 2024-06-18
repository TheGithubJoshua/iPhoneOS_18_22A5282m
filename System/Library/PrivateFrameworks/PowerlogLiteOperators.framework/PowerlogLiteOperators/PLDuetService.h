@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (void)load;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)aggregateNameDuetEnergyAccumulator;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)eventIntervalDefinitionDuetEvents;

- (void)initOperatorDependancies;
- (id)init;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)dealloc;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (long long)registrationModeStringToEnum:(id)a0;
- (void)setupBatterySaverModeForNotification:(id)a0;

@end
