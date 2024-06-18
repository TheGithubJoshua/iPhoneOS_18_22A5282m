@class HKSPObserverSet;

@interface HDSPSpringboardMonitor : NSObject

@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) BOOL springboardStarted;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } springboardStartedLock;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) BOOL isSpringboardStarted;

- (void)_startMonitoring;
- (void)removeObserver:(id)a0;
- (void)_stopMonitoring;
- (void)_withLock:(id /* block */)a0;
- (BOOL)_checkSpringBoardStarted;
- (id)initWithCallbackScheduler:(id)a0 isAppleWatch:(BOOL)a1;
- (void).cxx_destruct;
- (id)_processName;
- (void)_checkAndNotify;
- (void)dealloc;
- (void)addObserver:(id)a0;

@end
