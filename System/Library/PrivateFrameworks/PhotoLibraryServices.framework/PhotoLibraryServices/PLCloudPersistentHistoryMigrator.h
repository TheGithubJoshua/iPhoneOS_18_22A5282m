@class PLCloudBatchUploader, PLManagedObjectContext, PLCloudPhotoLibraryUploadTracker;
@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    PLCloudBatchUploader *_uploader;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    PLManagedObjectContext *_managedObjectContext;
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;

- (long long)migrate;
- (BOOL)checkForExistingMigrationMarker;
- (id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)a0;
- (void)migrateToPersistentHistoryIfNecessary;
- (void)updateSavedTokenFromPersistentHistoryResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)readLastKnownChangeHubIndex:(unsigned long long *)a0;
- (void)uploadEventResults:(id)a0;
- (id)fetchAllPersistentHistoryTransactions;
- (id)initWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;

@end
