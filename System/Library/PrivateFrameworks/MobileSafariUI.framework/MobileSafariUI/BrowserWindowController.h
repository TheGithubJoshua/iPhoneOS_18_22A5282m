@class NSString, CloudTabStore, NSArray, WBTabGroupManager, _SFPerSitePreferencesVendor, _SFBrowserSavedState, PinnedTabsManager, NSMapTable, _SFPageZoomPreferenceManager;

@interface BrowserWindowController : NSObject <CloudTabStoreDelegate, _SFNavigationIntentHandling> {
    id /* block */ _browserControllerUIDelegateProvider;
    NSMapTable *_UIDelegatesByBrowserController;
    BOOL _consideredMergingCloudTabsForDeviceRestoration;
    _SFBrowserSavedState *_savedState;
    id /* block */ _automationWindowInitializedCompletionHandler;
    _SFPageZoomPreferenceManager *_privateBrowsingPageZoomManager;
    WBTabGroupManager *_tabGroupManager;
}

@property (nonatomic) BOOL cloudTabsEnabled;
@property (readonly, copy, nonatomic) NSArray *browserControllers;
@property (readonly, nonatomic) PinnedTabsManager *pinnedTabsManager;
@property (readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor;
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *privateBrowsingPageZoomManager;
@property (readonly, nonatomic) CloudTabStore *cloudTabStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_printWindowToSceneMapping;

- (void)saveCloudTabs;
- (void)mergeAllWindowsIntoWindow:(id)a0;
- (id)tabsInPrivateBrowsing:(BOOL)a0;
- (id)_allNormalLocalTabDocuments;
- (id)browserControllerWithUUID:(id)a0;
- (id)windowForSceneID:(id)a0 options:(id)a1;
- (id)_mergeAndSaveWindowStates:(id)a0 intoWindowState:(id)a1;
- (void)tearDownAutomationWindow;
- (void)cloudTabStore:(id)a0 didReceiveTabCloseRequest:(id)a1;
- (void)_restoreWindowsWithState:(id)a0 shouldMergeAllWindowsIfNeeded:(BOOL)a1;
- (void)openNewWindowWithPrivateBrowsingEnabled:(BOOL)a0 fromWindow:(id)a1;
- (void)_createCloudTabsStore;
- (id)tabsOlderThan:(id)a0 inPrivateBrowsing:(BOOL)a1;
- (void)_mergeTabsFromCloudTabsForDeviceRestoration:(id)a0;
- (void)removeWindowsNotMatchingSceneIDs:(id)a0 supportsMultipleScenes:(BOOL)a1;
- (void)_destroyCloudTabsStore;
- (id)initWithBrowserSavedState:(id)a0;
- (void)_saveBrowserStateWithQuickUpdate:(BOOL)a0;
- (void)updateCloudTabsForEnteringForeground;
- (long long)modeForNewWindowUserActivity:(id)a0;
- (void)_mergeTabsFromCloudTabsForDeviceRestorationIfNeededAfterCloudTabsFinishedSyncing:(BOOL)a0;
- (void)updateCloudTabUpdatesEnabled;
- (unsigned long long)numberOfTabsInPrivateBrowsing:(BOOL)a0;
- (id)initWithBrowserSavedState:(id)a0 perSitePreferencesVendor:(id)a1 browserControllerUIDelegateProvider:(id /* block */)a2;
- (void)cloudTabStore:(id)a0 didUpdateDevicesFromCloudKitWithError:(id)a1;
- (id)uiDelegateForBrowserController:(id)a0;
- (void)handleNavigationIntent:(id)a0 completion:(id /* block */)a1;
- (id)_printWindowToSceneMapping;
- (void)_windowDidClose:(id)a0;
- (void)setUpAutomationWindowWithCompletionHandler:(id /* block */)a0;
- (void)restoreEducationDeviceTabs;
- (void).cxx_destruct;
- (id)_newAutomationWindowWithSceneID:(id)a0;
- (id)tabDocumentWithUUID:(id)a0;
- (void)cloudTabStore:(id)a0 cloudTabsEnabledDidChange:(BOOL)a1;
- (void)restoreEducationDeviceCloudTabs:(id)a0 animated:(BOOL)a1;
- (id)initWithTabGroupManager:(id)a0 pinnedTabsManager:(id)a1 perSitePreferencesVendor:(id)a2 shouldMergeAllWindowsIfNeeded:(BOOL)a3 browserControllerUIDelegateProvider:(id /* block */)a4;
- (void)saveCloudTabsUsingCloudTabStore:(id)a0;
- (void)dispatchNavigationIntent:(id)a0;
- (void)saveBrowserState;
- (void)updateCloudTabsForEnteringBackground;
- (id)initWithTabGroupManager:(id)a0 pinnedTabsManager:(id)a1;
- (void)dealloc;
- (id)_mergeWindowStates:(id)a0 intoWindowState:(id)a1;
- (void)_restoreWindowsFromBrowserSavedState:(id)a0;
- (void)_cloudTabFeatureAvailabilityDidChange:(id)a0;
- (id)oldestTabsWithLimit:(unsigned long long)a0 inPrivateBrowsing:(BOOL)a1;
- (id)_sceneIDToLocalGroupTabs;
- (void)cloudTabStoreDidGetCachedDevicesFromCloudKit:(id)a0;
- (id)_browserWindowsToPersist;

@end
