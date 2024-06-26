@class RBSProcessMonitor, NSString, RBSProcessState, RBSProcessHandle;

@interface AppStateMonitor : NSObject <AppStateMonitorProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_processNameInternal;
    RBSProcessMonitor *_processMonitor;
    RBSProcessHandle *_processHandle;
    struct optional<UnifiedAppState> { union { char __null_state_; struct UnifiedAppState { RBSProcessState *processState; int appState; } __val_; } ; BOOL __engaged_; } _latestState;
}

@property (readonly) int monitoredPID;
@property (readonly, copy) NSString *monitoredProcessName;
@property (readonly) int currentAppState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPID:(int)a0;
- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_process:(id)a0 didTerminate:(id)a1;
- (void)_process:(id)a0 didUpdateState:(id)a1;

@end
