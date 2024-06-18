@class ICAttachment;

@interface ICAudioPlaybackScrubberView : UISlider

@property (nonatomic) BOOL wasPlaying;
@property (retain, nonatomic) ICAttachment *audioAttachment;

- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)audioPlaybackTimeChangedNotification:(id)a0;
- (void)updateTime:(double)a0 duration:(double)a1;

@end
