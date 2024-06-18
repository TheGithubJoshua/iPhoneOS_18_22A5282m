@class BWMemoryPoolFlushAssertion, NSString, NSArray, BWMemoryAnalyticsPayload, NSMutableDictionary, NSObject, NSMutableArray, BWMemoryPool;
@protocol OS_dispatch_group, BWGraphStatusDelegate, OS_dispatch_queue;

@interface BWGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_sourceNodes;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_connections;
    NSMutableArray *_outputsWithSharedPools;
    NSMutableDictionary *_outputsWithSharedPoolsForAttachedMedia;
    NSMutableArray *_nodesToPrepareConcurrently;
    NSArray *_nodesToPrepareAfterGraphStart;
    NSMutableArray *_deferredPreparePrioritySinks;
    BOOL _deferredNodePrepareCancelled;
    NSMutableArray *_deferredStartSourceNodes;
    BOOL _haveStartedOrCancelledDeferredSourceNodes;
    BOOL _running;
    BOOL _beingConfigured;
    long long _inflightConfigurationID;
    NSObject<OS_dispatch_group> *_sourceNodesStartGroup;
    NSObject<OS_dispatch_group> *_nonDeferredSourceNodesStartGroup;
    NSObject<OS_dispatch_queue> *_sourceStartQueue;
    NSObject<OS_dispatch_group> *_startGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    BOOL _supportsLiveReconfiguration;
    BOOL _classicRetainedBufferCount;
    NSString *_applicationID;
    int _clientPID;
    NSString *_modeDescription;
    NSString *_sourceDescription;
    int _graphStateTransitionTimeoutSeconds;
    unsigned int _configurationQueuePriority;
    BWMemoryPoolFlushAssertion *_flushAssertion;
}

@property int errorStatus;
@property (readonly, nonatomic) BOOL deferredNodePrepareEnabled;
@property (nonatomic) BOOL resumesConnectionsAsNodesArePrepared;
@property (readonly, nonatomic) BOOL supportsLiveReconfiguration;
@property (nonatomic) id<BWGraphStatusDelegate> statusDelegate;
@property (retain, nonatomic) BWMemoryPool *memoryPool;
@property (readonly, nonatomic, getter=isRunningForContinuityCapture) BOOL runningForContinuityCapture;
@property (nonatomic) BOOL memoryAnalyticsReportingEnabled;
@property (readonly, nonatomic) BWMemoryAnalyticsPayload *memoryAnalyticsPayload;

+ (void)initialize;

- (id)applicationID;
- (id)_reverseBreadthFirstEnumerator;
- (id)init;
- (BOOL)stop:(id *)a0;
- (id)_sourceNodes;
- (void)cancelDeferredSourceNodeStart;
- (void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)a0;
- (void)waitForNonDeferredSourceNodesToStart;
- (void)enableDeferredStartForSourceNode:(id)a0;
- (BOOL)start:(id *)a0;
- (BOOL)connectOutput:(id)a0 toInput:(id)a1 pipelineStage:(id)a2;
- (BOOL)_resolveFormats:(id *)a0;
- (void)cancelDeferredNodePrepare;
- (void)beginConfiguration;
- (id)dotString;
- (void)setApplicationID:(id)a0;
- (BOOL)commitConfigurationWithID:(long long)a0 error:(id *)a1;
- (id)initWithConfigurationQueuePriority:(unsigned int)a0;
- (id)_depthFirstEnumeratorWithVertexOrdering:(int)a0;
- (id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)a0;
- (id)_sinkNodes;
- (id)sourceDescription;
- (void)enableConcurrentPrepareForNode:(id)a0;
- (void)setModeDescription:(id)a0;
- (int)clientPID;
- (id)modeDescription;
- (void)waitForStartOrCommitToComplete;
- (void)dealloc;
- (void)startDeferredNodePrepareIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)notifyWhenNonDeferredSourceNodesHaveStarted:(id /* block */)a0;
- (void)setClientPID:(int)a0;
- (void)startDeferredSourceNodesIfNeeded;
- (void)setSourceDescription:(id)a0;
- (id)_breadthFirstEnumerator;
- (BOOL)addNode:(id)a0 error:(id *)a1;

@end
