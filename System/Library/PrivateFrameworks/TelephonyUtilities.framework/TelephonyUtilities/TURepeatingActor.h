@class TURepeatingAction, NSObject;
@protocol OS_dispatch_queue;

@interface TURepeatingActor : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isStopped) BOOL stopped;
@property (nonatomic, getter=isCurrentlyPerformingAction) BOOL currentlyPerformingAction;
@property (retain, nonatomic) TURepeatingAction *currentRepeatingAction;
@property (retain, nonatomic) TURepeatingAction *pendingRepeatingAction;
@property (copy, nonatomic) id /* block */ attemptNextIterationBlock;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (void)_stopWithDidFinish:(BOOL)a0;
- (id)init;
- (void)stop;
- (void)beginRepeatingAction:(id /* block */)a0 iterations:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_completeWithDidFinish:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_hasIterationsRemaining;
- (void)beginRepeatingAction:(id /* block */)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;
- (void)_attemptNextIteration;
- (void)_beginRepeatingAction:(id)a0;

@end
