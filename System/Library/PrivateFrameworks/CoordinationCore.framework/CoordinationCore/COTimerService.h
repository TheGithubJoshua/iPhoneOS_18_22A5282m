@class NSString, COClientObserverSet;

@interface COTimerService : COService <COTimerManagerServiceInterface, COMeshTimerAddOnDelegate>

@property (readonly, nonatomic) COClientObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAllowedClient:(id)a0;
+ (id)serviceWithDelegate:(id)a0;

- (void)_postNotificationName:(id)a0 forTimers:(id)a1 toAddOn:(id)a2 requiresUserInfo:(BOOL)a3;
- (void)_addOnRemoved:(id)a0;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (void)timerAddOn:(id)a0 didDismissTimers:(id)a1;
- (void)timerAddOn:(id)a0 didChangeTimers:(id)a1;
- (void)_didResetTimerAddOn:(id)a0;
- (void)canDispatchForAccessoryUniqueIdentifier:(id)a0 categoryType:(id)a1 asInstance:(id)a2 cluster:(id)a3 reply:(id /* block */)a4;
- (void)addObserverForNotificationName:(id)a0 constraints:(id)a1 asInstance:(id)a2 cluster:(id)a3 withCallback:(id /* block */)a4;
- (void)timerAddOn:(id)a0 didUpdateTimers:(id)a1;
- (void)timersforAccessoryUniqueIdentifier:(id)a0 asInstance:(id)a1 cluster:(id)a2 withCallback:(id /* block */)a3;
- (BOOL)_canRequestCreationOfCluster:(id)a0;
- (void).cxx_destruct;
- (void)removeObserverForNotificationName:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)addTimer:(id)a0 asInstance:(id)a1 cluster:(id)a2 withCallback:(id /* block */)a3;
- (void)timerAddOn:(id)a0 didAddTimers:(id)a1;
- (BOOL)_applicableToCluster:(id)a0;
- (void)didChangeCompositionForTimerAddOn:(id)a0;
- (void)timerAddOn:(id)a0 didFireTimers:(id)a1;
- (void)dismissTimerWithIdentifier:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)timerAddOn:(id)a0 didRemoveTimers:(id)a1;
- (void)updateTimer:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)removeTimer:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)didResetTimerAddOn:(id)a0;
- (void)timersForAccessories:(id)a0 cluster:(id)a1 callback:(id /* block */)a2;
- (void)_clientLost:(id)a0;
- (void)_addOnAdded:(id)a0;

@end
