@class NSString, PLSimpleDCIMDirectory, PLImportFileManager, PLLazyObject;

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore {
    unsigned long long _persistedAlbumDataDirectoryExists;
    NSString *_photoDataDirectory;
    NSString *_photoDataCachesDirectory;
    NSString *_photoDataAnalyticsDirectory;
    NSString *_photoDataSmartSharingDirectory;
    NSString *_photoDataSearchDirectory;
    NSString *_restoreInfoDirectory;
    NSString *_photoDataComputeDirectory;
    NSString *_dcimDirectory;
    NSString *_cplAssetsDirectory;
    NSString *_cmmAssetsDirectory;
    NSString *_journalsDirectory;
    NSString *_projectsDirectory;
    NSString *_privateDirectory;
    NSString *_internalDirectory;
    NSString *_partialVideoDirectory;
    NSString *_externalDirectory;
    NSString *_lockedDirectory;
    NSString *_changeStoreDatabasePath;
    NSString *_thumbnailsDirectory;
    NSString *_thumbnailsV2Directory;
    NSString *_thumbnailsVideoKeyFramesDirectory;
    BOOL _assetAlbumOrderStructurePathCreated;
    PLSimpleDCIMDirectory *_simpleDCIMDirectory;
    PLLazyObject *_lazyPathManagerForUBFOnDCIM;
}

@property (retain, nonatomic) PLImportFileManager *importFileManager;

+ (id)allPhotosPathsOnThisDevice;

- (id)pathsForExternalWriters;
- (id)modelRestorePostProcessingCompleteTokenPath;
- (id)privateDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (void)setExtendedAttributesWithIdentifier:(id)a0 andURL:(id)a1;
- (id)pathsForClientAccess:(id)a0;
- (id)basePrivateDirectoryPath;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)pathToAssetAlbumOrderStructure;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)cloudRestoreForegroundPhaseCompleteTokenPath;
- (id)simpleDCIMDirectory;
- (id)photoDirectoryWithType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)pathsForPermissionCheck;
- (id)addToPath:(id)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)getImportFileManager;
- (void)enumerateBundleScopesWithBlock:(id /* block */)a0;
- (id)iTunesSyncedFaceDataDirectory;
- (id)convertPhotoLibraryPathType:(unsigned char)a0;
- (id)cloudRestoreCompleteTokenPath;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)privateCacheDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)a0 error:(id *)a1;
- (id)assetMainFilePathWithDirectory:(id)a0 filename:(id)a1 bundleScope:(unsigned short)a2;
- (id)iTunesPhotosSyncDirectory;
- (void)setExtendedAttributesWithIdentifier:(id)a0;
- (id)photoMutationsDirectory;
- (id)pathsForFinderSyncFilesystemSizeCalculation;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)pathsForLibraryFilesystemSizeCalculation;
- (BOOL)isDeviceRestoreSupported;
- (id)readOnlyUrlWithIdentifier:(id)a0;
- (BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)a0 error:(id *)a1;
- (id)photosDatabasePath;
- (id)externalDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (void).cxx_destruct;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)a0 type:(unsigned char)a1 bundleScope:(unsigned short)a2;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)a0 populateInvalidAdjustmentPaths:(id)a1;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned short)a1;
- (BOOL)shouldUseFileIdentifierForBundleScope:(unsigned short)a0;
- (id)photoMetadataDirectory;
- (BOOL)ensureFileProviderSyncExclusionAttributeIsSetWithError:(id *)a0;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)a0 mode:(unsigned char)a1 toURLWithHandler:(id /* block */)a2;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)pathToAssetsToAlbumsMapping;
- (id)syncInfoPath;
- (id)internalDirectoryWithSubType:(unsigned char)a0 additionalPathComponents:(id)a1;
- (id)iTunesSyncedAssetsDirectory;
- (id)cloudRestoreBackgroundPhaseInProgressTokenPath;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)a0;
- (unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)a0;
- (id)createPathsForNewLibraries;
- (id)_externalDirectoryWithBundleIdentifier:(id)a0 createIfNeeded:(BOOL)a1;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)a0;

@end
