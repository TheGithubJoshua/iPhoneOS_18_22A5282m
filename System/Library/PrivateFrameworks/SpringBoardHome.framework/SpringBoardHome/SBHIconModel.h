@class SBIcon, NSTimer, NSString, NSHashTable, NSSet, NSOrderedSet, NSDictionary, SBSHomeScreenService, SBRootFolder, NSMutableDictionary, NSMutableSet;
@protocol SBHIconModelDelegate, SBIconModelStore, SBHIconModelApplicationDataSource, BSInvalidatable;

@interface SBHIconModel : NSObject <SBFolderObserver, SBIconObserver, SBHIconModelApplicationDataSourceObserver, SBSHomeScreenServiceInstalledWebClipsObserver, SBIconDelegate, SBHIconStateUnarchiverIconSource, SBHIconStateUnarchiverDelegate, BSDescriptionProviding> {
    NSMutableDictionary *_leafIconsByIdentifier;
    NSMutableDictionary *_widgetIconsByIdentifier;
    NSMutableDictionary *_applicationIconsByBundleIdentifier;
    NSMutableSet *_additionalApplicationIconIdentifiers;
    NSHashTable *_folders;
    NSMutableSet *_autosaveDisableAssertions;
    NSMutableSet *_removedIcons;
    struct __CFRunLoopObserver { } *_iconRunLoopObserver;
    struct __CFRunLoopObserver { } *_discardCachedOtherRootFoldersRunLoopObserver;
    BOOL _tagsHaveBeenSet;
    NSMutableDictionary *_alternateListLayouts;
}

@property (class, readonly, nonatomic) Class applicationIconClass;

@property (copy, nonatomic) NSSet *archivedLeafIdentifiers;
@property (copy, nonatomic) NSDictionary *desiredIconState;
@property (copy, nonatomic) NSOrderedSet *desiredIconStateFlattened;
@property (retain, nonatomic) SBRootFolder *cachedDesiredRootFolder;
@property (retain, nonatomic) SBRootFolder *cachedDefaultRootFolder;
@property (nonatomic, getter=isLayingOut) BOOL layingOut;
@property (nonatomic, getter=isCheckingModelConsistency) BOOL checkingModelConsistency;
@property (retain, nonatomic) SBIcon *rootFolderIcon;
@property (nonatomic, getter=isIconStateDirty) BOOL iconStateDirty;
@property (retain, nonatomic) NSTimer *autosaveTimer;
@property (readonly, nonatomic) SBSHomeScreenService *homeScreenService;
@property (retain, nonatomic) id<BSInvalidatable> installedWebClipsObservation;
@property (nonatomic) long long lastLayoutStatus;
@property (nonatomic) unsigned long long rootFolderAllowedGridSizeClasses;
@property (retain, nonatomic) id<SBIconModelStore> store;
@property (readonly, nonatomic) id<SBHIconModelApplicationDataSource> applicationDataSource;
@property (weak, nonatomic) id<SBHIconModelDelegate> delegate;
@property (readonly, nonatomic) SBRootFolder *rootFolder;
@property (readonly, nonatomic) unsigned long long maxListCountForFolders;
@property (readonly, nonatomic) unsigned long long maxIconCountForDock;
@property (readonly, nonatomic) unsigned long long maxColumnCountForTodayList;
@property (readonly, nonatomic) unsigned long long maxRowCountForFavoriteTodayList;
@property (readonly, nonatomic) struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } gridSizeClassSizes;
@property (readonly, nonatomic) unsigned long long listRotatedLayoutClusterGridSizeClass;
@property (readonly, copy, nonatomic) NSSet *visibleIconIdentifiers;
@property (readonly, copy, nonatomic) NSSet *hiddenIconTags;
@property (readonly, copy, nonatomic) NSSet *visibleIconTags;
@property (readonly, copy, nonatomic) NSSet *leafIcons;
@property (readonly, copy, nonatomic) NSSet *visibleLeafIcons;
@property (readonly, copy, nonatomic) NSSet *leafIconsUniquedByApplicationBundleIdentifier;
@property (nonatomic) BOOL automaticallyAddsApplications;
@property (nonatomic) BOOL automaticallyAddsWebClips;
@property (readonly, copy, nonatomic) NSSet *currentLeafIdentifiers;
@property (readonly, copy, nonatomic) NSSet *leafIconIdentifiers;
@property (nonatomic) BOOL ignoresIconsNotInIconState;
@property (nonatomic) BOOL sortsIconsAlphabetically;
@property (readonly, nonatomic) BOOL hasDesiredIconState;
@property (readonly, copy, nonatomic) NSSet *missingDesiredIconIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *defaultIconState;
@property (nonatomic, getter=isRestoring) BOOL restoring;
@property (readonly, copy, nonatomic) NSString *localizedDefaultFolderName;
@property (readonly, copy, nonatomic) NSString *unlocalizedDefaultFolderName;
@property (nonatomic) BOOL automaticallyAddsApplicationPlaceholders;
@property (retain, nonatomic) id<SBIconModelStore> todayListsStore;
@property (nonatomic) BOOL postsDidAddIconNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)bookmarkClass;
+ (id)migratedIdentifierForLeafIdentifier:(id)a0;
+ (id)currentLocaleDidChangeNotificationName;
+ (Class)bookmarkIconClass;
+ (Class)iconClassForApplicationWithBundleIdentifier:(id)a0;
+ (id)allWebClips;
+ (id)defaultApplicationDataSource;

