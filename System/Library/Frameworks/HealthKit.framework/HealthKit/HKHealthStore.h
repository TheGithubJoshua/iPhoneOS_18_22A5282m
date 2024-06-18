@class NSString, HKHealthStoreIdentifier, NSSet, HKHealthServicesManager, _HKXPCConnection, NSBundle, NSObject, NSMutableSet, HKProfileIdentifier;
@protocol _HKObjectPickerPresentationController, _HKAuthorizationPresentationController, _HKRecalibrateEstimatesPresentationController, OS_dispatch_queue, HDHealthStoreServerInterface;

@interface HKHealthStore : NSObject <HKFeatureAvailabilityHealthDataSource, HKAnalyticsHealthDataSource, HKHealthStoreClientInterface, _HKXPCExportable, HKQueryDelegate, HKProxyProviderSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    _HKXPCConnection *_healthdConnection;
    NSBundle *_sourceBundle;
    NSString *_sourceBundleIdentifier;
    NSString *_debugIdentifier;
    HKProfileIdentifier *_profileIdentifier;
    unsigned int _applicationSDKVersion;
    id<HDHealthStoreServerInterface> _serverProxy;
    id<_HKAuthorizationPresentationController> _authorizationPresentationController;
    id<_HKObjectPickerPresentationController> _objectPickerPresentationController;
    id<_HKRecalibrateEstimatesPresentationController> _recalibrateEstimatesPresentationController;
    id /* block */ _authorizationDelegateTransactionErrorHandler;
    HKHealthServicesManager *_healthServicesManager;
    NSMutableSet *_queries;
    BOOL _resumeRequired;
    BOOL _resumed;
}

@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *writeAuthorizationUsageDescriptionOverride;
@property (copy, nonatomic) NSString *readAuthorizationUsageDescriptionOverride;
@property (copy, nonatomic) NSString *clinicalReadAuthorizationUsageDescriptionOverride;
@property (copy, nonatomic) NSString *researchStudyUsageDescriptionOverride;
@property (copy, nonatomic) NSString *daemonLaunchDarwinNotificationName;
@property (readonly, nonatomic) HKHealthServicesManager *healthServicesManager;
@property (readonly, nonatomic) unsigned int applicationSDKVersion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy, getter=_queries) NSSet *queries;
@property (copy, nonatomic) id /* block */ unitTest_handleExecuteQuery;
@property (readonly, copy) HKHealthStoreIdentifier *identifier;
@property (copy) HKProfileIdentifier *profileIdentifier;
@property (copy) NSString *sourceBundleIdentifier;
@property (retain) NSBundle *sourceBundle;
@property (copy) NSString *debugIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHealthDataAvailable;
+ (BOOL)_applicationHasRunningWorkout;

