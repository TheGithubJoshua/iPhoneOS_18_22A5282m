@class PXUpdater, NSString, PHPhotoLibrary, PXFetchResultBasedMemoriesDataSourceManager;

@interface PXStoryMemoryFeedDataSourceManager : PXSectionedDataSourceManager <PXStoryMutableMemoryFeedDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXPreferencesObserver>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *allMemoriesDataSourceManager;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL hasAnyFavorites;
@property (readonly, nonatomic) BOOL wantsFavoritesOnly;
@property (readonly, nonatomic) BOOL hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhotoLibrary:(id)a0;
- (void)_updateDataSource;
- (id)init;
- (void)performChanges:(id /* block */)a0;
- (void)preferencesDidChange;
- (void)didPerformChanges;
- (void)setIsActive:(BOOL)a0;
- (void)_setNeedsUpdate;
- (id)createInitialDataSource;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)_invalidateDataSource;
- (void)_invalidateChildDataSourceManagers;
- (void)_invalidateHasAnyFavorites;
- (void)_setDataSourceToEmpty;
- (void)_updateChildDataSourceManagers;
- (void)_updateHasAnyFavorites;
- (void)setHasAnyFavorites:(BOOL)a0;
- (void)setWantsFavoritesOnly:(BOOL)a0;

@end
