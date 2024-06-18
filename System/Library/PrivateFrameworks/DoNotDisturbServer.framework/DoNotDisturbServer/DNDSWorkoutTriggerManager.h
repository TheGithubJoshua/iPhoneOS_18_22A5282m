@class NSString, NSMutableDictionary, NPSDomainAccessor, NPSManager, NSObject;
@protocol OS_dispatch_queue, DNDSWorkoutTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource;

@interface DNDSWorkoutTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NPSDomainAccessor *_accessor;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_npsQueue;
}

@property (weak, nonatomic) id<DNDSWorkoutTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_refresh;
- (void)refresh;
- (id)_assertionIdentifierForHealthKitWorkoutEvent:(id)a0;
- (id)init;
- (void)pairedDeviceDidChange;
- (BOOL)_isWorkoutTriggerEnabledForModeConfiguration:(id)a0;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (BOOL)_isWorkoutDNDNanoPreferenceEnabled;
- (void)_migrateWorkoutDNDNanoPreference;
- (void)_setWorkoutDNDNanoPreferenceEnabled:(BOOL)a0;
- (void)_refreshForNanoPreferenceChange;
- (void)_updateNanoPreferencesForRefreshWithModeConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_configureWorkoutTriggerWithMode:(id)a0;
- (id)_accessor;
- (void)_refreshMigratingIfNecessary;
- (void)dealloc;
- (void)refreshMigratingIfNecessary;
- (void)_npsQueue_refreshForNanoPreferenceChange;

@end
