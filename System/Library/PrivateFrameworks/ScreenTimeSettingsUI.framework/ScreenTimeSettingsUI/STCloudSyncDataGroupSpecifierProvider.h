@class NSString, PSSpecifier;

@interface STCloudSyncDataGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (readonly, nonatomic) PSSpecifier *toggleCloudSyncDataSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)dealloc;
- (void)_updateEnabledValue;
- (void)changeCloudSyncData:(BOOL)a0;
- (id)cloudSyncData:(id)a0;
- (void)performHSA2RepairIfNeeded:(id /* block */)a0;
- (void)presentHSA2RepairUI:(id /* block */)a0;
- (void)setCloudSyncData:(id)a0 specifier:(id)a1;
- (void)setScreenTimeSyncing:(BOOL)a0;

@end