- (id)healthStoreConfiguration;
- (void)connectionInterrupted;
- (id)initWithListenerEndpoint:(id)a0;
- (void)dropEntitlement:(id)a0;
- (id)fitzpatrickSkinTypeWithError:(id *)a0;
- (void)_applicationWillResignActive:(id)a0;
- (id)_initWithIdentifier:(id)a0;
- (void)unitTest_setApplicationSDKVersion:(unsigned int)a0;
- (void)queryDidFinishExecuting:(id)a0;
- (void)restoreEntitlement:(id)a0;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)a0;
- (void)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)stopQuery:(id)a0;
- (void)clientRemote_presentRecalibrateEstimatesRequestWithRecord:(id)a0 completion:(id /* block */)a1;
- (void)connectionInvalidated;
- (void)_throwIfPerObjectReadAuthorizationNotSupportedForType:(id)a0;
- (id)activityMoveModeWithError:(id *)a0;
- (void)disableAllBackgroundDeliveryWithCompletion:(id /* block */)a0;
- (BOOL)_setLeanBodyMassCharacteristicQuantity:(id)a0 error:(id *)a1;
- (void)_throwIfAuthorizationDisallowedForSharing:(BOOL)a0 types:(id)a1;
- (void)_closeTransactionWithTypes:(id)a0 anchor:(id)a1 ackTime:(id)a2;
- (void)fetchPluginServiceEndpointForIdentifier:(id)a0 endpointHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (id)taskServerEndpointForIdentifier:(id)a0 pluginURL:(id)a1 taskUUID:(id)a2 instanceUUID:(id)a3 configuration:(id)a4 error:(id *)a5;
- (BOOL)_setWheelchairUse:(long long)a0 error:(id *)a1;
- (id)wristDetectionSettingManager;
- (void)_removePreferredUnitForType:(id)a0 completion:(id /* block */)a1;
- (long long)authorizationStatusForType:(id)a0;
- (void)_validatePurposeStringsForSharingTypes:(id)a0 readingTypes:(id)a1;
- (void)_fetchBoolDaemonPreferenceForKey:(id)a0 completion:(id /* block */)a1;
- (void)deleteMedicalIDData;
- (void)deleteObjects:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)requestAuthorizationToShareTypes:(id)a0 readTypes:(id)a1 shouldPrompt:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_prepareObjectsForSaving:(id)a0 errorOut:(id *)a1;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)addHealthServicePairing:(id)a0 withCompletion:(id /* block */)a1;
- (void)enableBackgroundDeliveryForType:(id)a0 frequency:(long long)a1 withCompletion:(id /* block */)a2;
- (void)_safeFetchDaemonPreferenceForKey:(id)a0 expectedReturnClass:(Class)a1 completion:(id /* block */)a2;
- (id)featureAvailabilityProviderForIdentifier:(id)a0;
- (void)splitTotalEnergy:(id)a0 startDate:(id)a1 endDate:(id)a2 resultsHandler:(id /* block */)a3;
- (void)startWorkoutSession:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)_setHeightCharacteristicQuantity:(id)a0 error:(id *)a1;
- (BOOL)_setBloodType:(long long)a0 error:(id *)a1;
- (void)_fetchDaemonPreferenceForKey:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (BOOL)_setBiologicalSex:(long long)a0 error:(id *)a1;
- (void)deleteObjectsOfType:(id)a0 predicate:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)supportsHealthRecords;
- (void)_setConfigurationPropertyUsingBlock:(id /* block */)a0;
- (BOOL)_setActivityMoveMode:(long long)a0 error:(id *)a1;
- (id)requirementSatisfactionOverridesDataSource;
- (id)_cardioFitnessMedicationsUseWithError:(id *)a0;
- (void)_validateAuthorizationRequiredTypes;
- (void)removeHealthServicePairing:(id)a0 withCompletion:(id /* block */)a1;
- (void)deleteAllSamplesWithTypes:(id)a0 sourceBundleIdentifier:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setHealthLiteValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)_heightCharacteristicQuantityWithError:(id *)a0;
- (void)_serverProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)preferredUnitsForQuantityTypes:(id)a0 completion:(id /* block */)a1;
- (void)_validateClinicalHealthRecordsPurposeStringsForSharingTypes:(id)a0 readingTypes:(id)a1;
- (void)fetchTaskServerEndpointForIdentifier:(id)a0 pluginURL:(id)a1 taskUUID:(id)a2 instanceUUID:(id)a3 configuration:(id)a4 endpointHandler:(id /* block */)a5 errorHandler:(id /* block */)a6;
- (void)preferredUnitsForQuantityTypes:(id)a0 version:(long long)a1 completion:(id /* block */)a2;
- (void)healthServicePairingsWithHandler:(id /* block */)a0;
- (id)_lock_connectionWithError:(id *)a0;
- (id)_userEnteredMenstrualCycleLengthCharacteristicQuantityWithError:(id *)a0;
- (id)featureStatusProviderForIdentifier:(id)a0;
- (id)_modificationDateForCharacteristicWithType:(id)a0 error:(id *)a1;
- (void)_validateAuthorizationRequestWithShareTypes:(id)a0 readTypes:(id)a1;
- (void)fetchServerURLForAssetType:(id)a0 completion:(id /* block */)a1;
- (void)unregisterPeripheralIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_setBodyMassCharacteristicQuantity:(id)a0 error:(id *)a1;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(long long)a0;
- (void)_setDaemonPreferenceValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)_bodyMassCharacteristicQuantityWithError:(id *)a0;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void)_replaceWorkout:(id)a0 withWorkout:(id)a1 completion:(id /* block */)a2;
- (void)pauseWorkoutSession:(id)a0;
- (void)requestPerObjectReadAuthorizationForType:(id)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (void)recoverActiveWorkoutSessionWithCompletion:(id /* block */)a0;
- (void)addSamples:(id)a0 toWorkout:(id)a1 completion:(id /* block */)a2;
- (void)saveObject:(id)a0 withCompletion:(id /* block */)a1;
- (id /* block */)_wrappedErrorHandler:(id /* block */)a0 proxy:(id)a1;
- (void)deleteObject:(id)a0 withCompletion:(id /* block */)a1;
- (void)_activeWorkoutApplicationIdentifierWithCompletion:(id /* block */)a0;
- (void)requestAuthorizationToShareTypes:(id)a0 readTypes:(id)a1 completion:(id /* block */)a2;
- (BOOL)_setUserEnteredMenstrualCycleLengthCharacteristicQuantity:(id)a0 error:(id *)a1;
- (id)_activityMoveModeWithError:(id *)a0;
- (void)executeQuery:(id)a0;
- (void)startHealthServiceSession:(id)a0 withHandler:(id /* block */)a1;
- (void)_faultIfInnappropriateHost;
- (void)_throwIfClinicalTypesRequestedToShare:(id)a0;
- (void)closeTransactionForTypes:(id)a0 anchor:(id)a1 ackTime:(id)a2 query:(id)a3;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(id /* block */)a0;
- (id)biologicalSexWithError:(id *)a0;
- (void)recalibrateEstimatesForSampleType:(id)a0 atDate:(id)a1 completion:(id /* block */)a2;
- (id)pluginServiceEndpointForIdentifier:(id)a0 error:(id *)a1;
- (id)unitTest_replaceListenerEndpoint:(id)a0;
- (void)_discardServerProxiesForServer:(id)a0;
- (void)startHealthServiceDiscovery:(id)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)dateOfBirthWithError:(id *)a0;
- (void)setServerURL:(id)a0 forAssetType:(id)a1 completion:(id /* block */)a2;
- (id)_healthDataAuthorizationPresentationRequestForRecord:(id)a0;
- (void)executeQuery:(id)a0 activationHandler:(id /* block */)a1;
- (id)wheelchairUseWithError:(id *)a0;
- (void)deleteObjectsWithUUIDs:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchMedicalIDDataCreateIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)isImproveHealthRecordsAllowedWithError:(id *)a0;
- (void)getHealthLiteValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)saveObjects:(id)a0 deleteObjects:(id)a1 associations:(id)a2 completion:(id /* block */)a3;
- (BOOL)_setFitzpatrickSkinType:(long long)a0 error:(id *)a1;
- (id)watchLowPowerModeDataSource;
- (id)bloodTypeWithError:(id *)a0;
- (void)clientRemote_presentAuthorizationWithRequestRecord:(id)a0 completion:(id /* block */)a1;
- (void)profileIdentifierForNRDeviceUUID:(id)a0 completion:(id /* block */)a1;
- (void)endWorkoutSession:(id)a0;
- (void)handleAuthorizationForExtensionWithCompletion:(id /* block */)a0;
- (id)earliestPermittedSampleDate;
- (void)fetchCloudSyncRequiredWithCompletion:(id /* block */)a0;
- (void)resume;
- (BOOL)_setCardioFitnessMedicationsUse:(unsigned long long)a0 error:(id *)a1;
- (id)_researchStudyUsageDescription;
- (id)_userEnteredMenstrualPeriodLengthCharacteristicQuantityWithError:(id *)a0;
- (void)_removeQuery:(id)a0;
- (void)deleteObject:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)_clientWriteAuthorizationUsageDescription;
- (id)_sourceBundleOrDefaultBundle;
- (void)saveObjects:(id)a0 skipInsertionFilter:(BOOL)a1 completion:(id /* block */)a2;
- (id)_clinicalAuthorizationPresentationRequestForRecord:(id)a0;
- (id)initWithListenerEndpoint:(id)a0 debugIdentifier:(id)a1;
- (void)fetchMedicalIDDataWithCompletion:(id /* block */)a0;
- (void)saveObjects:(id)a0 withCompletion:(id /* block */)a1;
- (id)exportedInterface;
- (void)dealloc;
- (id)dateOfBirthComponentsWithError:(id *)a0;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 sourceHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)endHealthServiceSession:(id)a0;
- (void)deleteObjects:(id)a0 withCompletion:(id /* block */)a1;
- (void)_saveObjects:(id)a0 atomically:(BOOL)a1 skipInsertionFilter:(BOOL)a2 completion:(id /* block */)a3;
- (void)_throwIfParentTypeNotRequestedForSharing:(BOOL)a0 types:(id)a1;
- (id)_synchronousServerProxyWithErrorHandler:(id /* block */)a0;
- (id)_clientClinicalReadAuthorizationUsageDescription;
- (id)_leanBodyMassCharacteristicQuantityWithError:(id *)a0;
- (void)forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)a0;
- (void)_addQuery:(id)a0;
- (void)registerPeripheralIdentifier:(id)a0 name:(id)a1 services:(id)a2 withCompletion:(id /* block */)a3;
- (void)deleteClientSourceWithCompletion:(id /* block */)a0;
- (id)_characteristicForDataType:(id)a0 error:(id *)a1;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)a0 frequency:(long long)a1 withCompletion:(id /* block */)a2;
- (BOOL)_setCharacteristic:(id)a0 forDataType:(id)a1 error:(id *)a2;
- (void)deleteMedicalIDDataWithCompletion:(id /* block */)a0;
- (void)_connectionQueue_setUpWithEndpoint:(id)a0;
- (void)updateMedicalIDData:(id)a0;
- (void)getRequestStatusForAuthorizationToShareTypes:(id)a0 readTypes:(id)a1 completion:(id /* block */)a2;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)a0;
- (void)_deleteObjects:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)_firstPartyWorkoutSnapshotWithCompletion:(id /* block */)a0;
- (void)clientRemote_presentAuthorizationWithSession:(id)a0 completion:(id /* block */)a1;
- (BOOL)_setDateOfBirthComponents:(id)a0 error:(id *)a1;
- (void)_sendNextObjectBatch:(id)a0 skipInsertionFilter:(BOOL)a1 lastRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 server:(id)a3 transaction:(id)a4 completion:(id /* block */)a5;
- (void)_shouldGenerateDemoDataPreferenceIsSet:(id /* block */)a0;
- (void)_currentWorkoutSnapshotWithCompletion:(id /* block */)a0;
- (void)_validateHealthDataPurposeStringsForSharingTypes:(id)a0 readingTypes:(id)a1 isResearchStudy:(BOOL)a2;
- (void)startWatchAppWithWorkoutConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)_supportsFeature:(unsigned long long)a0;
- (void)disableBackgroundDeliveryForType:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_setUserEnteredMenstrualPeriodLengthCharacteristicQuantity:(id)a0 error:(id *)a1;
- (void)clientRemote_unitPreferencesDidUpdate;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 error:(id)a1;
- (void)updateMedicalIDData:(id)a0 completion:(id /* block */)a1;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)a0;
- (void)_setPreferredUnit:(id)a0 forType:(id)a1 completion:(id /* block */)a2;
- (id)ageWithCurrentDate:(id)a0 error:(id *)a1;
- (void)generateFakeDataForActivityType:(long long)a0 minutes:(double)a1 completion:(id /* block */)a2;
- (void)healthPeripheralsWithFilter:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)_throwIfUsingIncorrectAuthorizationRequestType:(id)a0;
- (void)resumeWorkoutSession:(id)a0;
- (void)endHealthServiceDiscovery:(id)a0;
- (id)_clientReadAuthorizationUsageDescription;
- (void)deleteObjectsOfType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2 withCompletion:(id /* block */)a3;

@end