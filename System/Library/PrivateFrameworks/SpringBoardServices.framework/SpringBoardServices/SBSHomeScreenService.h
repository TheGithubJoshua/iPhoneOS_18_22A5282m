@class SBSDebugActiveWidgetInfo, NSArray, NSString, NSHashTable, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_installedWebClipObservers;
    NSHashTable *_homeScreenLayoutObservers;
}

@property (nonatomic, getter=isCachedHomeScreenLayoutAvailable) BOOL cachedHomeScreenLayoutAvailable;
@property (nonatomic, getter=isCachedHomeScreenLayoutAvailableValid) BOOL cachedHomeScreenLayoutAvailableValid;
@property (nonatomic, getter=isLargeIconLayoutEnabled) BOOL largeIconLayoutEnabled;
@property (nonatomic) BOOL addsNewIconsToHomeScreen;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (nonatomic) BOOL showsHomeScreenSearchAffordance;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *allIconLists;
@property (nonatomic, getter=isHomeScreenLayoutAvailable) BOOL homeScreenLayoutAvailable;
@property (readonly, nonatomic) SBSDebugActiveWidgetInfo *debuggingActiveWidgetInfo;
@property (readonly, copy, nonatomic) NSArray *overflowSlotCounts;

- (void)configureDeweyEachAppHasItsOwnCategory;
- (oneway void)runFloatingDockStressTestWithCompletion:(id /* block */)a0;
- (id)init;
- (void)reloadIcons;
- (void)removeHomeScreenLayoutAvailabilityObservationAssertion:(id)a0;
- (oneway void)installedWebClipsDidChange;
- (oneway void)homeScreenLayoutAvailabilityDidChange:(id)a0;
- (id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)a0;
- (void)runRemoveAndRestoreIconTest;
- (void)runWidgetDiscoverabilityTest;
- (void)addDebugIconWithSizeClassDescription:(id)a0 inPage:(unsigned long long)a1 atPositionDescription:(id)a2;
- (void)addApplicationIconToHomeScreenWithBundleIdentifier:(id)a0;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)a0;
- (id)silhouetteLayoutForPageAtIndex:(unsigned long long)a0;
- (void)resetHomeScreenLayoutWithCompletion:(id /* block */)a0;
- (void)addSuggestedPageWithPageType:(id)a0 focusModeIdentifier:(id)a1;
- (void)requestAppLibraryUpdateWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)changeDisplayedDateOffsetOverride:(double)a0;
- (void)insertEmptyPageAtIndex:(unsigned long long)a0;
- (void)setIconListsHidden:(id)a0;
- (void)reloadHomeScreenLayout;
- (void)removeAllWidgets;
- (void)resetCategoriesLayoutWithCompletion:(id /* block */)a0;
- (void)clearAllOverflowSlotCounts;
- (void).cxx_destruct;
- (void)presentAppLibraryCategoryPodForCategoryIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)ignoreAllApps;
- (void)overrideBadgeValue:(id)a0 forBundleIdentifier:(id)a1;
- (id)addHomeScreenLayoutAvailabilityObserver:(id)a0;
- (void)addEmptyPage;
- (void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeInstalledWebClipsObservationAssertion:(id)a0;
- (void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)a0;
- (void)changeDisplayedDateOverride:(id)a0;
- (void)clearTodayViewLayout;
- (void)configureLibraryWithCategoryLimit:(long long)a0;
- (void)runDownloadingIconTest;
- (void)forbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (id)addInstalledWebClipsObserver:(id)a0;
- (BOOL)hasWidgetWithBundleIdentifier:(id)a0;
- (void)resetTodayViewLayout;
- (void)presentAppLibraryAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)configureDeweyOneCategoryWithAllApps;
- (void)unforbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeWidgetsFromHomeScreen;
- (id)folderPathToIconWithBundleIdentifier:(id)a0;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)randomizeAllIconsAcrossPagesWithPageCount:(unsigned long long)a0;
- (void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)a0;
- (void)dismissAppLibraryWithCompletion:(id /* block */)a0;
- (void)setupHomeScreenForWidgetScrollPerformanceTest;
- (BOOL)debugContinuityWithBadgeType:(id)a0 deviceTypeIdentifier:(id)a1;

@end
