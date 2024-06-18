@class NSString, NSRecursiveLock, NSArray, NSURL, RTPersistenceStore, RTPersistenceContainer, NSMutableArray, NSPointerArray, NSManagedObjectModel;
@protocol RTPersistenceDelegate, RTPersistenceMirroringDelegate;

@interface RTPersistenceManager : RTService <RTPersistenceContainerDelegate, RTPersistenceModelProvider, RTPersistenceContextDelegate> {
    NSURL *_modelsDirectory;
    NSURL *_storesDirectory;
    NSArray *_sortedModelNames;
    RTPersistenceStore *_stores[3];
    RTPersistenceContainer *_container;
    NSManagedObjectModel *_latestModel;
    NSRecursiveLock *_pointerArrayLock;
    NSRecursiveLock *_storesArrayLock;
    NSPointerArray *_outstandingContexts;
    NSMutableArray *_remoteServers;
}

@property unsigned long long availability;
@property (weak, nonatomic) id<RTPersistenceDelegate> delegate;
@property (weak, nonatomic) id<RTPersistenceMirroringDelegate> mirroringDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultModelsDirectory;
+ (id)defaultStoresDirectory;

- (void)performExportMirroringRequestWithQualityOfService:(long long)a0 handler:(id /* block */)a1;
- (void)trackContext:(id)a0;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (long long)mirroringDelegateStateForStoreType:(unsigned long long)a0;
- (void)setContainer:(id)a0;
- (unsigned long long)storeTypeForURL:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)managedObjectContext;
- (id)sortedModelNames;
- (BOOL)initializePersistenceStores;
- (void)performZoneResetMirroringRequest:(id /* block */)a0;
- (id)persistenceStoreConfigurations;
- (id)historyTokenForStoreType:(unsigned long long)a0;
- (id)waitForPersistenceContext;
- (id)modelFollowingModel:(id)a0;
- (id)persistenceStoreForType:(unsigned long long)a0;
- (void)_updateStoreAvailability:(unsigned long long)a0;
- (void)performZoneResetMirroringRequestWithQualityOfService:(long long)a0 handler:(id /* block */)a1;
- (void)persistenceContext:(id)a0 encounteredError:(id)a1;
- (BOOL)persistenceContextShouldExecute:(id)a0;
- (void)performExportMirroringRequest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)modelNamed:(id)a0;
- (void)setupPersistenceContainers:(id /* block */)a0;
- (id)outstandingContexts;
- (void)onCoreDataResetSync:(id)a0;
- (void)performMirroringRequestOfType:(long long)a0 qualityOfService:(long long)a1 handler:(id /* block */)a2;
- (void)_setupRemoteStoreServers;
- (unsigned long long)countOfPersistenceStores;
- (void)updateStoreAvailability:(unsigned long long)a0;
- (BOOL)initializeContainer;
- (void)performImportMirroringRequestWithQualityOfService:(long long)a0 handler:(id /* block */)a1;
- (void)dealloc;
- (id)urlForModelWithName:(id)a0;
- (id)persistenceContextWithOptions:(unsigned long long)a0;
- (void)_onCoreDataResetSync:(id)a0;
- (void)tearDownPersistenceStack:(id /* block */)a0;
- (BOOL)_setupPersistenceContainers;
- (void)container:(id)a0 willActivateRequestsQueue:(id)a1;
- (id)initWithModelsDirectory:(id)a0 storesDirectory:(id)a1;
- (void)mirroringDelegateSetupState:(id /* block */)a0;
- (void)container:(id)a0 failedToActivateRequestsQueue:(id)a1;
- (BOOL)persistenceContextPerformedSave:(id)a0 error:(id *)a1;
- (void)performImportMirroringRequest:(id /* block */)a0;
- (void)createManagedObjectContext:(id /* block */)a0;
- (id)latestModel;
- (id)storeDescriptionForStoreWithType:(unsigned long long)a0;
- (void)_updateAvailabilityAfterSetupAttemptWithAvailability:(unsigned long long)a0;
- (id)URLForStoreType:(unsigned long long)a0;

@end
