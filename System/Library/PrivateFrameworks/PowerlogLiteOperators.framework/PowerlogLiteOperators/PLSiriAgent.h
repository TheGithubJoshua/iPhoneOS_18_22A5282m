@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;
@property (retain) PLXPCListenerOperatorComposition *siriConfigListener;

+ (void)load;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionSiriConfig;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (unsigned long long)convertMode:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)convertRecognition:(id)a0;
- (unsigned long long)convertSiriEvent:(id)a0;
- (void)logEventForwardSiriConfig:(id)a0;
- (void)logEventForwardDictationConnection:(id)a0;

@end
