@class NSString, NSSet, NSMutableDictionary, SBReverseCountedSemaphore, SBApplicationInfo, SBApplicationRestrictionController, RBSProcessMonitor, SBSplashBoardController, FBSApplicationLibrary, SBApplicationLibraryObserver;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, XBApplicationProviding, SBApplicationLifecycleObserver> {
    NSMutableDictionary *_applicationsByBundleIdentifer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBSApplicationLibrary *_appLibrary;
    SBApplicationInfo *_systemAppInfo;
    SBSplashBoardController *_splashBoardController;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
    NSSet *_preventLaunchBundleIDs;
    RBSProcessMonitor *_processMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(BOOL)a0;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)a0;
+ (void)_setClearAllLegacySnapshotsWhenLoaded:(BOOL)a0;
+ (id)sharedInstanceIfExists;

- (id)allBundleIdentifiers;
- (id)init;
- (id)allSplashBoardApplications;
- (id)mapsApplication;
- (void)requestUninstallApplication:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)_appLibraryObserver;
- (id)_allApplicationsFilteredBySystem:(BOOL)a0;
- (id)musicApplication;
- (void)_updateVisibilityOverrides;
- (Class)_appClassForInfo:(id)a0;
- (id)clockApplication;
- (void)applicationRestrictionsMayHaveChanged;
- (void)applicationsDemoted:(id)a0;
- (id)_appLibrary;
- (id)_loadApplicationFromApplicationInfo:(id)a0;
- (void)waitForUninstallsToComplete:(double)a0;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (id)faceTimeApp;
- (void)_memoryWarningReceived;
- (id)mobilePhone;
- (id)inCallServiceApp;
- (void)requestUninstallApplicationWithBundleIdentifier:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)_lock_applicationWithBundleIdentifier:(id)a0;
- (id)runningApplications;
- (void)applicationVisibilityMayHaveChanged;
- (id)dataActivationApplication;
- (void)_updateVisibilityOverridesInBackground;
- (id)splashBoardSystemApplications;
- (void).cxx_destruct;
- (void)applicationsUpdated:(id)a0;
- (id)allApplications;
- (void)applicationsReplaced:(id)a0;
- (id)notesApplication;
- (id)applicationWithBundleIdentifier:(id)a0;
- (id)setupApplication;
- (id)_splashBoardController;
- (void)applicationsRemoved:(id)a0;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)a0 forInstall:(BOOL)a1 withReason:(id)a2;
- (id)cameraApplication;
- (BOOL)_appLayoutContainsOnlyResizableApps:(id)a0;
- (void)dealloc;
- (id)loginApplication;
- (id)allInstalledApplications;
- (void)applicationsAdded:(id)a0;
- (void)_preLoadApplications;
- (id)recentlyUsedBundleIDs;
- (void)_loadApplications:(id)a0 remove:(id)a1;
- (void)_sendInstalledAppsDidChangeNotification:(id)a0 removed:(id)a1 replaced:(id)a2 updated:(id)a3;
- (id)applicationWithPid:(int)a0;
- (id)_appInfosToBundleIDs:(id)a0;
- (id)applicationForDisplayItem:(id)a0;
- (id)webApplication;
- (void)uninstallApplication:(id)a0;
- (id)testFlightApplication;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (id)restrictionController;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (id)iPodOutApplication;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;

@end
