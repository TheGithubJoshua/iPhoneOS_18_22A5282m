@class NSHashTable;

@interface CLKComplicationObserver : NSObject {
    NSHashTable *_wakeSessionObservers;
    NSHashTable *_observers;
}

+ (id)sharedObserver;

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)complicationListDidChange;
- (void)addWakeSessionObserver:(id)a0;
- (void)reloadOrExtendForBundleID:(id)a0;
- (void)removeWakeSessionObserver:(id)a0;
- (void)wakeSessionWillBeginForBundleID:(id)a0;
- (void)wakeSessionWillEndForBundleID:(id)a0;

@end
