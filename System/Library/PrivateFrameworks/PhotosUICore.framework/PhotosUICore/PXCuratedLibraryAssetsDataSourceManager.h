@class PXCuratedLibraryAssetsDataSourceManagerConfiguration, NSString, NSPredicate, PXUpdater, PXAssetsDataSourceManager, PXAssetsDataSource, PXVisualPositionsChangeDetails, PXPhotoKitAssetsDataSourceManager, NSDictionary;
@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate;

@interface PXCuratedLibraryAssetsDataSourceManager : PXAssetsDataSourceManager <PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver> {
    struct { BOOL isSelectingAssets; BOOL visibleAssetCollections; BOOL willTransitionFromZoomLevelToZoomLevel; BOOL didTransitionFromZoomLevelToZoomLevel; BOOL dominantAssetCollectionReferenceForZoomLevel; BOOL transitionTypeFromZoomLevelToZoomLevel; } _delegateRespondsTo;
    NSDictionary *_dataSourceManagerByZoomLevel;
    BOOL _isForcingSections;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManagerConfiguration *configuration;
@property (nonatomic) BOOL canLoadData;
@property (nonatomic) long long zoomLevelForCurrentDataSourceManager;
@property (nonatomic) BOOL wantsCuration;
@property (retain, nonatomic) PXAssetsDataSource *currentDataSource;
@property (readonly, nonatomic) PXAssetsDataSourceManager *currentAssetsDataSourceManager;
@property (nonatomic) long long currentDataSourceZoomLevel;
@property (retain, nonatomic) PXVisualPositionsChangeDetails *lastVisualPositionsChangeDetails;
@property (nonatomic) long long lastTransitionType;
@property (nonatomic) long long lastVisualPositionsChangeFromDataSourceIdentifier;
@property (nonatomic) long long lastVisualPositionsChangeToDataSourceIdentifier;
@property (weak, nonatomic) id<PXCuratedLibraryAssetsDataSourceManagerDelegate> delegate;
@property (readonly, nonatomic) long long zoomLevel;
@property (readonly, nonatomic) NSPredicate *allPhotosFilterPredicate;
@property (readonly, nonatomic) BOOL canIncludeUnsavedSyndicatedAssets;
@property (readonly, nonatomic) long long libraryFilter;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *currentPhotoKitAssetsDataSourceManager;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhotoLibrary:(id)a0;
- (void)setLibraryFilter:(long long)a0;
- (void)_updateDataSource;
- (id)init;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)loadIfNeeded;
- (void)didPerformChanges;
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)a0 withParentAssetCollectionReference:(id)a1 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)a2;
- (id)dataSourceManagerForZoomLevel:(long long)a0;
- (void)setTransientKeyAsset:(id)a0 forAssetCollection:(id)a1 zoomLevel:(long long)a2;
- (id)createInitialDataSource;
- (id)assetsInAssetCollection:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(long long)a0 withParent:(id)a1;
- (unsigned long long)libraryStateForZoomLevel:(long long)a0;
- (void)setZoomLevel:(long long)a0;
- (void)_invalidateDataSourceManagers;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)setNeedsUpdate;
- (void)setAllPhotosFilterPredicate:(id)a0;
- (void).cxx_destruct;
- (void)_updateDataSourceManagers;
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)a0 withParentAssetCollectionReference:(id)a1;
- (void)resumeChangeDelivery:(id)a0;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0 inZoomLevel:(long long)a1;
- (long long)transitionTypeFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;
- (id)_photosDataSourceForZoomLevel:(long long)a0;
- (void)_invalidatePropertiesDerivedFromZoomLevel;
- (id)visualPositionsChangeDetailsFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;
- (void)_updateCuration;
- (void)setCanIncludeUnsavedSyndicatedAssets:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateDataSourceFilters;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (BOOL)forceAllPhotosAccurateIfNeeded;
- (void)_updateDataSourceFilters;
- (void)_enumeratePhotoKitDataDataSourceManagers:(id /* block */)a0;
- (void)_invalidateDataSource;
- (void)_updatePropertiesDerivedFromZoomLevel;
- (id)dataSourceForZoomLevel:(long long)a0;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (void)_invalidateCuration;

@end
