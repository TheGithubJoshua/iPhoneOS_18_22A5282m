@class UIImpactFeedbackGenerator, ISTouchLivePhotoPlaybackFilter, ISLivePhotoPlayer, NSString, UILabel, UIGestureRecognizer, CAMeshTransform;
@protocol ISLivePhotoUIViewDelegate;

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIGestureRecognizerDelegate, ISChangeObserver> {
    UIImpactFeedbackGenerator *_feedbackGenerator;
    struct { BOOL canBeginInteractivePlayback; BOOL extraMinimumTouchDuration; } _delegateRespondsTo;
}

@property (retain, nonatomic, setter=_setPlaybackFilter:) ISTouchLivePhotoPlaybackFilter *_playbackFilter;
@property (nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality;
@property (readonly, nonatomic) UILabel *_overlayLabel;
@property (nonatomic, setter=_setOverlayDismissalID:) long long _overlayDismissalID;
@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer;
@property (copy, nonatomic) CAMeshTransform *vitalityTransform;
@property (weak, nonatomic) id<ISLivePhotoUIViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)livePhotoPlayer;
- (void)audioSessionDidChange;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_playerDidChangePlaybackStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_ISLivePhotoUIViewCommonInitialization;
- (void)contentDidChange;
- (void)_showOverlayLabel;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)_updatePlaybackFilterInput;
- (void)_dismissOverlayLabel:(long long)a0;
- (void)_handlePlaybackRecognizer:(id)a0;
- (void)setPlayer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)_updateVideoTransform;
- (void)_updateGestureRecognizerParameters;
- (void)_updatePlaybackFilter;
- (void)_playerDidChangeHinting;
- (void)setPlaybackFilterTouchActive:(BOOL)a0;

@end
