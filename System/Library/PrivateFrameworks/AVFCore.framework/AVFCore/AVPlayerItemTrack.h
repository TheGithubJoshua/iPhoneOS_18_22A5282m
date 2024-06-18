@class NSArray, AVAssetTrack, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) float currentVideoFrameRate;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;

- (int)trackID;
- (id)loudnessInfo;
- (void)_transferDisableColorMatchingToFig;
- (id)_playerItem;
- (BOOL)willTrimShortDurationAudioSamples;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)_transferActiveHapticChannelIndexToFig;
- (id)effectiveLoudnessInfo;
- (float)hapticVolume;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (id)_weakReferenceToPlayerItem;
- (unsigned long long)hash;
- (id)fallbackTrack;
- (BOOL)disableColorMatching;
- (int)effectiveEQPreset;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (void)setDisableColorMatching:(BOOL)a0;
- (void)removeOutput:(id)a0;
- (id)videoEnhancementFilterOptions;
- (long long)activeHapticChannelIndex;
- (void)_transferHapticVolumeToFig;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)dealloc;
- (void)_transferLoudnessInfoToFig;
- (void)setHapticVolume:(float)a0;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (void)setLoudnessInfo:(id)a0;
- (void)_transferEnabledToFig;
- (void)addOutput:(id)a0;

@end
