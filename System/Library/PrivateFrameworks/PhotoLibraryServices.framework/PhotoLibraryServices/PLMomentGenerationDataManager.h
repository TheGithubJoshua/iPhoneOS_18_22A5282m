@class NSString, NSManagedObjectContext, PLXPCTransaction, PLPhotoLibraryPathManager, PLLibraryServicesManager, NSDictionary, PLRoutineService, CNContactStore, PLCameraAppWatcher, NSObject, PLPhotoLibrary, PLMomentGeneration;
@protocol OS_dispatch_queue;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement, PLHighlightItemModelReader> {
    PLXPCTransaction *_keepAliveTransaction;
    id /* block */ _reachabilityBlock;
    CNContactStore *_contactStore;
    PLMomentGeneration *_generator;
    NSDictionary *_generationOptions;
    BOOL _observingReachability;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lightweightMigrationLock;
    PLPhotoLibraryPathManager *_lightWeightMigrationPathManager;
    PLLibraryServicesManager *_libraryServicesManager;
    PLRoutineService *_routineManager;
}

@property (readonly, weak, nonatomic) CNContactStore *_contactStore;
@property (retain, nonatomic) PLPhotoLibrary *momentGenerationLibrary;
@property (readonly, nonatomic) PLCameraAppWatcher *cameraWatcher;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) BOOL isLightweightMigrationManager;
@property (nonatomic) BOOL shouldPerformLightweightValidation;
@property (nonatomic) long long previousValidatedModelVersion;
@property (nonatomic) BOOL previousValidationSucceeded;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (readonly, nonatomic) NSDictionary *generationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isManagedObjectContextMomentarilyBlessed:(id)a0;
+ (void)setManagerMomentarilyBlessed:(id)a0;
+ (void)setManagedObjectContextMomentarilyBlessed:(id)a0;

- (id)locationsOfInterest;
- (BOOL)hasChanges;
- (BOOL)save:(id *)a0;
- (id)orphanedAssetIDsWithError:(id *)a0;
- (id)insertedObjects;
- (id)insertNewPhotosHighlight;
- (void)invalidateLocationDataForAssetsWithOIDs:(id)a0;
- (void)_finalizeInit;
- (id)deletedObjects;
- (id)fetchParentHighlightItemsForHighlightItems:(id)a0;
- (id)momentsWithUniqueIDs:(id)a0 error:(id *)a1;
- (void)invalidateLocationDataForAssetsInMoment:(id)a0;
- (id)lastLocationOfInterestVisit;
- (id)highlightsIntersectingDateInterval:(id)a0 ofKind:(unsigned short)a1;
- (id)generator;
- (void)performDataTransaction:(id /* block */)a0 synchronously:(BOOL)a1 priority:(long long)a2 completionHandler:(id /* block */)a3;
- (void)performBlock:(id /* block */)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)_batchDeleteForEntityName:(id)a0 error:(id *)a1;
- (id)allInvalidMomentsWithError:(id *)a0;
- (BOOL)isNetworkReachable;
- (id)allEmptyPhotosHighlightsOfKind:(unsigned short)a0 error:(id *)a1;
- (id)allInvalidMomentIDsWithError:(id *)a0;
- (void)fetchLocationsOfInterestIfNeeded;
- (id)fetchChildHighlightItemsForHighlightItem:(id)a0;
- (id)allMomentIDsWithError:(id *)a0;
- (id)_highlightsRelationshipKeyPathsForPrefetching;
- (id)allAssetIDsToBeIncludedInMomentsWithError:(id *)a0;
- (Class)momentDataClass;
- (void)resetOnFailure;
- (id)momentWithUniqueID:(id)a0 error:(id *)a1;
- (void)performBlock:(id /* block */)a0 synchronously:(BOOL)a1 priority:(long long)a2 completionHandler:(id /* block */)a3;
- (id)locationCoordinatesForAssetIDs:(id)a0;
- (void)logRoutineInformation;
- (void)stopObservingNetworkReachabilityChanges;
- (id)_highlightsRelationshipKeyPathsForPrefetchingForKind:(unsigned short)a0;
- (id)momentsWithLocationTypeUnprocessedWithError:(id *)a0;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(id /* block */)a0;
- (id)assetsWithUniqueIDs:(id)a0 error:(id *)a1;
- (id)allAssetsToBeIncludedInMomentsWithError:(id *)a0;
- (void)performDataTransaction:(id /* block */)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)momentsSinceDate:(id)a0;
- (BOOL)deleteAllHighlightsWithError:(id *)a0;
- (void)pendingChangesUpdated:(unsigned long long)a0;
- (id)_currentHomeAddressDictionary;
- (void)invalidateAllHighlightSubtitles;
- (id)allPhotosHighlightsOfKind:(unsigned short)a0 withPredicate:(id)a1 error:(id *)a2;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (void)_initIsolationQueue;
- (void)reloadGenerationOptions;
- (id)invalidAssetsIgnoringAssetIdentifiers:(id)a0 error:(id *)a1;
- (id)allInvalidPhotosHighlightsOfAllKindsWithError:(id *)a0;
- (id)allInvalidAssetsWithError:(id *)a0;
- (id)momentsBetweenDate:(id)a0 andDate:(id)a1 sorted:(BOOL)a2;
- (void)enumerateAssetsWithIDs:(id)a0 usingBlock:(id /* block */)a1;
- (void)_removeKeepAlive;
- (id)fetchNeighborHighlightItemsForHighlightItems:(id)a0;
- (id)allAssetIDsNeedingLocationShiftWithError:(id *)a0;
- (BOOL)deleteAllMomentsWithError:(id *)a0;
- (id)initWithManagedObjectContext:(id)a0 pathManagerForLightweightMigration:(id)a1;
- (BOOL)_deleteAllObjectsForEntityName:(id)a0 error:(id *)a1;
- (id)updatedObjects;
- (void)_networkReachabilityDidChange:(id)a0;
- (id)allPhotosHighlightsOfAllKindsWithError:(id *)a0;
- (void)dealloc;
- (BOOL)cameraIsActive;
- (id)assetWithUniqueID:(id)a0 error:(id *)a1;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_updateKeepAlive;
- (id)momentsForAssetsWithUniqueIDs:(id)a0 error:(id *)a1;
- (id)momentsIntersectingDateInterval:(id)a0;
- (id)allPhotosHighlightsWithPredicate:(id)a0 error:(id *)a1;
- (BOOL)wantsMomentReplayLogging;
- (id)allPhotosHighlightsOfKind:(unsigned short)a0 error:(id *)a1;
- (id)insertNewMoment;
- (id)allMomentsWithError:(id *)a0;
- (void)refreshAllObjects;
- (BOOL)routineIsAvailable;
- (id)replayLogPath;
- (id)allMomentsWithInvalidReverseLocationData;
- (id)homeAddressDictionary;
- (id)momentAnalysisTransactionWithName:(const char *)a0;
- (id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id *)a0;
- (void)verifyAndRepairOrphanedAssets:(id)a0 completionBlock:(id /* block */)a1;
- (Class)momentAssetDataClass;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)a0 withTransaction:(id)a1;

@end
