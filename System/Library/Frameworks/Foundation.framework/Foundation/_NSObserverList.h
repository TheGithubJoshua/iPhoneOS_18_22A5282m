@interface _NSObserverList : NSObject {
    id _owner;
    id _observers;
    _Atomic unsigned int _observerCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

- (id)init;
- (void)finishObserving;
- (void)removeObservation:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (void)_receiveBox:(id)a0;

@end
