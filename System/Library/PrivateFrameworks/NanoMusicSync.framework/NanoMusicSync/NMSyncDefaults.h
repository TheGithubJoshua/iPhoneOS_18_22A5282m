@class NSData, NSString, NSArray, NSDate, NMSNotificationDispatcher, NSDictionary, MPMediaPlaylist, NSObject, NPSDomainAccessor, NSNumber;
@protocol OS_dispatch_queue;

@interface NMSyncDefaults : NSObject <NMSNotificationDispatcherDelegate> {
    BOOL _needsSync;
    NSString *_pairingID;
    NSObject<OS_dispatch_queue> *_domainAccessorQueue;
    NPSDomainAccessor *_domainAccessor;
    NSDictionary *_notifiersDict;
    NMSNotificationDispatcher *_settingsNotifier;
    NMSNotificationDispatcher *_musicPinningSelectionsNotifier;
    NMSNotificationDispatcher *_recoSelectionsNotifier;
    NMSNotificationDispatcher *_libraryRecoNotifier;
    NMSNotificationDispatcher *_storeRecoNotifier;
    NMSNotificationDispatcher *_podcastsPinningSelectionsNotifier;
    NMSNotificationDispatcher *_podcastsSubscriptionMetadataNotifier;
    NMSNotificationDispatcher *_podcastsSizeInfoNotifier;
    NMSNotificationDispatcher *_audiobooksPinningSelectionsNotifier;
    NMSNotificationDispatcher *_audiobooksRecommendationsNotifier;
    NMSNotificationDispatcher *_syncStateNotifier;
    NMSNotificationDispatcher *_syncInfoNotifier;
    NMSNotificationDispatcher *_syncInfoRequestDateNotifier;
}

@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist;
@property (copy, nonatomic) NSNumber *assetSyncLimit;
@property (copy, nonatomic) NSArray *pinnedPlaylists;
@property (retain, nonatomic) NSNumber *workoutPlaylistID;
@property (copy, nonatomic) NSArray *pinnedAlbums;
@property (copy, nonatomic) NSArray *libraryRecommendationPlaylists;
@property (copy, nonatomic) NSArray *libraryRecommendationAlbums;
@property (copy, nonatomic) NSDictionary *musicRecommendationDict;
@property (copy, nonatomic) NSData *cachedRecommendationsData;
@property (copy, nonatomic) NSDate *catalogRecommendationsLastUpdateDate;
@property (copy, nonatomic) NSDate *libraryRecommendationExpirationDate;
@property (copy, nonatomic) NSNumber *minimumNumberOfRecentMusicModelObjects;
@property (copy, nonatomic) NSNumber *lastFullySentAssetSyncPlaylistPersistentID;
@property (copy, nonatomic) NSNumber *lastFullySentAssetSyncPlaylistVersion;
@property (copy, nonatomic) NSDictionary *gizmoPodcastDownloadOrders;
@property (copy, nonatomic) NSDictionary *gizmoPodcastEpisodeLimits;
@property (nonatomic) BOOL pinnedPodcastsAreUserSet;
@property (copy, nonatomic) NSArray *listenNowPodcastFeedURLs;
@property (nonatomic) BOOL savedEpisodesEnabled;
@property (copy, nonatomic) NSArray *pinnedPodcastFeedURLs;
@property (copy, nonatomic) NSArray *pinnedPodcastStationUUIDs;
@property (nonatomic) BOOL wantToReadEnabled;
@property (copy, nonatomic) NSArray *wantToReadAudiobooks;
@property (nonatomic) BOOL readingNowEnabled;
@property (copy, nonatomic) NSArray *readingNowAudiobooks;
@property (copy, nonatomic) NSArray *pinnedAudiobooks;
@property (copy, nonatomic) NSNumber *audiobookDownloadLimit;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) BOOL debugSyncInfoEnabled;
@property (readonly, nonatomic) NSDictionary *syncStateDict;
@property (copy, nonatomic) NSDictionary *clientPinningSettingsToken;
@property (copy, nonatomic) NSDictionary *musicSyncInfo;
@property (copy, nonatomic) NSDictionary *podcastsSyncInfo;
@property (copy, nonatomic) NSDictionary *audiobooksSyncInfo;
@property (nonatomic) unsigned long long assetSyncLimitType;
@property (nonatomic) unsigned long long assetSyncType;
@property (retain, nonatomic, setter=setAssetSyncPlaylistPersistentID:) NSNumber *assetSyncPlaylistPersistentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDefaults;

