@class NSString, ICConnectionConfiguration, ICCloudClient;

@interface HSCloudClient : NSObject <HSCloudAvailability> {
    BOOL _active;
    ICConnectionConfiguration *_configuration;
    unsigned long long _daemonConfiguration;
    long long _preferredVideoQuality;
    ICCloudClient *_icCloudClient;
}

@property (copy, nonatomic) id /* block */ updateInProgressChangedHandler;
@property (copy, nonatomic) id /* block */ updateSagaInProgressChangedHandler;
@property (copy, nonatomic) id /* block */ updateJaliscoInProgressChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)canShowCloudMusic;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)isCellularDataRestricted;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (id)init;
- (void)loadScreenshotInfoForPurchaseHistoryID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)addStoreItemWithAdamID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForContainerSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateJaliscoLibraryWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_serverJaliscoUpdateInProgressDidChange;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)a0;
- (void)setPlaylistProperties:(id)a0 trackList:(id)a1 forPlaylistPersistentID:(long long)a2 completionHandler:(id /* block */)a3;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)importSubscriptionScreenshotForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)isAuthenticatedWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0;
- (void)updateJaliscoLibraryWithCompletionHandler:(id /* block */)a0;
- (void)setDaemonConfiguration:(unsigned long long)a0;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)a0;
- (void)removeJaliscoLibraryWithCompletionHander:(id /* block */)a0;
- (void)importArtistHeroImageForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)a0;
- (void)loadScreenshotInfoForSubscriptionPersistentID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)sdk_addStoreItemWithOpaqueID:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)canShowCloudVideo;
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)a0;
- (void)_serverSagaUpdateInProgressDidChange;
- (void)removeItemsWithSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)a0;
- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)a0;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)a0;
- (void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(id /* block */)a0;
- (void)setItemProperties:(id)a0 forSagaID:(unsigned long long)a1;
- (void)loadIsSagaUpdateInProgressWithCompletionHandler:(id /* block */)a0;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)setAlbumProperties:(id)a0 forAlbumPersistentID:(long long)a1 completionHandler:(id /* block */)a2;
- (void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(id /* block */)a0;
- (void)resignActive;
- (void)loadJaliscoUpdateProgressWithCompletionHandler:(id /* block */)a0;
- (void)loadArtworkInfoForSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForSubscriptionItemPersistentID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)a0 ignoreMinRefreshInterval:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)loadArtworkInfoForContainerSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)uploadCloudPlaylistProperties;
- (void)publishPlaylistWithSagaID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)removePlaylistsWithSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)importScreenshotForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)importItemArtworkForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadGeniusItemsForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadScreenshotInfoForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForPurchaseHistoryID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)addItemWithSagaID:(long long)a0 toPlaylistWithPersistentID:(long long)a1 completionHandler:(id /* block */)a2;
- (void)uploadCloudItemProperties;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void)setItemProperties:(id)a0 forPurchaseHistoryID:(unsigned long long)a1;
- (void)isAuthenticatedWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)sdk_createPlaylistWithPersistentID:(long long)a0 properties:(id)a1 tracklist:(id)a2 completionHandler:(id /* block */)a3;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)a0;
- (void)uploadItemProperties;
- (void)loadScreenshotInfoForSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetConfiguration:(id)a0;
- (void)importContainerArtworkForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)isMediaKindDisabledForJaliscoLibrary:(long long)a0;
- (void)loadSagaUpdateProgressWithCompletionHandler:(id /* block */)a0;
- (void)sdk_addStoreItemWithOpaqueID:(id)a0 toPlaylistWithPersistentID:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateArtistHeroImages;
- (void)dealloc;
- (void)loadBooksForStoreIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)authenticateAndStartInitialImport:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setPreferredVideoQuality:(long long)a0;
- (void)createPlaylistWithPersistentID:(long long)a0 properties:(id)a1 trackList:(id)a2 completionHandler:(id /* block */)a3;
- (void)hideItemsWithPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)addStoreItemWithAdamID:(long long)a0 toPlaylistWithPersistentID:(long long)a1 completionHandler:(id /* block */)a2;
- (void)addStorePlaylistWithGlobalID:(id)a0 completionHandler:(id /* block */)a1;
- (void)becomeActive;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)a0;
- (void)updateSagaLibraryWithCompletionHandler:(id /* block */)a0;
- (void)deauthenticateWithCompletionHandler:(id /* block */)a0;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)a0;
- (void)loadArtworkInfoForSubscriptionContainerPersistentID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)addGeniusPlaylistWithPersistentID:(long long)a0 name:(id)a1 seedItemSagaIDs:(id)a2 itemSagaIDs:(id)a3 completionHandler:(id /* block */)a4;
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)a0;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSagaLibraryWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (id)_ICCloudItemIDListFromHSCloudItemIDList:(id)a0;
- (id)_ICConnectionConfigurationFromHSConnectionConfiguration:(id)a0;

@end
