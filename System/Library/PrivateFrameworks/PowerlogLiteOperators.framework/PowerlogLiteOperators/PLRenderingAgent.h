@class FBSDisplayLayoutMonitor, NSString, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSNumber;

@interface PLRenderingAgent : PLAgent <FBSDisplayLayoutObserver>

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) PLEntryNotificationOperatorComposition *pluggedInStateNotification;
@property unsigned int lastFrameCount;
@property (retain) NSNumber *deviceIsPlugged;
@property (retain) PLXPCListenerOperatorComposition *frameStatsListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)entryEventBackwardDefinitionFrameStats;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionFrameCount;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (void)logEventForwardFrameCount:(id)a0;
- (id)init;
- (void)enableCAScreenTelemetry;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)log;
- (void)handleConnectedChange:(id)a0;
- (BOOL)shouldLogFrameStats;
- (void)logEventBackwardFrameStats:(id)a0;
- (void)logFrameCount:(unsigned int)a0 forConnectedState:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initTaskOperatorDependancies;
- (void)disableCAScreenTelemetry;

@end
