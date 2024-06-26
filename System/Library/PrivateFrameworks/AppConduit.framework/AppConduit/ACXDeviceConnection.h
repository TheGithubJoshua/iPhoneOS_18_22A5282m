@class NSString, NSXPCConnection, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, ACXDeviceConnectionDelegate;

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL observersEnabled;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *observerReEstablishTimer;
@property (nonatomic) BOOL monitoringForDeviceChanges;
@property (weak, nonatomic) id<ACXDeviceConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disableTestMode;
+ (void)performUninstallationCleanup;
+ (void)_removeFilesAtURL:(id)a0;
+ (id)sharedDeviceConnection;
+ (void)enableTestMode;

- (void)_onQueue_beginMonitoringNanoRegistryDeviceState;
- (void)fetchApplicationOnDeviceWithPairingID:(id)a0 withBundleID:(id)a1 completion:(id /* block */)a2;
- (id)locallyAvailableApplicationWithBundleID:(id)a0 forPairedDevice:(id)a1 error:(id *)a2;
- (id)_synchronousProxyWithErrorHandler:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (id)_locallyAvailableApplicationWithBundleID:(id)a0 forDeviceWithPairingID:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)_onQueue_endMonitoringNanoRegistryDeviceState;
- (id)init;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)a0 completion:(id /* block */)a1;
- (void)fetchProvisioningProfilesWithCompletion:(id /* block */)a0;
- (void)removeApplication:(id)a0 fromPairedDevice:(id)a1 completion:(id /* block */)a2;
- (BOOL)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(id)a0 returningDatabaseUUID:(id *)a1 lastSequenceNumber:(unsigned long long *)a2 error:(id *)a3;
- (void)applicationsInstalled:(id)a0 onDeviceWithPairingID:(id)a1;
- (BOOL)installRequestFailedForApp:(id)a0 onDeviceWithPairingID:(id)a1 failureReason:(id)a2 wasUserInitiated:(BOOL)a3 error:(id *)a4;
- (void)setAlwaysInstall:(id)a0 forDevice:(id)a1;
- (id)installableSystemAppWithBundleID:(id)a0 onDeviceWithPairingID:(id)a1 error:(id *)a2;
- (void)activeComplicationsForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)applicationIsInstalledOnPairedDevice:(id)a0 withBundleID:(id)a1 completion:(id /* block */)a2;
- (void)_fetchLocallyAvailableApplicationWithBundleID:(id)a0 forDeviceWithPairingID:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)applicationOnDeviceWithPairingID:(id)a0 withBundleID:(id)a1 error:(id *)a2;
- (void)fetchApplicationOnPairedDevice:(id)a0 withBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)a0 forPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)a0 forDeviceWithPairingID:(id)a1 completion:(id /* block */)a2;
- (BOOL)acknowledgeTestFlightInstallBegunForApp:(id)a0 onDeviceWithPairingID:(id)a1 error:(id *)a2;
- (void)enumerateInstallableSystemAppsOnDeviceWithPairingID:(id)a0 withBlock:(id /* block */)a1;
- (void)updatedInstallStateForApplicationsWithInfo:(id)a0;
- (void)setAllExistingAppsShouldBeInstalled:(BOOL)a0 forNewDevice:(id)a1;
- (void)installApplicationAtURL:(id)a0 onDeviceWithPairingID:(id)a1 installOptions:(id)a2 size:(long long)a3 completion:(id /* block */)a4;
- (void)removeProvisioningProfileWithID:(id)a0 fromPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)fetchInstalledComplicationsWithErrorCompletion:(id /* block */)a0;
- (BOOL)getSystemAppInstallability:(BOOL *)a0 onPairedDevice:(id)a1 withBundleID:(id)a2 error:(id *)a3;
- (void)_invalidateXPCConnection;
- (void)applicationIsInstalledOnPairedDevice:(id)a0 withCompanionBundleID:(id)a1 completion:(id /* block */)a2;
- (void)retryPendingAppInstallationsForPairedDevice:(id)a0;
- (id)locallyAvailableApplicationWithContainingApplicationBundleID:(id)a0 forDeviceWithPairingID:(id)a1 error:(id *)a2;
- (void)_deviceDidBecomeActiveNotification:(id)a0;
- (void)enumerateLocallyAvailableApplicationsForPairedDevice:(id)a0 options:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)provisioningProfilesForApplicationWithBundleID:(id)a0 forPairedDevice:(id)a1 error:(id *)a2;
- (id)provisioningProfilesForPairedDevice:(id)a0 error:(id *)a1;
- (void)fetchInstalledApplicationsForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)a0 forDeviceWithPairingID:(id)a1 completion:(id /* block */)a2;
- (void)_deviceDidPairNotification:(id)a0;
- (id)applicationOnPairedDevice:(id)a0 withBundleID:(id)a1 error:(id *)a2;
- (void)updatePreferencesForApplicationWithIdentifier:(id)a0 preferences:(id)a1 writingToPreferencesLocation:(unsigned long long)a2 forPairedDevice:(id)a3 options:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)getAlwaysInstallWithCompletion:(id /* block */)a0;
- (void)removeProvisioningProfileWithID:(id)a0 completion:(id /* block */)a1;
- (void)setAlwaysInstall:(id)a0;
- (void)updatePreferencesForApplicationWithIdentifier:(id)a0 preferences:(id)a1 forPairedDevice:(id)a2 completion:(id /* block */)a3;
- (BOOL)installApplication:(id)a0 withProvisioningProfiles:(id)a1 onPairedDevice:(id)a2 installationStatus:(long long *)a3 error:(id *)a4;
- (id)copyLocalizedValuesFromAllDevicesForInfoPlistKeys:(id)a0 forAppWithBundleID:(id)a1 fetchingFirstMatchingLocalizationInList:(id)a2 error:(id *)a3;
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)a0 forPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)_onQueue_reEstablishObserverConnectionIfNeeded;
- (void)observerRegistrationSuccessful;
- (id)copyRemoteDuplicatedClassInfoWithError:(id *)a0;
- (void)fetchInfoForApplicationWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(id)a0 completion:(id /* block */)a1;
- (void)setUpdatePendingForCompanionApp:(id)a0 completion:(id /* block */)a1;
- (BOOL)updatePreferencesForApplicationWithIdentifier:(id)a0 preferences:(id)a1 writingToPreferencesLocation:(unsigned long long)a2 forPairedDevice:(id)a3 options:(unsigned long long)a4 error:(id *)a5;
- (void)cancelPendingInstallations;
- (BOOL)getAlwaysInstall:(BOOL *)a0 forPairedDevice:(id)a1 error:(id *)a2;
- (BOOL)getApplicationIsInstalled:(BOOL *)a0 onDeviceWithPairingID:(id)a1 withCompanionBundleID:(id)a2 error:(id *)a3;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)a0 forPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)removeApplication:(id)a0 fromPairedDevice:(id)a1 completionWithError:(id /* block */)a2;
- (BOOL)removeApplication:(id)a0 fromPairedDevice:(id)a1 removalStatus:(long long *)a2 error:(id *)a3;
- (void)systemAppIsInstallableOnPairedDevice:(id)a0 withBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchInstallableSystemAppWithBundleID:(id)a0 onDeviceWithPairingID:(id)a1 completion:(id /* block */)a2;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)a0 withErrorCompletion:(id /* block */)a1;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)installProvisioningProfileWithURL:(id)a0 onPairedDevice:(id)a1 completion:(id /* block */)a2;
- (id)_proxyWithErrorHandler:(id /* block */)a0;
- (void)enumerateInstallableSystemAppsOnPairedDevice:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)getApplicationIsInstalled:(BOOL *)a0 withBundleID:(id)a1 onPairedDevice:(id)a2 error:(id *)a3;
- (void)getAlwaysInstallForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (BOOL)installProvisioningProfileWithURL:(id)a0 onPairedDevice:(id)a1 error:(id *)a2;
- (BOOL)installApplicationAtURL:(id)a0 onDeviceWithPairingID:(id)a1 installOptions:(id)a2 size:(long long)a3 installationStatus:(long long *)a4 error:(id *)a5;
- (void)installApplicationAtURL:(id)a0 onPairedDevice:(id)a1 installOptions:(id)a2 size:(long long)a3 completion:(id /* block */)a4;
- (void)updatePreferencesForApplicationWithIdentifier:(id)a0 preferences:(id)a1 completion:(id /* block */)a2;
- (void)applicationsUpdated:(id)a0 onDeviceWithPairingID:(id)a1;
- (void)installApplication:(id)a0 withProvisioningProfiles:(id)a1 completionWithError:(id /* block */)a2;
- (void)cancelUpdatePendingForCompanionApp:(id)a0 completion:(id /* block */)a1;
- (void)enumerateInstalledApplicationsOnPairedDevice:(id)a0 withBlock:(id /* block */)a1;
- (void)installApplication:(id)a0 completionWithError:(id /* block */)a1;
- (BOOL)getApplicationIsInstalled:(BOOL *)a0 onAnyPairedDeviceWithCompanionBundleID:(id)a1 error:(id *)a2;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)a0;
- (id)watchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)a0 error:(id *)a1;
- (void)systemAppIsInstallableOnDeviceWithPairingID:(id)a0 withBundleID:(id)a1 completion:(id /* block */)a2;
- (void)installProvisioningProfileWithURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)_onQueue_enableObserversIfNeededForAValidXPCConnection;
- (void)fetchInstalledComplicationsForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)enumerateInstalledApplicationsOnDeviceWithPairingID:(id)a0 withBlock:(id /* block */)a1;
- (id)_validateAndExtractProfiles:(id)a0 error:(id *)a1;
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)a0 withBundleID:(id)a1 completion:(id /* block */)a2;
- (void)enumerateLocallyAvailableApplicationsForDeviceWithPairingID:(id)a0 options:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (BOOL)getApplicationIsInstalled:(BOOL *)a0 onPairedDevice:(id)a1 withCompanionBundleID:(id)a2 error:(id *)a3;
- (void)updateInstallProgressForApplication:(id)a0 progress:(double)a1 phase:(unsigned long long)a2;
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)a0 withCompanionBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchInstallableSystemAppWithBundleID:(id)a0 onPairedDevice:(id)a1 completion:(id /* block */)a2;
- (id)locallyAvailableApplicationWithContainingApplicationBundleID:(id)a0 forPairedDevice:(id)a1 error:(id *)a2;
- (void)fetchInstalledApplicationsWithErrorCompletion:(id /* block */)a0;
- (void)installApplication:(id)a0 withProvisioningProfiles:(id)a1 onPairedDevice:(id)a2 completion:(id /* block */)a3;
- (id)installableSystemAppWithBundleID:(id)a0 onPairedDevice:(id)a1 error:(id *)a2;
- (void)fetchProvisioningProfilesForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)installAllApplications;
- (void)activeComplicationsWithErrorCompletion:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (BOOL)setUpdatePendingForCompanionApp:(id)a0 error:(id *)a1;
- (BOOL)getApplicationIsInstalled:(BOOL *)a0 withBundleID:(id)a1 onDeviceWithPairingID:(id)a2 error:(id *)a3;
- (BOOL)getSystemAppInstallability:(BOOL *)a0 onDeviceWithPairingID:(id)a1 withBundleID:(id)a2 error:(id *)a3;
- (id)locallyAvailableApplicationWithBundleID:(id)a0 forDeviceWithPairingID:(id)a1 error:(id *)a2;
- (BOOL)removeProvisioningProfileWithID:(id)a0 fromPairedDevice:(id)a1 error:(id *)a2;
- (void)fetchInfoForApplicationWithBundleID:(id)a0 forPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)a0 completion:(id /* block */)a1;
- (BOOL)getApplicationIsInstalled:(BOOL *)a0 onAnyPairedDeviceWithBundleID:(id)a1 error:(id *)a2;
- (BOOL)installApplication:(id)a0 onPairedDevice:(id)a1 installationStatus:(long long *)a2 error:(id *)a3;
- (BOOL)fetchApplicationDatabaseSyncInformationForPairedDevice:(id)a0 returningDatabaseUUID:(id *)a1 lastSequenceNumber:(unsigned long long *)a2 error:(id *)a3;
- (void)applicationsUninstalled:(id)a0 onDeviceWithPairingID:(id)a1;
- (BOOL)killDaemonForTestingWithError:(id *)a0;
- (void)removeApplication:(id)a0 completion:(id /* block */)a1;
- (BOOL)_onQueue_createXPCConnectionIfNecessary:(id *)a0;
- (void)installApplication:(id)a0 onPairedDevice:(id)a1 completion:(id /* block */)a2;
- (BOOL)installApplicationAtURL:(id)a0 onPairedDevice:(id)a1 installOptions:(id)a2 size:(long long)a3 installationStatus:(long long *)a4 error:(id *)a5;
- (BOOL)cancelUpdatePendingForCompanionApp:(id)a0 error:(id *)a1;
- (id)watchAppBundleIDForCompanionAppBundleID:(id)a0 error:(id *)a1;

@end
