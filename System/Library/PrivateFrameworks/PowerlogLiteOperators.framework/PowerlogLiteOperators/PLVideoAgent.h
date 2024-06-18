@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMFileListener;
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener;
@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (void)load;
+ (id)defaults;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)entryEventBackwardDefinitions;
+ (id)stateEnumForStateString:(id)a0;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)logEventBackwardCMFileWithEntry:(id)a0 withProcess:(id)a1;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void).cxx_destruct;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventBackwardCMHlsWithEntry:(id)a0 withProcess:(id)a1;
- (void)logEventBackwardCMCrabsWithEntry:(id)a0 withProcess:(id)a1;
- (void)logEventIntervalGroupSession:(id)a0;

@end
