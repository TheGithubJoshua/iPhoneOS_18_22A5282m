@class KNBuildRenderer, NSString, TSDTextureSet;

@interface KNWebVideoRenderer : KNBuildRenderer <KNAmbientBuildRenderer> {
    double _startTime;
    BOOL _needsVideoAtStartTime;
    BOOL _animationsPaused;
    double _playbackAtStartTimePauseTime;
    double _playbackAtStartTimePauseOffset;
    id _ambientBuildStartCallbackTarget;
    SEL _ambientBuildCallbackSelector;
    BOOL _needsToSendAmbientBuildStartCallback;
    BOOL _needsToSendBuildEndCallback;
    TSDTextureSet *_posterImageTextureSet;
}

@property (weak, nonatomic) KNBuildRenderer *buildInRenderer;
@property (readonly, nonatomic) BOOL hasAmbientBuildStarted;
@property (readonly, nonatomic) BOOL shouldActionBuildsStopAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAnimations;
- (void).cxx_destruct;
- (void)animate;
- (void)pauseAnimations;
- (void)p_didStartVideo;
- (void)resumeAnimationsIfPausedAtTime:(double)a0;
- (BOOL)addAnimationsAtLayerTime:(double)a0;
- (void)forceRemoveAnimations;
- (void)interruptAndReset;
- (void)p_cancelVideoAtStartTime;
- (void)p_didFailWithError:(id)a0;
- (void)p_didStopVideo;
- (void)p_scheduleVideoAtStartTime;
- (void)p_showVideoAtStartTime;
- (void)p_startVideo;
- (void)p_stopVideo;
- (void)p_unscheduleVideoAtStartTime;
- (void)pauseAnimationsAtTime:(double)a0;
- (void)registerForAmbientBuildStartCallback:(SEL)a0 target:(id)a1;
- (void)removeAnimationsAndFinish:(BOOL)a0;
- (void)resumeAnimationsIfPaused;
- (void)updateAnimationsForLayerTime:(double)a0;

@end
