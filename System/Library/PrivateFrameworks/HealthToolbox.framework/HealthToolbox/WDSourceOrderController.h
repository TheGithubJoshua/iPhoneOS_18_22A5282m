@class HKSourceStore, NSHashTable;

@interface WDSourceOrderController : NSObject {
    HKSourceStore *_sourceStore;
    NSHashTable *_observers;
}

- (id)initWithHealthStore:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_notifyObserversForDataType:(id)a0 withProviders:(id)a1;
- (void)getOrderedSourcesForDataType:(id)a0 withCompletion:(id /* block */)a1;
- (void)setOrderedSources:(id)a0 dataType:(id)a1;

@end
