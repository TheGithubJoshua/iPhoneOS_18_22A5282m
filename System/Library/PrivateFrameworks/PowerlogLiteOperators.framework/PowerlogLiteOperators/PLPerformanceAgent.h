@class PLNSNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;

+ (void)load;
+ (id)entryEventPointDefinitionRollout;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventIntervalDefinitionExperiment;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventIntervalDefinitions;

- (void)initOperatorDependancies;
- (void)logEventPointSystemMemory;
- (id)init;
- (void)log;
- (void)logEventPointRollout;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logEventPointDiskFragmentation;
- (void)logEventIntervalExperiment;
- (void)logSystemMemoryToCA:(id)a0;
- (void).cxx_destruct;
- (int)countFD:(int)a0;
- (void)logEventPointJetsamPrority;
- (int)countMachPort:(int)a0;
- (void)logEventPointDiskUsage;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (void)logEventPointAPFSFragmentation;

@end
