@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (void)cancel;
- (id)taskIdentifier;
- (void).cxx_destruct;
- (void)launch;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;

@end
