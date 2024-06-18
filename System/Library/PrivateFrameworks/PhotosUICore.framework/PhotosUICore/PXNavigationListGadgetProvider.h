@class NSNumber, NSString, NSPredicate, PXNavigationListDataSectionManager, PXExtendedTraitCollection;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver, PXPreferencesObserver>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) PXNavigationListDataSectionManager *dataSourceManager;
@property (readonly, nonatomic) BOOL isPresentedInPicker;
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker;
@property (readonly, nonatomic) BOOL excludesHiddenAlbum;
@property (readonly, nonatomic) BOOL shouldShowNavigationListForDeviceAndLayoutClass;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;
@property (retain, nonatomic) NSNumber *hiddenAlbumVisibleCache;
@property (retain, nonatomic) NSNumber *contentPrivacyEnabledCache;
@property (nonatomic) BOOL backgroundFetchingIsActive;
@property (nonatomic) BOOL shouldShowNavigationListOnIpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldHiddenAlbumBeVisible;
- (id)init;
- (void)preferencesDidChange;
- (id)initWithIdentifier:(id)a0;
- (void)startLoadingRemainingData;
- (void)_initializeDataSourceManagerIfNeeded;
- (BOOL)_isContentPrivacyEnabled;
- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (void)loadDataForGadgets;
- (void)pauseLoadingRemainingData;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateGadgets;
- (id)initWithType:(unsigned long long)a0 extendedTraitCollection:(id)a1 isPresentedInPicker:(BOOL)a2 isLimitedLibraryPicker:(BOOL)a3 assetsFilterPredicate:(id)a4 excludesHiddenAlbum:(BOOL)a5;
- (void)dealloc;
- (void)_resetGadgets;
- (void)generateGadgets;

@end
