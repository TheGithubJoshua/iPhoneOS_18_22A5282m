@class NSArray, _ATXInternalInstallNotification, _ATXInternalUninstallNotification, NSDictionary, SBSHomeScreenService, NSObject, ATXHomeScreenConfigCache, NSMutableIndexSet, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

@interface _ATXAppIconState : NSObject {
    _ATXInternalInstallNotification *_installNotification;
    _ATXInternalUninstallNotification *_uninstallNotification;
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _homeScreenConfigCacheChangeDarwinNotificationObserver;
    int _homeScreenTodayPageConfigCacheChangeDarwinNotificationObserver;
    int _dockAppListChangeDarwinNotificationObserver;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    SBSHomeScreenService *_sbsHomeScreenService;
    NSDictionary *_iconLocationByBundleId;
    unsigned long long _numHomeScreenPages;
    unsigned long long _numHomeScreenFolders;
    NSArray *_orderedVisiblePageIndices;
    NSMutableIndexSet *_pageIndicesWithAppPredictionPanels;
    NSMutableIndexSet *_pageIndicesWithSuggestionWidgets;
    _PASSimpleCoalescingTimer *_coalescedReloadOperation;
}

+ (id)sharedInstance;

- (id)init;
- (id)initWithHomeScreenConfigCache:(id)a0 sbsHomeScreenService:(id)a1;
- (id)allFolderApps;
- (void)_reload;
- (unsigned long long)getFirstVisiblePageIndex;
- (BOOL)appOnDockWithBundleId:(id)a0;
- (long long)folderPageNumberForBundleId:(id)a0;
- (unsigned long long)numberOfFolders;
- (id)allInstalledAppsKnownToSpringBoard;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (long long)springboardPageNumberForBundleId:(id)a0;
- (void).cxx_destruct;
- (id)nonFolderAppSetOnPages;
- (id)allDockedApps;
- (id)allAppsKnownToSpringBoard;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (unsigned long long)numberOfApps;
- (id)springboardPageNumbersWithSuggestionsWidgets;
- (BOOL)appInFolderWithBundleId:(id)a0;
- (unsigned long long)numberOfPages;

@end
