@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject {
    BOOL _isObserving;
    NSUserDefaults *_mediaPlaybackCoreDefaults;
    NSUserDefaults *_mobileIPodDefaults;
    NSUserDefaults *_musicDefaults;
    NSUserDefaults *_nanoMusicSyncDefaults;
    NSUserDefaults *_podcastsDefaults;
}

@property (class, readonly) NMSMediaSettingsSynchronizer *sharedSynchronizer;

- (void)_syncPodcastDefaultsIfNecessary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_reconcileGreenTeaSettingsIfNecessary;
- (void)_createDefaultGreenTeaSettingsIfNecessary;
- (void)beginObservingUpdates;
- (long long)_preferredGreenTeaMusicStreamingResolutionPreference;
- (void).cxx_destruct;
- (void)_migrateMusicDefaultsIfNecessary;
- (void)endObservingUpdates;
- (void)dealloc;
- (id)_podcastsUserDefaults;
- (id)_podcastsAppGroupPath;

@end
