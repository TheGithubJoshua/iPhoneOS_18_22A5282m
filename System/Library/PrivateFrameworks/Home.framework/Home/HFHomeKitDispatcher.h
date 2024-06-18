@class NADelegateDispatcher, NSMutableDictionary, HFSoftwareUpdateManager, HMHome, NAFuture, HFLocationSensingCoordinator, HFPinCodeManager, HFHomeKitAccessorySettingsDataSource, NSMutableArray, HMHomeManager, NSString, HFHomeManagerCreator, HMHomeManagerConfiguration;

@interface HFHomeKitDispatcher : NSObject <HFHomeAppInstallStateArbiterObserver, HFHomeManagerCreatorDelegate, HFLocationSensingCoordinatorDelegate, HFStateRestorationSettingsObserver>

@property (class, copy, nonatomic) HMHomeManagerConfiguration *configuration;

@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HMHome *selectedHome;
@property (nonatomic) BOOL hasLoadedHomes;
@property (retain, nonatomic) HFLocationSensingCoordinator *locationCoordinator;
@property (nonatomic) int homeKitPreferencesChangedNotifyToken;
@property (retain, nonatomic) NSMutableDictionary *remoteAccessStateByHomeID;
@property (retain, nonatomic) NADelegateDispatcher *homeManagerObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *homeObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *accessoryObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *residentDeviceObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *cameraObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *mediaObjectObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *mediaSessionObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *audioControlObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *softwareUpdateControllerObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *softwareUpdateObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *userObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *symptomsHandlerObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *mediaDestinationControllerObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *siriEndpointProfileObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *symptomFixSessionObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *homeKitSettingsObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *networkConfigurationObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *networkRouterObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *televisionObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *homePersonManagerDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *lightObserverDispatcher;
@property (retain, nonatomic) NADelegateDispatcher *walletKeyDeviceStateObserverDispatcher;
@property (retain, nonatomic) NSMutableArray *homePromises;
@property (retain, nonatomic) NSMutableArray *firstHomeAddedPromises;
@property (retain, nonatomic) NSMutableArray *allHomesPromises;
@property (retain, nonatomic) NAFuture *locationCoordinatorSetupFuture;
@property (retain, nonatomic) HFHomeManagerCreator *homeManagerCreator;
@property (nonatomic) BOOL willAcceptHomeFutures;
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly, nonatomic) NAFuture *homeFuture;
@property (readonly, nonatomic) NAFuture *firstHomeAddedFuture;
@property (readonly, nonatomic) NAFuture *allHomesFuture;
@property (readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
@property (nonatomic) BOOL selectedHomeFollowsLocation;
@property (readonly, nonatomic) HFHomeKitAccessorySettingsDataSource *accessorySettingsDataSource;
@property (readonly, nonatomic) HFSoftwareUpdateManager *softwareUpdateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedDispatcher;
+ (id)_defaultLogSettings;
+ (id)_logSettingsWithFormatter:(id /* block */)a0;
+ (id)_volatileLogSettings;

- (id)init;
- (void)warmup;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_primaryHome;
- (void)addAccessoryObserver:(id)a0;
- (void)addHomeKitSettingsObserver:(id)a0;
- (void)addHomeManagerObserver:(id)a0;
- (void)addHomeObserver:(id)a0;
- (void)addMediaObjectObserver:(id)a0;
- (void)addObservationForCameraClipManager:(id)a0;
- (void)addUserObserver:(id)a0;
- (void)dispatchAccessoryObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchCameraObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchHomeManagerObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchHomeObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchSymptomsHandlerMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchUserObserverMessage:(id /* block */)a0 sender:(id)a1;
- (id)pinCodeManagerForHome:(id)a0;
- (void)removeHomeKitSettingsObserver:(id)a0;
- (void)removeHomeManagerObserver:(id)a0;
- (void)removeHomeObserver:(id)a0;
- (void)removeMediaObjectObserver:(id)a0;
- (void)removeObservationForCameraClipManager:(id)a0;
- (void)setSelectedHome:(id)a0 userInitiated:(BOOL)a1;
- (void)_setupSymptomFixSessionObserver;
- (void)updateHomeManagerConfiguration:(id)a0;
- (void)addSiriEndpointProfileObserver:(id)a0;
- (void)_createHomeManagerIfNecessary;
- (void)_finishAllHomesPromises:(id)a0;
- (void)_finishFirstHomeAddedPromises:(id)a0;
- (void)_finishHomePromises:(id)a0;
- (void)_handleHomeManagerDidUpdateHomes:(id)a0;
- (void)_requestSelectedHome:(id)a0;
- (void)_setDelegationEnabled:(BOOL)a0 forAccessoryHierarchy:(id)a1;
- (void)_setDelegationEnabled:(BOOL)a0 forMediaProfileContainer:(id)a1 session:(id)a2;
- (void)_setDelegationEnabled:(BOOL)a0 forUser:(id)a1;
- (void)_setDelegationEnabledForObjectsInCurrentHome:(BOOL)a0;
- (void)_setHomePersonManagerObservationEnabled:(BOOL)a0;
- (void)_setSoftwareUpateControllerV2DelegationEnabled:(BOOL)a0;
- (void)_setupAccessoryObserver;
- (void)_setupHomeManagerObserver;
- (void)_setupHomeObserver;
- (id)_setupLocationSensingCoordinator;
- (void)_setupMediaObjectObserver;
- (void)_setupMediaSessionObserver;
- (void)_setupResidentDeviceObserver;
- (void)_setupSofwareUpdateControllerObserver;
- (void)_setupStateDumpHandlers;
- (BOOL)_shouldPersistSelectedHomeToDefaults;
- (void)_updateRemoteAccessStateForHome:(id)a0 notifyingObservers:(BOOL)a1;
- (void)addAudioControlObserver:(id)a0;
- (void)addCameraObserver:(id)a0;
- (void)addHomePersonManagerObserver:(id)a0;
- (void)addLightObserver:(id)a0;
- (void)addMediaDestinationControllerObserver:(id)a0;
- (void)addMediaProfileObserver:(id)a0;
- (void)addMediaSessionObserver:(id)a0;
- (void)addNetworkConfigurationObserver:(id)a0;
- (void)addNetworkRouterObserver:(id)a0;
- (void)addResidentDeviceObserver:(id)a0;
- (void)addSoftwareUpdateControllerObserver:(id)a0;
- (void)addSoftwareUpdateObserver:(id)a0;
- (void)addSymptomFixSessionObserver:(id)a0;
- (void)addSymptomsHandlerObserver:(id)a0;
- (void)addTelevisionObserver:(id)a0;
- (void)addWalletKeyDeviceStateObserver:(id)a0;
- (void)coordinator:(id)a0 homeSensingStatusDidChange:(BOOL)a1;
- (void)coordinator:(id)a0 locationSensingAvailabilityDidChange:(BOOL)a1;
- (void)dispatchAudioControlObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchHomeKitSettingMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchHomeKitSettingsObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchHomePersonManagerObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchLightObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchLightProfileUpdate:(id)a0 settings:(id)a1 error:(id)a2;
- (void)dispatchMediaDestinationControllerObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchMediaObjectObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchMediaSessionObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchNetworkConfigurationObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchNetworkRouterObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchSiriEndpointObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchSoftwareUpdateControllerMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchSoftwareUpdateMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchSymptomFixSessionObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchTelevisionObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)dispatchWalletKeyDeviceStateObserverMessage:(id /* block */)a0 sender:(id)a1;
- (void)fetchSettingsForLightProfiles:(id)a0;
- (id)homeFutureWithUser:(id)a0;
- (void)homeManagerWasCreated:(id)a0;
- (id)homeSensingActiveFuture;
- (void)installStateArbiter:(id)a0 installStateDidChange:(BOOL)a1;
- (void)removeAccessoryObserver:(id)a0;
- (void)removeAudioControlObserver:(id)a0;
- (void)removeCameraObserver:(id)a0;
- (void)removeHomePersonManagerObserver:(id)a0;
- (void)removeLightObserver:(id)a0;
- (void)removeMediaDestinationControllerObserver:(id)a0;
- (void)removeMediaProfileObserver:(id)a0;
- (void)removeMediaSessionObserver:(id)a0;
- (void)removeNetworkConfigurationObserver:(id)a0;
- (void)removeNetworkRouterObserver:(id)a0;
- (void)removeResidentDeviceObserver:(id)a0;
- (void)removeSiriEndpointProfileObserver:(id)a0;
- (void)removeSoftwareUpdateControllerObserver:(id)a0;
- (void)removeSoftwareUpdateObserver:(id)a0;
- (void)removeSymptomFixSessionObserver:(id)a0;
- (void)removeSymptomsHandlerObserver:(id)a0;
- (void)removeTelevisionObserver:(id)a0;
- (void)removeUserObserver:(id)a0;
- (void)removeWalletKeyDeviceStateObserver:(id)a0;
- (void)setHomeManagerAndUpdateDelegate:(id)a0;
- (BOOL)setSelectedHomeWithName:(id)a0;
- (void)stateRestorationSettings:(id)a0 selectedHomeIdentifierDidUpdateExternally:(id)a1;
- (void)updateHome;
- (void)updateHomeSensingState;
- (void)updateSelectedHome;
- (id)userFutureWithUniqueIdentifierStr:(id)a0;

@end