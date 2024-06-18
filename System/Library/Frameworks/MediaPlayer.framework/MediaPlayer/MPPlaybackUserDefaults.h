@class MPPlaybackEQSetting, NSString, NSUserDefaults, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface MPPlaybackUserDefaults : NSObject {
    NSUserDefaults *_iPodUserDefaults;
    NSUserDefaults *_videoUserDefaults;
    NSUserDefaults *_mediaPlaybackCoreUserDefaults;
    NSUserDefaults *_airplayUserDefaults;
    NSObject<OS_dispatch_queue> *_accountsQueue;
    struct { int mobileiPodPrefsChanged; int mobileiPodPlaybackPrefsChangedAllowCellularData; int videoPrefsChanged; int airplayPrefsChanged; } _notifyTokens;
}

@property (class, readonly, nonatomic) MPPlaybackUserDefaults *standardUserDefaults;

@property (readonly, nonatomic) MPPlaybackEQSetting *musicEQSetting;
@property (nonatomic) long long musicRepeatType;
@property (nonatomic) long long musicShuffleType;
@property (nonatomic) BOOL soundCheckEnabled;
@property (nonatomic) float playbackRate;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (readonly, copy, nonatomic, getter=isDevicePrivateListeningEnabled) NSNumber *devicePrivateListeningEnabled;
@property (nonatomic) long long preferredMusicLowBandwidthResolution;
@property (nonatomic) long long preferredMusicHighBandwidthResolution;
@property (nonatomic) long long preferredMusicDownloadResolution;
@property (nonatomic) long long spatialAudioPreference;
@property (nonatomic) BOOL prefersSpatialAudio;
@property (nonatomic) BOOL prefersSpatialDownloads;
@property (nonatomic) BOOL showLosslessAudio;
@property (readonly, nonatomic) long long preferredVideoLowBandwidthResolution;
@property (readonly, nonatomic) long long preferredVideoHighBandwidthResolution;
@property (readonly, nonatomic) long long preferredVideoDownloadResolution;
@property (readonly, nonatomic) BOOL allowsHighQualityMusicStreamingOnCellular;
@property (readonly, nonatomic) float defaultVocalLevel;
@property (readonly, nonatomic) float minVocalLevel;
@property (readonly, nonatomic) BOOL allowScreenRecording;
@property (readonly, nonatomic) BOOL disableAssetCaching;
@property (readonly, nonatomic) NSNumber *progressiveDownloadAssetRatio;
@property (readonly, nonatomic) BOOL disableAudioAnalysis;
@property (readonly, nonatomic) BOOL disableAudioProcessing;
@property (readonly, nonatomic) BOOL disableMiniSINF;
@property (readonly, nonatomic) BOOL disablePeriodicStateRestore;
@property (readonly, nonatomic) BOOL disableQHO;
@property (readonly, nonatomic, getter=isProcessTapEnabled) BOOL enableProcessTap;
@property (readonly, nonatomic) unsigned long long audioAnalysisRefreshRate;
@property (readonly, nonatomic) BOOL forceMusicResolution;
@property (readonly, nonatomic) long long forcedMusicResolution;
@property (readonly, nonatomic) BOOL forceMusicStreaming;
@property (readonly, nonatomic) BOOL forceLibrarySupplementalContexts;
@property (readonly, nonatomic) BOOL includeContentItemDebugFields;
@property (readonly, nonatomic) long long maximumQueueHandOffSize;
@property (readonly, nonatomic) BOOL showDebugUI;
@property (readonly, nonatomic) BOOL speakerRouteEnabled;
@property (readonly, nonatomic) double assetURLExpirationDuration;
@property (readonly, nonatomic) double playbackAuthorizationTokenHalfLifeDuration;
@property (readonly, nonatomic) double activationDelay;
@property (readonly, nonatomic) double forwardBufferDuration;
@property (readonly, nonatomic) BOOL prerollEnabled;
@property (readonly, nonatomic) double crossfadeDuration;
@property (readonly, nonatomic) BOOL archiveSessionArtwork;
@property (readonly, nonatomic) BOOL shouldPurgeSideLoadedVocalAttenuationModels;
@property (readonly, nonatomic) BOOL shouldRecordVocalAttenuationStatistics;
@property (readonly, copy, nonatomic) NSString *vocalAttenuationStatisticsName;
@property (readonly, nonatomic) BOOL shouldBypassVocalAttenuationDenoising;
@property (readonly, nonatomic) BOOL shouldBypassVocalAttenuationSupportFlag;
@property (readonly, nonatomic) BOOL shouldUseRemoteVocalAttenuationModel;
@property (readonly, nonatomic) BOOL shouldUseSideLoadedVocalAttenuationModel;
@property (readonly, nonatomic) float audioTapTimeOutRatioForFailureDetection;
@property (readonly, nonatomic) double vocalAttenuationGracePeriodAfterPause;
@property (readonly, nonatomic) BOOL vocalAttenuationLogInputAndOuputRMSValues;
@property (readonly, copy, nonatomic) NSNumber *forcedIntentDestination;
@property (readonly, copy, nonatomic) NSNumber *delayQueueLoadDuration;
@property (readonly, copy, nonatomic) NSNumber *delayAssetLoadDuration;
@property (readonly, nonatomic) BOOL forceDisableUpNext;
@property (readonly, nonatomic) BOOL ignoreDisableUpNext;

- (void)_accountStoreChangedNotification:(id)a0;
- (void)setPlaybackAuthorizationTokenHalfLifeDuration:(double)a0;
- (id)_init;
- (BOOL)autoPlayEnabledForUserIdentity:(id)a0;
- (void)_loadAccountProperties;
- (void)resetAllInternalSettings;
- (void).cxx_destruct;
- (void)_migrateUserDefaults;
- (void)dealloc;
- (void)setAutoPlayEnabled:(BOOL)a0 forUserIdentity:(id)a1;

@end