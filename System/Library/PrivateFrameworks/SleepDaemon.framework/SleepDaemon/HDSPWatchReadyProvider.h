@class NSString, HDSPSpringboardMonitor, HDSPEnvironment;
@protocol HDSPSystemReadyDelegate;

@interface HDSPWatchReadyProvider : NSObject <HDSPSpringboardObserver, HDSPSystemReadyProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) HDSPSpringboardMonitor *springboardMonitor;
@property (readonly, nonatomic) BOOL observingRestore;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (weak, nonatomic) id<HDSPSystemReadyDelegate> delegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)initWithEnvironment:(id)a0;
- (void)restoreDidFinish;
- (void)_withLock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)springboardDidStart;
- (void)_finishWaitingForInitialSync;
- (BOOL)_isInRootRobot;
- (BOOL)_waitForInitialSync;
- (BOOL)isInRootRobotOrDemoMode;

@end