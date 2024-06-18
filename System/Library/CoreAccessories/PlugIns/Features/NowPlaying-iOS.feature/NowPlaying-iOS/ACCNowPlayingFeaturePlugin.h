@class NSData, AccessoryNowPlayingClient, NSString, NSMutableDictionary, ACCMemUsageStat, NSObject, ACCSettingsState, MPMusicPlayerController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACCNowPlayingFeaturePlugin : NSObject <AccessoryNowPlayingClientProtocol, ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) AccessoryNowPlayingClient *nowPlayingClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *nowPlayingInfoDebounceTimer;
@property (nonatomic) unsigned int nowPlayingInfoDebounceTimerRunningMask;
@property (readonly, nonatomic) ACCSettingsState *nowPlayingInfoDebounceTimerValue;
@property (retain, nonatomic) NSMutableDictionary *cachedMediaItemAttributes;
@property (retain, nonatomic) NSData *cachedMediaItemArtworkHash;
@property (retain, nonatomic) NSMutableDictionary *cachedPlaybackAttributes;
@property (retain, nonatomic) NSMutableDictionary *pbqUpdateAccessoryList;
@property (retain, nonatomic) ACCSettingsState *maxPlaybackQueueInfoCount;
@property (retain, nonatomic) ACCSettingsState *playbackQueueInfoTimeoutMs;
@property (retain, nonatomic) ACCSettingsState *playbackQueueInfoSendPartialOnTimeout;
@property (retain, nonatomic) ACCSettingsState *measureMemoryUsage;
@property (retain, nonatomic) ACCMemUsageStat *memUse;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nowPlayingInfoPBQueueListQ;
@property (retain, nonatomic) MPMusicPlayerController *mpMusicPlayerControllerHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mpMusicPlayerControllerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

+ (id)getItemDictionaryForContentItem:(id)a0 infoMask:(unsigned int)a1;
+ (BOOL)isMusicAppVisible;

- (void)initPlugin;
- (BOOL)setPlaybackQueueIndex:(id)a0;
- (void)_nowPlayingArtworkDidChange;
- (void)startPlugin;
- (void)_nowPlayingInfoDebounceTimerStop:(int)a0;
- (BOOL)setPlaybackElapsedTime:(id)a0;
- (id)currentMediaItemArtwork;
- (BOOL)_nowPlayingAppIsIPodRadio;
- (void)nowPlayingStateDidChange:(id)a0;
- (void)nowPlayingArtworkDidChange:(id)a0;
- (void)stopPlugin;
- (id)currentPlaybackAttributes;
- (void)nowPlayingPlaybackQueueDidChange:(id)a0;
- (BOOL)_nowPlayingAppIsIPodApp;
- (BOOL)_nowPlayingIsStreaming;
- (void)_nowPlayingPlaybackQueueDidChange;
- (id)currentMediaItemArtworkOriginal;
- (void).cxx_destruct;
- (void)_nowPlayingInfoDebounceTimerKick:(int)a0;
- (void)nowPlayingAppDidChange:(id)a0;
- (void)_generatePlaybackQueueItemsWithPropertyList:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2 continueQuery:(id /* block */)a3;
- (void)_nowPlayingInfoDidChange;
- (void)cancelRequestPlaybackQueueListInfo:(id)a0 requestID:(id)a1;
- (void)_nowPlayingAppDidChange;
- (void)nowPlayingInfoDidChange:(id)a0;
- (void)requestPlaybackQueueListInfo:(id)a0 requestID:(id)a1 startIndex:(unsigned int)a2 upToCount:(unsigned int)a3 infoMask:(unsigned int)a4;
- (unsigned int)currentPlaybackStateMR;
- (id)currentPlaybackAppBundleID;
- (void)_nowPlayingStateDidChange;
- (id)currentMediaItemAttributes;
- (id)currentPlaybackAppName;

@end
