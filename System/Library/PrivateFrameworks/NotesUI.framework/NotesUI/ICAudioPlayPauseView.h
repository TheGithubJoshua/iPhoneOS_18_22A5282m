@class AVAsset, ICNoteEditorIconImageView, CALayer, ICAttachment;

@interface ICAudioPlayPauseView : UIView

@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) ICNoteEditorIconImageView *playView;
@property (retain, nonatomic) ICNoteEditorIconImageView *pauseView;
@property (readonly, nonatomic) AVAsset *audio;
@property (retain, nonatomic) ICAttachment *audioAttachment;
@property (readonly, nonatomic) BOOL isPlaying;

- (id)initWithCoder:(id)a0;
- (void)play;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)sharedInit;
- (void)tintColorDidChange;
- (void)tapGesture:(id)a0;
- (void)togglePlayPause;
- (void)audioWillChange;
- (void)audioPlaybackPauseNotification:(id)a0;
- (id)addSubImageViewForImage:(id)a0;
- (void)audioDidChange;
- (void)audioPlaybackPlayNotification:(id)a0;
- (void)audioPlaybackStopNotification:(id)a0;
- (void)audioPlaybackTimeChangedNotification:(id)a0;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)didPlayToEndNotification:(id)a0;
- (id)foregroundStrokeColor;
- (void)setImageNamed:(id)a0 onLayer:(id)a1 adjustLayerSize:(BOOL)a2;
- (void)showPaused;
- (void)showPlaying;
- (void)showPressed:(BOOL)a0;
- (void)showStopped;
- (void)updateTime:(double)a0 duration:(double)a1;

@end
