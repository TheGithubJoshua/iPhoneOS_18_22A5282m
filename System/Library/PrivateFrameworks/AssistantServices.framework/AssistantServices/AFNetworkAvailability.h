@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (void)removeObserver:(id)a0;
- (id)init;
- (BOOL)isAvailable;
- (void)_startObservingAvailability;
- (void)_stopObservingAvailability;
- (void)_notifyObservers;
- (void)_updateState;
- (void).cxx_destruct;
- (void)_availabilityChanged;
- (void)addObserver:(id)a0;
- (void)_clearState;

@end
