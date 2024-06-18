@class NSHashTable;

@interface ATXSigtermListener : NSObject {
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserversOfSigterm;

@end
