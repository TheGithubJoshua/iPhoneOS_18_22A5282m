@class CKVideoPlayerReusePool, NSString, UIView, CKReusableVideoPlayer, CKMovieMediaObject;
@protocol CKVideoPlayerBalloonViewDelegate;

@interface CKVideoPlayerBalloonView : CKImageBalloonView <UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate, CKReusableVideoPlayerDelegate>

@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) CKReusableVideoPlayer *reusablePlayer;
@property (retain, nonatomic) CKVideoPlayerReusePool *playerPool;
@property (nonatomic, getter=isObservingSceneDisconnects) BOOL observingSceneDisconnects;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject;
@property (weak, nonatomic) id<CKVideoPlayerBalloonViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)playerViewController;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForDisplay;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)applicationDidEnterBackground:(id)a0;
- (id)playerItem;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)a0;
- (void)tapGestureRecognized:(id)a0;
- (void)cleanUpPlayerIfNeeded;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)doubleTapGestureRecognized:(id)a0;
- (BOOL)gestureIsOurGesture:(id)a0;
- (void)pausePlayback;
- (void)reusablePlayerDidStart;
- (void)reusablePlayerDidStop;
- (void)showPlayerViewController;
- (void)startPlayingInlineVideo;

@end
