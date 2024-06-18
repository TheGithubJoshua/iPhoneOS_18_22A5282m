@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer;

@interface LPStreamingVideoView : LPVideoView {
    AVQueuePlayer *_player;
    AVPlayerLooper *_looper;
    AVPlayerLayer *_playerLayer;
    id /* block */ _readyForDisplayCallback;
    BOOL _hasCreatedVideoPlayerView;
    BOOL _isWaitingToRetryAfterFailingToPlay;
    unsigned int _playbackRetryCountWithoutSuccess;
    BOOL _desiredPlayingState;
    float _desiredVolume;
}

- (double)volume;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setVolume:(double)a0;
- (void)setMuted:(BOOL)a0;
- (void)setPlaying:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isMuted;
- (void)dealloc;
- (void)beginLoadingMediaForPreroll;
- (id)createFullScreenVideoViewController;
- (void)createPlayerIfNeeded;
- (void)createPlayerItemAdjustedForLoopingWithAsset:(id)a0 completionHandler:(id /* block */)a1;
- (id)createVideoPlayerView;
- (void)destroyPlayer;
- (void)didFailToPlay;
- (void)fullScreenVideoDidPresent;
- (void)fullScreenVideoWillDismiss;
- (id)initWithHost:(id)a0 video:(id)a1 style:(id)a2 posterFrame:(id)a3 posterFrameStyle:(id)a4 configuration:(id)a5;
- (void)layoutComponentView;
- (BOOL)releaseDecodingResourcesIfInactive;
- (void)resetToPlaceholderView;
- (BOOL)shouldAutoPlay;
- (BOOL)shouldShowMuteButton;
- (BOOL)usesCustomFullScreenImplementation;
- (BOOL)usesSharedAudioSession;

@end
