@class NSDictionary, SBSHomeScreenService, NSString, _ATXAppLaunchHistogramManager, _ATXAppInfoManager, ATXGenericFileBasedCache, NSArray, NSMutableDictionary, NSUserDefaults, NSObject, NSSet, ATXAppClipUsageDuetDataProvider, _ATXInternalInstallNotification, ATXAppPredictionBlacklist, ATXInternalAppsInstallStartNotification, ATXTimer, _ATXAppIconState, ATXInternalOffloadAppsNotification, ATXClient, ATXAppClipUsageDuetContextUpdateListener, NSDate, _ATXInternalUninstallNotification;
@protocol OS_dispatch_queue;

@interface ATXAppDirectoryOrderingProvider : NSObject {
    NSDictionary *_appLaunchCounts;
    NSDictionary *_libraryAppLaunchCounts;
    NSObject<OS_dispatch_queue> *_queue;
    ATXClient *_atxClient;
    _ATXAppInfoManager *_infoManager;
    _ATXInternalUninstallNotification *_uninstallNotification;
    _ATXInternalInstallNotification *_installNotification;
    ATXInternalOffloadAppsNotification *_offloadNotification;
    ATXInternalAppsInstallStartNotification *_installingNotification;
    ATXGenericFileBasedCache *_cache;
    NSDictionary *_hardcodedAppCategoryMappings;
    NSDictionary *_hardcodedAppCategoryScreenTimeMappings;
    ATXAppPredictionBlacklist *_blacklist;
    NSSet *_blacklistedBundleIds;
    NSMutableDictionary *_recentApps;
    ATXGenericFileBasedCache *_recentsCache;
    ATXAppClipUsageDuetDataProvider *_appClipDataProvider;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    ATXAppClipUsageDuetContextUpdateListener *_appClipChangeListener;
    _ATXAppIconState *_appIconState;
    NSDictionary *_appScreenTimeCategoryMappings;
    NSSet *_homescreenAppsToDedupeAgainst;
    NSSet *_managedAppIDs;
    NSString *_managingOrganizationName;
    SBSHomeScreenService *_sbsHomeScreenService;
    int _settingsChangedToken;
    NSDate *_lastUpdatePostTime;
    NSUserDefaults *_atxDefaults;
    ATXTimer *_currentTimer;
    BOOL _currentCacheDueForRefresh;
}

@property (retain, nonatomic) NSArray *categories;

+ (id)sharedInstance;
+ (BOOL)isStoreDemoMode;
+ (id)_reorderedRecentApps:(id)a0;

- (void)notifyBookmarksDidChange;
- (void)requestNotificationWhenCategoriesAreReady;
- (void)appLaunchDatesWithReply:(id /* block */)a0;
- (void)categoriesWithReply:(id /* block */)a0;
- (void)_updateMDMAndEnterpriseCategories;
- (BOOL)_writeToDisk:(id)a0 cache:(id)a1 logIdentifier:(id)a2;
- (BOOL)_writeCategoriesToDisk;
- (id /* block */)_categoryComparator;
- (id)_getEnterpriseCategoriesForApps:(id)a0;
- (id)_screenTimeIdFromBundleId:(id)a0;
- (void)_updateCategories;
- (void)_updateRecentsForInstalledApps:(id)a0;
- (void)_registerForManagedAppsOrgInfoChangedNotification;
- (id)_issuingOrganizationForEnterpriseAppBundleID:(id)a0 isMDM:(BOOL)a1;
- (void)_initCategories;
- (void)_updateCategoriesWithRetries:(unsigned long long)a0;
- (id)_groupEnterpriseAppsByIssuerWithBundleIDs:(id)a0 isMDM:(BOOL)a1;
- (void)_reorderAndHideDupesForAppsInCategory:(id)a0;
- (id)_totalLaunchCountsForCategory:(id)a0;
- (void)updateCacheWithActivity:(id)a0 completionHandler:(id /* block */)a1;
- (id)_sortCategories:(id)a0;
- (void)_handleManagedAppsChangedNotification;
- (id)_getManagedAppIDs;
- (id /* block */)_appBundleIDRecencyComparatorForLastLaunchDates:(id)a0;
- (void)categoryLaunchInformationWithReply:(id /* block */)a0;
- (void)_updateScreenTimeMappingsForAppBundleIds:(id)a0 withRetries:(unsigned long long)a1;
- (void)_postPredictedAppsAndRecentsUpdateNotificationWithReason:(id)a0;
- (id /* block */)_appBundleIDTotalLaunchComparator;
- (void)_updateMDMStatus;
- (id)_categoryChangesDictionaryForChangedApps:(id)a0;
- (BOOL)_shouldInvalidateCachedCategoriesForDemoMode;
- (void)postPredictedAppsAndRecentsUpdateNotificationWithReason:(id)a0;
- (void)_updateMissingInstalledApps;
- (void)_ensureCategoryConsistency;
- (void)_updateMDMCategoryName;
- (void)_handleManagedAppsOrgInfoChangedNotification;
- (id)_totalCombinedLaunchCountsForCategory:(id)a0;
- (void)updateRecents;
- (void).cxx_destruct;
- (void)appLaunchInformationWithReply:(id /* block */)a0;
- (id)initWithAppInfoManager:(id)a0 cache:(id)a1 blacklist:(id)a2 recentsCache:(id)a3 appClipDataProvider:(id)a4 appIconState:(id)a5 appClipChangeListener:(id)a6 histogramManager:(id)a7;
- (id)description;
- (id)_genreIdFromBundleId:(id)a0;
- (void)_postUpdateNotificationWithReason:(id)a0;
- (id)_mdmEnterpriseCategoriesForApps:(id)a0;
- (void)_updateRecentsForAppClipUsageEvent:(id)a0;
- (void)_splitEnterpriseCategoryWithAppsInCategory:(id)a0 appsByCategoryName:(id)a1 isMDMAppCategory:(BOOL)a2;
- (void)waitForPendingTasks;
- (id)_getMDMOrgName;
- (void)topAppsWithMaxNumberOfResults:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)_readCategoriesFromDisk;
- (void)_updateAppClipSinceDate:(id)a0 installDates:(id)a1;
- (BOOL)_shiftAppIndices:(id)a0 category:(id)a1;
- (void)_registerForManagedAppsChangedNotification;
- (id)_categoryIdFromBundleId:(id)a0;
- (BOOL)_writeRecentsToDisk;
- (void)dealloc;
- (id)_combinedLaunchCountForBundleId:(id)a0;
- (void)_postProcessCategories:(id)a0 withReply:(id /* block */)a1;
- (void)_updateCategoriesForDownweightedAppSet:(id)a0;
- (void)setUp;
- (void)_updateRecents;
- (void)_updateCategoriesForInstalledApps:(id)a0;
- (void)_createHomeScreenServiceIfNecessary;
- (id)_totalLibraryLaunchCountsForCategory:(id)a0;
- (void)_updateCategoriesForUninstalledApps:(id)a0;
- (BOOL)isMarketingDemoMode;
- (void)_updateAppLaunchCounts;
- (id)_computeCategoriesWithRetries:(unsigned long long)a0;

@end
