@class PLLibraryServicesManager;

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    unsigned int _userDataDisposition;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _userDataDispositionLock;
    BOOL _didWaitForPrerequisites;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prerequisitesCompleteBlockLock;
}

@property (copy, nonatomic) id /* block */ prerequisitesCompleteBlock;
@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) BOOL dataMigratorPluginHasRequestedLibraryMigration;

+ (BOOL)isDataMigrationInProgress;

- (BOOL)isOTARestoreInProgress;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (id)restoreTypeDescription;
- (BOOL)isRestoreFromBackup;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (BOOL)_userDataDispositionMatchesDisposition:(unsigned int)a0;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (void).cxx_destruct;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (BOOL)isRestoreFromBackupSourceCloud;
- (id)_dataMigrationInfo;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)deletePhotoStreamDataForStreamID:(id)a0;
- (void)_linkAsideAlbumMetadata;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;

@end
