@class NSMutableDictionary, NSMutableSet;

@interface SBDisplayReferenceModeMonitor : NSObject {
    NSMutableDictionary *_displayToCachedStatus;
    NSMutableDictionary *_CADisplayIdentifierToObservers;
    NSMutableDictionary *_CADisplayIdentifierToFBSDisplayConfig;
    NSMutableSet *_observedDisplays;
}

+ (BOOL)canAddObserverForDisplayWithConfiguration:(id)a0;

- (void)removeReferenceModeStatusObserver:(id)a0 forDisplayWithConfiguration:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_configurationForDisplay:(id)a0;
- (void)_stopObservingDisplay:(id)a0;
- (void)_enumerateObserversOfDisplay:(id)a0 usingBlock:(id /* block */)a1;
- (void)_setConfig:(id)a0 forDisplay:(id)a1;
- (BOOL)_shouldNotifyObserversOfReferenceModeStatusChangeForDisplay:(id)a0;
- (void)_removeObserver:(id)a0 forDisplay:(id)a1;
- (long long)_cachedStatusForDisplay:(id)a0;
- (void).cxx_destruct;
- (void)_startObservingDisplayIfNeeded:(id)a0;
- (long long)_referenceModeStatusForDisplay:(id)a0;
- (void)addReferenceModeStatusObserver:(id)a0 forDisplayWithConfiguration:(id)a1;
- (long long)referenceModeStatusForDisplayWithConfiguration:(id)a0;
- (void)dealloc;
- (id)_observersForDisplay:(id)a0;
- (void)_addObserver:(id)a0 forDisplay:(id)a1;
- (id)_displayForConfiguration:(id)a0;
- (void)_setCachedStatus:(long long)a0 forDisplay:(id)a1;
- (void)_removeCachedStatusForDisplay:(id)a0;

@end
