@class AVTurboModePlaybackControlsPlaceholderView, AVPlayerViewController, AVMobileChromeControlsView, NSValue, AVMobileChromeControlsStyleSheet, AVPlaybackControlsController, AVPlaybackControlsView;

@interface AVMobileChromeControlsViewController : AVMobileControlsViewController {
    AVPlayerViewController *_playerViewController;
    AVMobileChromeControlsView *_controlsView;
    AVPlaybackControlsController *_playbackControlsController;
    AVMobileChromeControlsStyleSheet *_styleSheet;
}

@property (readonly, nonatomic) AVPlaybackControlsController *playbackControlsController;
@property (readonly, nonatomic) AVPlaybackControlsView *playbackControlsView;
@property (readonly, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModeControlsView;
@property (nonatomic) BOOL prefersCompactFullScreenControls;
@property (retain, nonatomic) NSValue *embeddedInlineLayoutMargins;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transformForProminentPlayButton;

- (void)setVolumeController:(id)a0;
- (void)_updateStyleSheet;
- (void)loadView;
- (void)setControlItems:(id)a0;
- (id)initWithPlayerViewController:(id)a0;
- (id)volumeControlsLayoutItem;
- (void)setOptimizeForPerformance:(BOOL)a0;
- (BOOL)showsFullScreenControl;
- (id)displayModeControlsLayoutItem;
- (void)setIncludedControls:(unsigned long long)a0;
- (id)transportControlsLayoutItem;
- (void)toggleVisibility:(id)a0;
- (void)flashControlsWithDuration:(double)a0;
- (void)setRoutingConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)setTransportBarCustomMenuItems:(id)a0;
- (void)setShowsFullScreenControl:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
