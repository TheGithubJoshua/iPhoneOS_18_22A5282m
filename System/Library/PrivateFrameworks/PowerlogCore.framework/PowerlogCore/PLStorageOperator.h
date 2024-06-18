@interface PLStorageOperator : PLOperator

+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventPointDefinitionOTA;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventPointDefinitionTimeCorrection;

- (void)initOperatorDependancies;
- (void)logEventPointPreUnlock:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (void)log;
- (void)logEventPointOTA:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;

@end