- (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)lastContentUsedDateForBundleID:(id)a0;
- (void)_preSeed2_setMusicRecommendationDict:(id)a0;
- (id)init;
- (BOOL)_continueUsingMusicRecommendationKey;
- (void)_setNeedsSynchronize;
- (id)lastUserLaunchDateForBundleID:(id)a0;
- (void)_notifyChangesForKey:(id)a0;
- (void)setLastSyncInfoRequestDate:(id)a0 forBundleIdentifier:(id)a1;
- (void)setLastUserPinningChangeDateForBundleID:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)installDateForBundleID:(id)a0;
- (id)_associatedObject;
- (BOOL)_watchHasCapability:(id)a0;
- (id)lastLocalPlaybackDateForBundleID:(id)a0;
- (void)_reloadPropertiesFromDefaults;
- (void)dispatcherDidReceiveNotificationFromOtherProcess:(id)a0;
- (void)_reloadPropertiesFromDefaultsOnMainThread;
- (id)_objectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)_writeDate:(id)a0 forKey:(id)a1 bundleID:(id)a2;
- (id)_lastSyncInfoRequestDateWithPrefix:(id)a0 forBundleIdentifier:(id)a1;
- (void)setLastUserLaunchDateForBundleID:(id)a0;
- (void)_migrateDataIfNecessary;
- (id)_companionSidePerDeviceDefaults;
- (id)_dateValueForKey:(id)a0 bundleID:(id)a1;
- (void)_writePropertiesToDefaults;
- (long long)dormancyIntervalInHoursForBundleID:(id)a0;
- (void)setPodcastSizeEstimationData:(id)a0;
- (void)setLastContentUsedDateForBundleID:(id)a0;
- (void).cxx_destruct;
- (id)_defaultPlaylistPersistentID;
- (void)_addCapability:(id)a0 forCapabilitiesKey:(id)a1;
- (void)_setBool:(BOOL)a0 forKey:(id)a1;
- (void)_setLastSyncInfoRequestDate:(id)a0 prefix:(id)a1 forBundleIdentifier:(id)a2;
- (unsigned long long)_spaceQuotaForNumberOfSongs:(unsigned long long)a0;
- (void)_addWatchCapability:(id)a0;
- (void)_removeObjectForKey:(id)a0;
- (void)endBatchUpdates;
- (id)lastUserPinningChangeDateForBundleID:(id)a0;
- (BOOL)_phoneHasCapability:(id)a0;
- (void)clearPodcastsDefaults;
- (void)setLastLocalPlaybackDateForBundleID:(id)a0;
- (void)dispatcherDidReceiveNotificationFromRemoteDevice:(id)a0;
- (void)_removeOldMusicRecommendationsInfoIfPossible;
- (void)_setLegacyObject:(id)a0 forKey:(id)a1 ifRemoteDeviceMissingCapability:(id)a2;
- (id)_playlistPersistentIDForPlaylistName:(id)a0;
- (id)podcastSizeEstimationData;
- (void)_clearAssetSyncPlaylistDependentDefaults;
- (BOOL)_deviceHasCapability:(id)a0 forCapabilitiesKey:(id)a1;
- (void)_setupNotifiers;
- (id)lastSyncInfoRequestDateForBundleIdentifier:(id)a0;
- (id)_defaultWithPrefix:(id)a0 forBundleIdentifier:(id)a1;
- (void)clearAppActivityStatusDefaultsForBundleID:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1 shouldSynchronizeToPairedDevice:(BOOL)a2;
- (void)beginBatchUpdates;
- (void)_perDeviceSettingsDidResetNotification:(id)a0;
- (void)removeObjectforKey:(id)a0;
- (void)_addPhoneCapability:(id)a0;
- (void)_resetDomainAccessor;
- (void)setInstallDateForBundleID:(id)a0;

@end