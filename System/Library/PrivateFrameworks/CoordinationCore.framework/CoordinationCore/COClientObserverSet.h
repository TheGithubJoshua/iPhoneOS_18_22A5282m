@class NSDictionary, NSMapTable;

@interface COClientObserverSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSMapTable *observers;
@property (copy, nonatomic) NSDictionary *registrations;

- (id)init;
- (void)addClientObserver:(id)a0 forNotificationName:(id)a1;
- (void)_withLock:(id /* block */)a0;
- (void)removeClientObserver:(id)a0 forNotificationName:(id)a1;
- (id)clientObserversForNotificationName:(id)a0;
- (void).cxx_destruct;
- (id)clientObserversForXPCConnection:(id)a0;

@end
