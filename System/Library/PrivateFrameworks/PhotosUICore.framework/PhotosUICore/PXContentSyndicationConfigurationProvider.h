@class NSString, PXContentSyndicationDataSourceManager, PHPhotoLibrary, NSNumber, SLHighlightCenter;

@interface PXContentSyndicationConfigurationProvider : PXObservable <PXCollectionsDataSourceManagerObserver, PXSettingsKeyObserver, SLHighlightCenterDelegate> {
    SLHighlightCenter *_socialLayerHighlightCenter;
}

@property (class, retain, nonatomic) NSNumber *testingOverride_contentSyndicationEnabled;
@property (class, readonly) PXContentSyndicationConfigurationProvider *sharedInstance;

@property (nonatomic) BOOL contentSyndicationIsAvailable;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) BOOL showUnsavedSyndicatedContentInPhotosGrids;
@property (nonatomic) BOOL showContentSyndicationItemInSidebar;
@property (nonatomic) BOOL readyToLoadActualDataSourceManager;
@property (retain, nonatomic) PXContentSyndicationDataSourceManager *syndicationItemsDataSourceManager;
@property (retain, nonatomic) PHPhotoLibrary *syndicationPhotoLibrary;
@property (nonatomic) int systemLibraryChangeToken;
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInMemories;
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInFeaturedPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)_updateShowUnsavedSyndicatedContentInPhotosGrids;
- (id)_init;
- (void)_updateShowUnsavedSyndicatedContentInMemories;
- (void)_updateEverything;
- (void)_createDataSourceManagerIfNeeded;
- (void)_stopObservingSystemLibraryChanges;
- (void)_updateShowContentSyndicationItemInSidebar;
- (void)_startObservingSystemLibraryChanges;
- (void)setShowUnsavedSyndicatedContentInMemories:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateContentSyndicationAvailability;
- (void)_updateShowUnsavedSyndicatedContentInFeaturedPhotos;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_dataSourceManagerForDataSourceType:(long long)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)dealloc;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;
- (void)setShowUnsavedSyndicatedContentInFeaturedPhotos:(BOOL)a0;
- (void)_updateDataSourceType;
- (void)_invalidateDataSourceManager;
- (void)_markDataSourceManagerAsReadyToLoad;

@end
