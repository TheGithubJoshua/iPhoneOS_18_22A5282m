@interface PLContinuityAgent : PLAgent

+ (void)load;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (id)entryEventForwardDefinitions;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;

@end
