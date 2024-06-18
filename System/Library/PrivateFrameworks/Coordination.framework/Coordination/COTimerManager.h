@class COObserverSet, NSXPCConnection, HMAccessory, NSUUID, NSString;
@protocol COTimerManagerConnectionProvider;

@interface COTimerManager : NSObject <COTimerManagerClientInterface, COObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (readonly, nonatomic) id<COTimerManagerConnectionProvider> provider;
@property (readonly, nonatomic) COObserverSet *observers;
@property (readonly, copy, nonatomic) id cluster;
@property (readonly, nonatomic) NSUUID *instanceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)_withLock:(id /* block */)a0;
- (void)_handleNotification:(id)a0;
- (id)timers;
- (id)updateTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)addTimer:(id)a0;
- (id)removeTimer:(id)a0;
- (id)_timersForAccessoryUniqueIdentifier:(id)a0;
- (BOOL)_canDispatchForAssociatedAccessory;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)_lostConnectionToService;
- (void)dealloc;
- (void)_registerObserverWithName:(id)a0;
- (id)initForAccessory:(id)a0 withConnectionProvider:(id)a1;
- (id)timersForAccessories:(id)a0;
- (id)initWithConnectionProvider:(id)a0;
- (id)timersForAccessory:(id)a0;

@end
