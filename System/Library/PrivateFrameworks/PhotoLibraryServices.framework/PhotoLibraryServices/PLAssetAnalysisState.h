@class NSString, NSDate, PLManagedAsset;

@interface PLAssetAnalysisState : PLManagedObject

@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) short workerType;
@property (nonatomic) int analysisState;
@property (retain, nonatomic) NSString *assetUUID;
@property (retain, nonatomic) NSDate *lastIgnoredDate;
@property (retain, nonatomic) NSDate *ignoreUntilDate;
@property (nonatomic) int workerFlags;
@property (nonatomic) double sortToken;

+ (BOOL)isUnitTestWorker:(short)a0;
+ (BOOL)resetPendingStatesInLibraryAtURL:(id)a0 error:(id *)a1;
+ (id)entityName;
+ (unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)a0 error:(id *)a1;
+ (id)workerTypesPersistingAnalysisState;
+ (BOOL)markStatesProcessedForWorkerType:(short)a0 library:(id)a1 error:(id *)a2;
+ (id)keyPathDictionaryWithWorkerType:(short)a0 workerFlags:(int)a1 analysisState:(int)a2 lastIgnoredDate:(id)a3 ignoreUntilDate:(id)a4;
+ (void)_removeAnalysisRecordsWithPredicate:(id)a0 library:(id)a1;
+ (BOOL)resetFaceCropAnalysisStateInLibraryAtURL:(id)a0 error:(id *)a1;
+ (id)assetUUIDsFromAssetObjectIDs:(id)a0 library:(id)a1 whereAllWorkerTypes:(id)a2 matchState:(id)a3;
+ (id)_batchOperationQueue;
+ (int)defaultWorkerFlagsForWorkerType:(short)a0;
+ (void)requestAnalysisCountsInLibrary:(id)a0 completion:(id /* block */)a1;
+ (id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)a0;
+ (id)_managedObjectContextForStateChangesWithLibraryURL:(id)a0;
+ (id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)a0 analysisState:(int)a1 forDeletedAssets:(BOOL)a2 inContext:(id)a3 error:(id *)a4;
+ (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)a0 forWorkerType:(short)a1 library:(id)a2;
+ (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)a0 fetchLimit:(unsigned long long)a1 inLibrary:(id)a2 error:(id *)a3;
+ (void)requestCountOfAnalysisRecordsForDeletedAssetsInLibrary:(id)a0 completion:(id /* block */)a1;
+ (void)removeAnalysisRecordsWithNoAssetOrUUIDUseMaintenanceMode:(BOOL)a0 library:(id)a1;
+ (BOOL)cleanupInvalidIgnoreUntilDatesInLibraryAtURL:(id)a0 error:(id *)a1;
+ (id)analysisCountsForWorkerType:(short)a0 library:(id)a1;
+ (id)_sanitizeChanges:(id)a0;
+ (BOOL)clearIgnoreUntilDatesInLibraryAtURL:(id)a0 error:(id *)a1;
+ (id)_subArrayOfChanges:(id)a0 toRetryWithConflicts:(id)a1;
+ (BOOL)_bulkUpdateAnalysisStatesTo:(int)a0 predicate:(id)a1 library:(id)a2 error:(id *)a3;

- (id)debugLogDescription;
- (id)mutableKeyPathDictionary;
- (void)unionWorkerFlags:(int)a0;

@end
