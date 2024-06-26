@class NSMapTable, NSDate;
@protocol PUDisplayAsset;

@interface PUAggregateDictionaryTracer : NSObject

@property (class, readonly, nonatomic) PUAggregateDictionaryTracer *sharedTracer;

@property (readonly, nonatomic) NSMapTable *_browsingViewModelTracers;
@property (weak, nonatomic, setter=_setLastViewedAsset:) id<PUDisplayAsset> _lastViewedAsset;
@property (retain, nonatomic, setter=_setLastPlayStartDate:) NSDate *_lastPlayStartDate;
@property (weak, nonatomic, setter=_setLastPlayedAsset:) id<PUDisplayAsset> _lastPlayedAsset;
@property (nonatomic, setter=_setAssetPlayCount:) long long _assetPlayCount;
@property (weak, nonatomic, setter=_setStreamedVideo:) id<PUDisplayAsset> _streamedVideo;
@property (nonatomic, setter=_setStreamedVideoDidStartPlaying:) BOOL _streamedVideoDidStartPlaying;
@property (nonatomic, setter=_setStreamedVideoBeginTime:) double _streamedVideoBeginTime;
@property (nonatomic, setter=_setStreamedVideoStallCount:) long long _streamedVideoStallCount;
@property (nonatomic) long long _oneUpPresentationOrigin;
@property (retain, nonatomic) id<PUDisplayAsset> _lastViewedAssetPerOrigin;

- (id)init;
- (void)userViewedPhotoInOneUpFor:(double)a0;
- (void)userBrowsedOneUpFor:(double)a0;
- (void)streamedVideoPlaybackBegan:(id)a0;
- (void)userViewedAssetInOneUp:(id)a0;
- (void)streamedVideoPlaybackStalled:(id)a0;
- (void)userDidEnterOneUpFromOrigin:(long long)a0;
- (void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)a0 inContext:(id)a1;
- (void).cxx_destruct;
- (void)streamedVideoPlaybackEnded;
- (void)userWillPlayAssetInOneUp:(id)a0;
- (void)userViewedHDRPhotoInOneUpFor:(double)a0;
- (void)userDidPlayAssetInOneUp:(id)a0;
- (void)streamedVideoPlaybackStartedActuallyPlaying:(id)a0;
- (void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)a0 inContext:(id)a1;
- (id)_browsingViewModelTracerForBrowsingViewModel:(id)a0 createIfNeeded:(BOOL)a1;
- (long long)_assetTypeForAsset:(id)a0;
- (void)invalidateContext:(id)a0;
- (void)vitalityPlayedForAssetInOneUp:(id)a0;
- (void)userStartedViewingCollection:(id)a0 withListViewItemSelectionTrackerKey:(struct __CFString { } *)a1;

@end
