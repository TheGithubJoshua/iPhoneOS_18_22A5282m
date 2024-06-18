@class PLXPCListenerOperatorComposition;

@interface PLInitialSyncAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (void)load;
+ (id)entryEventIntervalDefinitions;

- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logInitialSyncFromEvent:(id)a0;
- (void)logInitialSyncActivityFromEvent:(id)a0;

@end
