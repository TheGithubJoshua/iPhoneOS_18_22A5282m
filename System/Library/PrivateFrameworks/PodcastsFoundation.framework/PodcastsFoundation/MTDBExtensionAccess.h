@class NSHashTable;

@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (BOOL)isReady;
- (void)_startObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_stopObserving;
- (void).cxx_destruct;
- (void)attemptToFix;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_handleChange;

@end
