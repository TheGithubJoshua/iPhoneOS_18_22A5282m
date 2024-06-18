@class HKSampleType, HDProfile, _HKFilter, NSDictionary, NSObject, HKQueryServerConfiguration, HKQuantityType, HDDaemonTransaction, HDQueryServerClientState, HKObjectType, HDHealthStoreClient, NSString, NSSet, HDDataCollectionAssertion, HDDatabaseTransactionContextStatistics, NSArray, NSUUID;
@protocol HDQueryServerDelegate, NSXPCProxyCreating, OS_dispatch_queue, HKQueryClientInterface;

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServerInterface, HDDataObserver, HDTaskServer> {
    NSDictionary *_baseDataEntityEncodingOptions;
    id /* block */ _queryDidFinishHandler;
    NSArray *_dataObservationAssertions;
    HDDataCollectionAssertion *_dataCollectionAssertion;
    HDDaemonTransaction *_activationTransaction;
    HDDaemonTransaction *_runningTransaction;
    _Atomic int _queryState;
    BOOL _shouldTakeObservationAssertions;
    BOOL _observingData;
    BOOL _isCollectingData;
    _Atomic BOOL _shouldFinish;
    _Atomic BOOL _shouldPause;
    NSObject<OS_dispatch_queue> *_unitTestQueryQueue;
    HDDatabaseTransactionContextStatistics *_transactionStatistics;
}

@property (readonly) BOOL clientHasActiveWorkout;
@property (copy, nonatomic) HDQueryServerClientState *clientState;
@property (nonatomic) long long dataCount;
@property (readonly, nonatomic) double activationTime;
@property (readonly, nonatomic) _HKFilter *filter;
@property (readonly, nonatomic) BOOL hasActiveDaemonTransaction;
@property (copy, nonatomic) id /* block */ unitTest_queryServerSetShouldPauseHandler;
@property (copy, nonatomic) id /* block */ unitTest_queryServerWillChangeStateHandler;
@property (copy, nonatomic) id /* block */ unitTest_queryServerDidFinishStateTransitionHandler;
@property (weak, nonatomic) id<HDQueryServerDelegate> delegate;
@property (readonly, copy, nonatomic) NSUUID *queryUUID;
@property (readonly, copy, nonatomic) HKQueryServerConfiguration *configuration;
@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (readonly) long long queryState;
@property (nonatomic) double collectionInterval;
@property (readonly, nonatomic) id<HKQueryClientInterface, NSXPCProxyCreating> clientProxy;
@property (readonly, copy, nonatomic) HKObjectType *objectType;
@property (readonly, copy, nonatomic) NSSet *objectTypes;
@property (readonly, nonatomic) HKSampleType *sampleType;
@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsAnchorBasedAuthorization;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (Class)queryClass;
+ (id)builtInQueryServerClasses;

- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)_queue_start;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)taskUUID;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)_queue_didDeactivate;
- (void)_queue_startDataCollection;
- (id)readAuthorizationStatusForType:(id)a0 error:(id *)a1;
- (BOOL)prepareToActivateServerWithError:(id *)a0;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void).cxx_destruct;
- (void)_queue_didChangeStateFromPreviousState:(long long)a0 state:(long long)a1;
- (void)_queue_stopDataCollection;
- (id)diagnosticDescription;
- (BOOL)_shouldListenForUpdates;
- (BOOL)validateConfiguration:(id *)a0;
- (void)_queue_stop;
- (id)exportedInterface;
- (void)dealloc;
- (void)remote_deactivateServer;
- (void)remote_startQueryWithCompletion:(id /* block */)a0;
- (void)deactivateServerWithCompletion:(id /* block */)a0;
- (BOOL)_shouldObserveAllSampleTypes;
- (BOOL)_shouldObserveDatabaseProtectedDataAvailability;
- (BOOL)_shouldStopProcessingQuery;
- (BOOL)_shouldSuspendQuery;
- (void)activateServerWithClientState:(id)a0 error:(id)a1;
- (void)clientStateDidChange:(id)a0;
- (void)clientStateWillChange:(id)a0;
- (id)createDatabaseTransactionContext;
- (id)filteredSamplesForClientWithSamples:(id)a0;
- (id)newDataEntityEnumerator;
- (void)onQueue:(id /* block */)a0;
- (id /* block */)sampleAuthorizationFilter;
- (id)sanitizedSampleForQueryClient:(id)a0;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(id /* block */)a0;
- (void)schedulePause;
- (void)setQueryDidFinishHandler:(id /* block */)a0;

@end