@class PLXPCListenerOperatorComposition;

@interface PLMDNSAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *startBrowse;
@property (retain) PLXPCListenerOperatorComposition *stopBrowse;
@property (retain) PLXPCListenerOperatorComposition *startAdvertise;
@property (retain) PLXPCListenerOperatorComposition *stopAdvertise;
@property (retain) PLXPCListenerOperatorComposition *startResolve;
@property (retain) PLXPCListenerOperatorComposition *stopResolve;

+ (void)load;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionsReceivedMDNSEvent;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void).cxx_destruct;
- (void)logEventPointMDNS:(id)a0 forEvent:(id)a1;

@end
