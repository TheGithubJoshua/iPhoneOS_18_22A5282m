@class NSOrderedSet;

@interface SBIconModel : SBHIconModel {
    BOOL _iconsHaveBeenLoadedOnce;
    BOOL _createsIconsForInternalApps;
}

@property (copy, nonatomic) NSOrderedSet *cachedFlattenedForecastedDesiredIconState;

+ (Class)applicationIconClass;
+ (Class)bookmarkClass;
+ (id)migratedIdentifierForLeafIdentifier:(id)a0;
+ (id)currentLocaleDidChangeNotificationName;
+ (Class)bookmarkIconClass;

- (id)indexPathForIconInPlatformState:(id)a0;
- (BOOL)shouldAvoidCreatingIconForApplication:(id)a0;
- (id)modernizeRootArchive:(id)a0;
- (BOOL)importState:(id)a0;
- (BOOL)shouldAvoidPlacingIconOnFirstPage:(id)a0;
- (id)addApplication:(id)a0;
- (BOOL)isIconVisible:(id)a0;
- (void)loadAllIcons;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)clearDesiredIconStateWithOptions:(unsigned long long)a0;
- (void)_replaceAppIconsWithDownloadingIcons:(id)a0;
- (id)exportFlattenedState:(BOOL)a0 includeMissingIcons:(BOOL)a1;
- (id)exportState:(BOOL)a0;
- (id)forecastedLayoutForIconState:(id)a0 includeMissingIcons:(BOOL)a1;
- (id)addBookmarkIconForWebClip:(id)a0;
- (void).cxx_destruct;
- (id)exportPendingState:(BOOL)a0 includeMissingIcons:(BOOL)a1;
- (id)applicationIconForBundleIdentifier:(id)a0;
- (id)applicationWithBundleIdentifier:(id)a0;
- (id)bookmarkIconForWebClipIdentifier:(id)a0;
- (void)adjustIconsToShow:(id)a0 iconsToHide:(id)a1 afterChangeToVisibleIconTags:(id)a2 hiddenIconTags:(id)a3;
- (void)willLayout;

@end
