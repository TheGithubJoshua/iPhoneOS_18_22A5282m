@class CTStewieState, NSObject;
@protocol OS_dispatch_queue, CTStewieStateMonitorDelegate, OS_nw_path_evaluator;

@interface CTStewieStateMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fLock;
    CTStewieState *fState;
    id<CTStewieStateMonitorDelegate> fDelegate;
    NSObject<OS_dispatch_queue> *fDelegateQueue;
    NSObject<OS_nw_path_evaluator> *fPathEvaluator;
    BOOL fStarted;
}

- (id)getState;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (BOOL)start;
- (void).cxx_destruct;
- (BOOL)startWithEndpoint:(id)a0 parameters:(id)a1;
- (void)dealloc;
- (id)stateFromPath:(id)a0;

@end
