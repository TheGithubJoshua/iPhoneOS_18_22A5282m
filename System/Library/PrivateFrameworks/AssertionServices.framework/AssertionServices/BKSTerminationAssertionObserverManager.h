@class NSObject, NSMutableSet, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface BKSTerminationAssertionObserverManager : NSObject {
    RBSProcessMonitor *_monitor;
    BOOL _monitorIsReady;
    NSMutableSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableSet *_launchPreventedBundleIDs;
}

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_createMonitor;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (unsigned long long)efficacyForBundleID:(id)a0;
- (BOOL)hasTerminationAssertionForBundleID:(id)a0;

@end