- (void)importIconState:(id)a0;
- (void)markIconStateClean;
- (void)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (id)iconsOfClass:(Class)a0;
- (void)folder:(id)a0 willAddIcon:(id)a1;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)a0;
- (void)didAddIcon:(id)a0;
- (BOOL)iconStateUnarchiver:(id)a0 listsAllowRotatedLayoutForFolderClass:(Class)a1;
- (id)iconState;
- (BOOL)shouldPlaceIconOnIgnoredList:(id)a0;
- (id)initWithStore:(id)a0 applicationDataSource:(id)a1;
- (BOOL)deleteIconStateWithOptions:(unsigned long long)a0;
- (void)iconArchivableStateDidChange:(id)a0;
- (BOOL)addIconToDesignatedLocationBasedOnDefaultIconState:(id)a0 toRootFolder:(id)a1 options:(unsigned long long)a2 listGridCellInfoOptions:(unsigned long long)a3;
- (void)_setUpIconRunLoopObserver;
- (void)_noteApplicationIconImageChanged:(id)a0;
- (id)desiredIndexPathForIconWithIdentifier:(id)a0;
- (void)removeIcon:(id)a0;
- (void)localeChanged;
- (void)addIconsOfClass:(Class)a0 toSet:(id)a1;
- (void)_noteRemovedIcons:(id)a0;
- (id)indexPathForIconInPlatformState:(id)a0;
- (BOOL)addIconToDesignatedLocationBasedOnDesiredIconState:(id)a0 toRootFolder:(id)a1 options:(unsigned long long)a2 listGridCellInfoOptions:(unsigned long long)a3;
- (id)indexPathInRootFolder:(id)a0 forNewIcon:(id)a1 isDesignatedLocation:(BOOL *)a2 replaceExistingIconAtIndexPath:(id *)a3;
- (BOOL)shouldAvoidCreatingIconForApplication:(id)a0;
- (id)makeFolderWithDisplayName:(id)a0;
- (id)unarchivedRootFolderForAddingIconFromOtherIconState:(id)a0;
- (BOOL)saveIconStateIfNeeded;
- (unsigned long long)allowedGridSizeClassesForTodayListForIconStateUnarchiver:(id)a0;
- (void)folderIconStateDidDirty:(id)a0;
- (id)removeApplication:(id)a0 pruneEmptyIcons:(BOOL)a1;
- (void)updateExistingBookmarkIcon:(id)a0 forUpdatedWebClip:(id)a1;
- (void)_saveIconState;
- (void)markIconStateDirty;
- (void)removeAllIcons;
- (id)modernizeRootArchive:(id)a0;
- (id)init;
- (id)widgetIconsContainingWidgetsMatchingUniqueIdentifier:(id)a0;
- (void)setLeafIconsByIdentifier:(id)a0;
- (BOOL)addIcon:(id)a0 toDesignatedLocationInRootFolder:(id)a1 options:(unsigned long long)a2 listGridCellInfoOptions:(unsigned long long)a3;
- (id)widgetIcons;
- (void)iconModelApplicationDataSource:(id)a0 applicationsUpdated:(id)a1;
- (unsigned long long)maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)a0;
- (void)reloadIcons;
- (void)setVisibilityOfIconsWithVisibleTags:(id)a0 hiddenTags:(id)a1;
- (id)removeApplication:(id)a0;
- (void)removeIcon:(id)a0 shouldRemoveFromRootFolder:(BOOL)a1;
- (void)checkModelConsistency;
- (BOOL)addIcon:(id)a0 toDesignatedLocationBasedOnOtherRootFolder:(id)a1 toRootFolder:(id)a2 options:(unsigned long long)a3 listGridCellInfoOptions:(unsigned long long)a4;
- (void)checkModelConsistencyInRootFolder:(id)a0 listGridCellInfoOptions:(unsigned long long)a1;
- (void)iconWantsUninstall:(id)a0;
- (void)clearDesiredIconStateIfPossible;
- (BOOL)shouldAvoidPlacingIconOnFirstPage:(id)a0;
- (void)layoutIfNeeded;
- (BOOL)_saveIconStateWithError:(id *)a0;
- (id)addApplication:(id)a0;
- (void)discardCachedOtherRootFolders;
- (id)_adjustedIndexPathInRootFolder:(id)a0 withinIconState:(id)a1 forIconWithIdentifier:(id)a2;
- (void)removeIcons:(id)a0;
- (id)_adjustedPlatformIndexPathInRootFolder:(id)a0 forIcon:(id)a1;
- (BOOL)addIconToDesignatedLocation:(id)a0 options:(unsigned long long)a1 listGridCellInfoOptions:(unsigned long long)a2;
- (void)autosaveTimerDidFire:(id)a0;
- (void)enumerateApplicationIconsForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)didUnarchiveMetadata:(id)a0;
- (id)addApplicationPlaceholder:(id)a0;
- (void)scheduleIconStateAutosave;
- (void)scheduleDiscardOfCachedOtherRootFolders;
- (BOOL)_saveIconState:(id)a0 error:(id *)a1;
- (void)installedWebClipsDidChange;
- (BOOL)isIconVisible:(id)a0;
- (void)checkModelConsistencyWithListGridCellInfoOptions:(unsigned long long)a0;
- (void)iconModelApplicationDataSource:(id)a0 applicationsRemoved:(id)a1;
- (void)loadAllIcons;
- (void)setForecastedLeavesOnIconModel:(id)a0 includingMissingIcons:(id)a1;
- (void)iconModelApplicationDataSource:(id)a0 applicationPlaceholdersRemoved:(id)a1;
- (id)disableIconStateAutosaveForReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; })gridSizeClassSizesForIconStateUnarchiver:(id)a0;
- (unsigned long long)listRotatedLayoutClusterGridSizeClassForIconStateUnarchiver:(id)a0;
- (void)clearDesiredIconStateWithOptions:(unsigned long long)a0;
- (unsigned long long)allowedGridSizeClassesForDockForIconStateUnarchiver:(id)a0;
- (void)folder:(id)a0 didAddList:(id)a1;
- (id)leafIconsForIdentifiers:(id)a0;
- (void)_rootFolder:(id)a0 moveIconsToFirstPage:(id)a1 placeBumpedIconsSomewhereNice:(id)a2;
- (id)leafIconsForIdentifiers:(id)a0 notFoundMarker:(id)a1;
- (id)removeApplicationWithBundleIdentifier:(id)a0 pruneEmptyIcons:(BOOL)a1;
- (BOOL)deleteIconState;
- (id)removeApplicationPlaceholder:(id)a0;
- (id)indexPathForNewIcon:(id)a0 isDesignatedLocation:(BOOL *)a1 replaceExistingIconAtIndexPath:(id *)a2;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })listGridSizeForFolderClass:(Class)a0;
- (id)_unarchiveRootFolderWithLayoutStatus:(long long *)a0;
- (id)addApplication:(id)a0 force:(BOOL)a1;
- (BOOL)isTrackingIcon:(id)a0;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })iconStateUnarchiver:(id)a0 listGridSizeForFolderClass:(Class)a1;
- (id)initWithStore:(id)a0;
- (void)folder:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (id)succinctDescription;
- (void)addIcon:(id)a0;
- (id)addBookmarkIconForWebClip:(id)a0;
- (id)expectedIconForDisplayIdentifier:(id)a0 createIfNecessary:(BOOL)a1;
- (void)iconModelApplicationDataSource:(id)a0 applicationsAdded:(id)a1;
- (id)bookmarkIconForWebClipPlaceholderBundleIdentifier:(id)a0;
- (void)_checkRemovedIcons;
- (id)iconModelMetadata;
- (void)enumerateLeafIconsUsingBlock:(id /* block */)a0;
- (id)localizedFolderNameForDefaultDisplayName:(id)a0;
- (unsigned long long)allowedGridSizeClassesForDock;
- (unsigned long long)maxIconCountForDockForIconStateUnarchiver:(id)a0;
- (BOOL)addIconToDesignatedLocationBasedOnDelegate:(id)a0 toRootFolder:(id)a1 options:(unsigned long long)a2 listGridCellInfoOptions:(unsigned long long)a3;
- (BOOL)listsAllowRotatedLayoutForFolderClass:(Class)a0;
- (void)layout;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (long long)_getLoadedIconState:(id *)a0 error:(id *)a1;
- (id)applicationIconForBundleIdentifier:(id)a0;
- (id)applicationWithBundleIdentifier:(id)a0;
- (unsigned long long)iconStateUnarchiver:(id)a0 allowedGridSizeClassesForFolderClass:(Class)a1;
- (id)makeFolderWithDisplayName:(id)a0 uniqueIdentifier:(id)a1;
- (id)expectedIconForDisplayIdentifier:(id)a0;
- (void)importDesiredIconState:(id)a0;
- (unsigned long long)maxListCountForFoldersForIconStateUnarchiver:(id)a0;
- (id)_adjustedDesiredIndexPathInRootFolder:(id)a0 forIconWithIdentifier:(id)a1;
- (void)_tearDownIconRunloopObserverIfNeeded;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })iconStateUnarchiver:(id)a0 listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)a1;
- (BOOL)_shouldSkipAddingIcon:(id)a0 toRootFolder:(id)a1;
- (void)iconModelApplicationDataSource:(id)a0 applicationPlaceholdersAdded:(id)a1;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_removeIconStateAutosaveDisableAssertion:(id)a0;
- (Class)iconClassForApplicationWithBundleIdentifier:(id)a0;
- (id)bookmarkIconForWebClipIdentifier:(id)a0;
- (void)folder:(id)a0 didAddIcons:(id)a1 removedIcons:(id)a2;
- (id)leafIconForIdentifier:(id)a0;
- (void)clearDesiredIconState;
- (void)removeIconForIdentifier:(id)a0;
- (id)applicationIconsForBundleIdentifier:(id)a0;
- (id)widgetIconsContainingWidgetsMatchingExtensionBundleIdentifier:(id)a0 kind:(id)a1 sizeClass:(long long)a2;
- (void)loadDesiredIconState;
- (void)adjustIconsToShow:(id)a0 iconsToHide:(id)a1 afterChangeToVisibleIconTags:(id)a2 hiddenIconTags:(id)a3;
- (id)addAdditionalIconMatchingIcon:(id)a0;
- (void)removeApplicationIconsForBundleIdentifier:(id)a0;
- (void)saveDesiredIconState;
- (void)_tearDownDiscardCachedOtherRootFoldersRunloopObserverIfNeeded;
- (void)willLayout;
- (unsigned long long)allowedGridSizeClassesForFolderClass:(Class)a0;
- (id)removeApplicationWithBundleIdentifier:(id)a0;
- (unsigned long long)allowedGridSizeClassesForTodayList;

@end