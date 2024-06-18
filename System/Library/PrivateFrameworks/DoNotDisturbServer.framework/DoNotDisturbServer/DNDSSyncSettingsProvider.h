@class DNDSSyncSettings, NPSDomainAccessor;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NPSDomainAccessor *_accessor;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (id)init;
- (void)_lock_updateCompanionCloudSyncPreference;
- (void)pairedDeviceDidChange;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isCloudSyncPreferenceEnabled;
- (id)_lock_accessor;
- (void)_beginMonitoringForChanges;
- (void).cxx_destruct;
- (void)_endMonitoringForChanges;
- (void)_lock_updatePairSyncPreferences;
- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (void)_updateCloudSyncPreferences;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;
- (void)dealloc;
- (void)setPairSyncEnabled:(BOOL)a0;
- (void)_updatePairSyncPreferences;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;

@end
