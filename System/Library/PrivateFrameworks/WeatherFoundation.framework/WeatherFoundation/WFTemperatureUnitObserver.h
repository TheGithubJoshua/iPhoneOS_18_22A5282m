@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFTemperatureUnitObserver : NSObject

@property (retain) NSObject<OS_dispatch_queue> *temperatureUnitUpdateQueue;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain) NSMutableDictionary *blockObserversForUUID;
@property (retain) NSHashTable *observerObjects;
@property int userTemperatureUnit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) int temperatureUnit;

+ (id)sharedObserver;

- (BOOL)removeObserver:(id)a0;
- (id)init;
- (void)removeAllObservers;
- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_updateTemperatureUnit;
- (id)addBlockObserver:(id /* block */)a0;
- (void)q_notifyObserversOfUpdatedTemperatureUnit:(int)a0;
- (void)q_updateTemperatureUnit;
- (BOOL)removeBlockObserverWithHandle:(id)a0;

@end
