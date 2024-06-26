@class NSString, NSTimer;

@interface _DBWorkspaceStateChangeSession : NSObject <DBWorkspaceStateChangeSession> {
    BOOL _invalidated;
    id /* block */ _stateChangeBlock;
    id /* block */ _invalidationBlock;
    NSTimer *_watchdogTimer;
}

@property (weak, nonatomic) id owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setState:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_watchdogTimerFired;
- (void)dealloc;
- (void)_startWatchdogTimer;
- (id)initWithStateChangeBlock:(id /* block */)a0 invalidationBlock:(id /* block */)a1;

@end
