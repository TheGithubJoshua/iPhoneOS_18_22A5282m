@class _ATXDataStore, NSMutableArray;

@interface _ATXAppInfoManager : NSObject <ATXBundleIdRemovableProtocol> {
    _ATXDataStore *_dataStore;
    NSMutableArray *_installDeltaLog;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

+ (id)sharedInstance;
+ (id)sortArrayAndComputeMedian:(id)a0;

- (void)train;
- (void)removeAppLaunchesForBundleId:(id)a0;
- (void)addMedianSecondsBetweenAppActionsForActionKey:(id)a0 median:(id)a1;
- (id)lastAppActionLaunchDate;
- (void)clearAppLaunchInfo;
- (id)init;
- (id)totalSlotsInDatastore;
- (id)allAppsLaunchedOrInstalledWithin30Days;
- (id)averageSecondsBetweenAppActionsForActionKey:(id)a0;
- (id)appInfoForBundleId:(id)a0;
- (void)handleAppInstallWithInstallDict:(id)a0;
- (void)updateGenreIdsForBundleId:(id)a0 genreId:(id)a1 subGenreIds:(id)a2;
- (void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)a0;
- (id)medianSecondsBetweenAppActionsForActionKey:(id)a0;
- (void)addInstallForBundleInfoMap:(id)a0;
- (void)addAverageSecondsBetweenLaunchesForBundleId:(id)a0 average:(id)a1;
- (id)allActionKeys;
- (void)handleAppUninstallWithUninstalledAppSet:(id)a0;
- (id)genreIdForBundleId:(id)a0;
- (id)genreIdsForBundleId:(id)a0;
- (void)clearAppInstallInfo;
- (id)lastAppActionLaunch;
- (id)lastLaunchDateForBundleId:(id)a0;
- (id)lastAppActionLaunchDateForActionKey:(id)a0;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches;
- (void)updateApp2VecClusterForBundleId:(id)a0 app2VecCluster:(id)a1;
- (id)lastAppLaunch;
- (void)removeBundleIds:(id)a0;
- (void)removeActionDataForBundleId:(id)a0;
- (void)addExtensionLaunchForBundleId:(id)a0 date:(id)a1;
- (id)app2VecClusterForBundleId:(id)a0;
- (void)removeAppInfoForBundleId:(id)a0;
- (id)initWithInMemoryStore;
- (void).cxx_destruct;
- (id)allApps;
- (void)removeUninstalledApps;
- (id)allAppsWithInstallDate;
- (void)addAverageSecondsBetweenAppActionsForActionKey:(id)a0 average:(id)a1;
- (id)subGenreIdsForBundleId:(id)a0;
- (id)secondMostRecentAppLaunch;
- (id)stopInstallDeltaRecording;
- (id)lastUnlockDate;
- (void)addSpotlightLaunchForBundleId:(id)a0 date:(id)a1;
- (void)updateGenreIdsForAllApps;
- (void)startInstallDeltaRecording;
- (id)medianSecondsBetweenLaunchesForBundleId:(id)a0;
- (void)addMedianSecondsBetweenLaunchesForBundleId:(id)a0 median:(id)a1;
- (void)addLaunchForAppAction:(id)a0 date:(id)a1;
- (void)dealloc;
- (void)removeAppInfoForBundleIds:(id)a0;
- (id)averageSecondsBetweenLaunchesForBundleId:(id)a0;
- (long long)launchedAppCount;
- (void)addScreenLockAtDate:(id)a0;
- (void)addLaunchForBundleId:(id)a0 date:(id)a1;
- (void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)a0;
- (void)addInstallForBundleId:(id)a0 date:(id)a1;
- (void)updateApp2VecClustersForAllApps;
- (id)lastAppLaunchDate;
- (void)computeAverageAndMedianSecondsBetweenAppActions;
- (id)_appInfoNoLockForBundleId:(id)a0;
- (id)initWithDataStore:(id)a0;

@end
