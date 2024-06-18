@protocol AVHomeIPCameraActionButtonHandling;

@interface AVHomeIPCameraPlayerController : AVPlayerController {
    double _volume;
}

@property (weak, nonatomic) id<AVHomeIPCameraActionButtonHandling> delegate;
@property (nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (nonatomic, getter=isMuted) BOOL muted;

- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (BOOL)hasLiveStreamingContent;
- (double)volume;
- (void)setVolume:(double)a0;
- (BOOL)hasEnabledVideo;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (BOOL)isPlaying;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)isPictureInPicturePossible;
- (long long)timeControlStatus;
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)hasContent;

@end
