@class NSString, HDSPEnvironment, HKSPAccumulator, HDSPSyncedDefaultsConfiguration, NSUbiquitousKeyValueStore;
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate;

@interface HDSPCloudDefaults : NSObject <HDSPNotificationObserver, HDSPSyncedUserDefaults> {
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    NSUbiquitousKeyValueStore *_store;
    HKSPAccumulator *_accumulator;
}

@property (weak, nonatomic) id<HDSPSyncedUserDefaultsExternalChangeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hksp_reset;
- (void)hksp_setObject:(id)a0 forKey:(id)a1;
- (void)hksp_removeObjectForKey:(id)a0;
- (id)hksp_dictionaryRepresentationForKeys:(id)a0;
- (void)hksp_synchronizeKeys:(id)a0;
- (void)hdsp_setExternalChangeDelegate:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (id)hksp_dataForKey:(id)a0;
- (void)hksp_synchronize;
- (void)hksp_setInteger:(long long)a0 forKey:(id)a1;
- (id)hksp_objectForKey:(id)a0;
- (long long)hksp_integerForKey:(id)a0;
- (BOOL)hksp_boolForKey:(id)a0;
- (void)hksp_setBool:(BOOL)a0 forKey:(id)a1;
- (void)hksp_setFloat:(float)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)hksp_removeObjectsForKeys:(id)a0;
- (float)hksp_floatForKey:(id)a0;
- (void)hdsp_forceSynchronizeWithCompletion:(id /* block */)a0;
- (void)hksp_saveDictionary:(id)a0;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1;
- (id)hksp_dictionaryRepresentation;
- (id)_createKVS;
- (void)keyValueStoreDidChange:(id)a0;

@end
