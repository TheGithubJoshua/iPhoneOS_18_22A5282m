@class UIView, MRUTimeControls, CADisplayLink, NSString, MRUSlider, CAGradientLayer, AVTimeFormatter, UILabel, MRUVisualStylingProvider;

@interface MRUNowPlayingTimeControlsView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) MRUSlider *slider;
@property (retain, nonatomic) UILabel *elapsedTimeLabel;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (retain, nonatomic) UILabel *liveLabel;
@property (retain, nonatomic) UIView *liveBackground;
@property (retain, nonatomic) CAGradientLayer *liveBackgroundMask;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) AVTimeFormatter *elapsedTimeFormatter;
@property (retain, nonatomic) AVTimeFormatter *remainingTimeFormatter;
@property (nonatomic) BOOL debugPreviousDisplayLinkPaused;
@property (retain, nonatomic) MRUTimeControls *timeControls;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) BOOL leftAlignLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)sliderTounchUp:(id)a0;
- (double)accessibilityElapsedDuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDisplayLinkPaused;
- (void)sliderTouchCancel:(id)a0;
- (void)sliderTouchDown:(id)a0;
- (void)updateElapsedTime;
- (void)updateContentSizeCategory;
- (long long)labelStyle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sliderValueChanged:(id)a0;
- (void)setTimeControls:(id)a0 forPresentationInterval:(id)a1;
- (void).cxx_destruct;
- (void)updateDisplayLink;
- (void)updateElapsedTimeWithElapsedTime:(double)a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateBackgroundMask;
- (void)layoutSubviews;
- (void)updateElapsedTimeForDate:(id)a0;
- (void)updateElapsedTimeOnDisplayLinkTick:(id)a0;
- (double)accessibilityTotalDuration;

@end
