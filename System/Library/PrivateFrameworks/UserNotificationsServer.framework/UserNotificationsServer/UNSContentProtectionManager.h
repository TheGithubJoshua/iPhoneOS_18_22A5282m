@class UNSKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNSKeyedObservable *_observable;
}

- (BOOL)isProtectedDataAvailable;
- (id)init;
- (long long)_queue_observedState;
- (id)classDStrategyExcludedFromBackup;
- (id)classCStrategyExcludedFromBackup;
- (id)classCStrategy;
- (long long)_queue_keyBagLockState;
- (void).cxx_destruct;
- (void)addContentProtectionObserver:(id)a0;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(BOOL)a1;
- (void)dealloc;
- (void)removeContentProtectionObserver:(id)a0;
- (id)classDStrategy;
- (BOOL)deviceUnlockedSinceBoot;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (long long)observedState;

@end
