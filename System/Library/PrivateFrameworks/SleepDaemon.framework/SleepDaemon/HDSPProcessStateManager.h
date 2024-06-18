@class NSMutableSet, RBSProcessMonitor;
@protocol HDSPProcessStateManagerDelegate;

@interface HDSPProcessStateManager : NSObject {
    RBSProcessMonitor *_processStateMonitor;
    NSMutableSet *_processIdentifiers;
    id /* block */ _processStateProvider;
}

@property (weak, nonatomic) id<HDSPProcessStateManagerDelegate> delegate;

- (id)init;
- (id)initWithProcessStateProvider:(id /* block */)a0;
- (void)_process:(id)a0 didUpdateFromState:(id)a1 toState:(id)a2;
- (void).cxx_destruct;
- (void)stopMonitoringProcessState:(int)a0;
- (BOOL)isProcessSuspended:(int)a0;
- (void)_updateConfiguration;
- (void)dealloc;
- (void)startMonitoringProcessState:(int)a0;

@end
