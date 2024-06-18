@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (int)idNumberFromIDDiff:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitions;
+ (BOOL)shouldLogSoCStatsPMGRCountersID;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;
+ (id)maskedNameForChannelID:(unsigned long long)a0;
+ (id)columnNameForChannelID:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;

- (id)init;
- (id)initWithAgent:(id)a0;
- (void).cxx_destruct;
- (void)logEventBackwardSoCStatsPMGRCounters;
- (void)initTaskOperatorDependancies;

@end
