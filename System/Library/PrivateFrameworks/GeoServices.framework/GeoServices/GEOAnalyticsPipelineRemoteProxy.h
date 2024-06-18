@class NSString, NSOperationQueue, geo_isolater, NSObject;
@protocol OS_xpc_object;

@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy> {
    NSOperationQueue *_opQueue;
    unsigned long long _maxOpCount;
    unsigned long long _droppedLogMsgCount;
    geo_isolater *_enqueueLock;
    NSObject<OS_xpc_object> *_sharedXPCConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_geodXPCConnection;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;
- (void)_reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)_reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)setEvalMode:(BOOL)a0;
- (void)processMapsDeletionWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)_updateSharedStateType:(int)a0 state:(id)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)_reportMonthlyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;
- (void).cxx_destruct;
- (void)_reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;
- (void)showEvalDataWithVisitorBlock:(id /* block */)a0;
- (void)_enqueueOperation:(id)a0;
- (void)flushEvalData;
- (void)reportMonthlyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;
- (void)reportRRLogMessage:(id)a0;
- (void)_reportDailySettings:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)updateSharedStateType:(int)a0 state:(id)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)runAggregationTasks;
- (void)reportDailySettings:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;

@end
