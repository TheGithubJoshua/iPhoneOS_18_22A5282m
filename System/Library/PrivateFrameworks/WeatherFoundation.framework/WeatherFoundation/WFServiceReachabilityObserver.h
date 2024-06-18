@class NSMutableDictionary, NWPathEvaluator, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface WFServiceReachabilityObserver : NSObject

@property (retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain) NSMutableDictionary *blockObserversForUUID;
@property (retain) NSHashTable *observerObjects;
@property (nonatomic) long long reachability;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NWPathEvaluator *serviceReachabilityEvaluator;
@property (readonly) BOOL isServiceAvailable;

+ (id)sharedObserver;

- (BOOL)removeObserver:(id)a0;
- (id)init;
- (void)removeAllObservers;
- (id)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setupReachability;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_deliverReachabilityUpdate:(long long)a0;
- (id)addBlockObserver:(id /* block */)a0;
- (BOOL)removeBlockObserverWithHandle:(id)a0;

@end
