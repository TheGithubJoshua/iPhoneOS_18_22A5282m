@class ACHDatabaseAssertionClient, NSHashTable, NSError, NSString, HKHealthStore, HDProfile, ACHAwardsKeyValueClient, NSObject, HDKeyValueDomain;
@protocol OS_dispatch_queue;

@interface ACHDataStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) ACHAwardsKeyValueClient *keyValueClient;
@property (retain, nonatomic) ACHDatabaseAssertionClient *assertionClient;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDKeyValueDomain *defaultsDomain;
@property (nonatomic) BOOL needsPopulationWhenProtectedDataAvailable;
@property (nonatomic) BOOL hasCompletedFirstPopulateFromDatabase;
@property (nonatomic) BOOL populatesValuesFromDatabase;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSError *injectedError;
@property (copy, nonatomic) id /* block */ populationCompleteBlock;
@property (retain, nonatomic) NSHashTable *propertyProviders;
@property (nonatomic) int protectedDataToken;
@property (nonatomic) int syncToken;
@property (copy, nonatomic) NSString *databaseIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startUp;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithProfile:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_syncEntityDidReceiveValues:(id)a0;
- (void)daemonReady:(id)a0;
- (id)_queue_allPropertyProviderKeys;
- (void)commitAllPropertiesToDatabaseWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_queue_populateAllPropertiesFromDatabase;
- (BOOL)_queue_populateFromDatabaseForProviders:(id)a0 error:(id *)a1;
- (BOOL)_queue_healthStore_populateFromDatabaseForProviders:(id)a0 error:(id *)a1;
- (void)addPropertyProvider:(id)a0;
- (void)activate;
- (BOOL)commitAllPropertiesWithError:(id *)a0;
- (id)_queue_dictionaryRepresentationOfAllProviderProperties;
- (BOOL)clearAllPropertiesWithError:(id *)a0 databaseContext:(id)a1;
- (void).cxx_destruct;
- (BOOL)_queue_daemon_populateFromDatabaseForProviders:(id)a0 error:(id *)a1;
- (BOOL)clearAllPropertiesWithError:(id *)a0;
- (void)_injectError:(id)a0;
- (void)_listenForNotifications;
- (BOOL)_forceDatabasePopulate;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)initWithHealthStore:(id)a0 assertionClient:(id)a1;
- (void)_protectedDataStateDidChange;
- (BOOL)_queue_setDatabaseIdentifier:(id)a0 error:(id *)a1;

@end
