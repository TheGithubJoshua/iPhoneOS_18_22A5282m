@class REObserverStore;

@interface REObservableSingleton : RESingleton {
    REObserverStore *_store;
}

@property (readonly, nonatomic) unsigned long long numberOfObservers;

- (void)removeObserver:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)enumerateObservers:(id /* block */)a0;
- (void)addObserver:(id)a0;

@end
