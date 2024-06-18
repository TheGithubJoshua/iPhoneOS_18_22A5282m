@class PLXPCResponderOperatorComposition;

@interface PLFSEventAgent : PLAgent

@property (retain) PLXPCResponderOperatorComposition *fileListResponder;
@property struct __FSEventStream { } *stream;

+ (void)load;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addLogFileNameEntry:(BOOL)a0 withType:(id)a1 withName:(id)a2;
- (void)logLogFileName:(id)a0 withName:(id)a1;
- (void)registerforFSEventNotification;

@end
