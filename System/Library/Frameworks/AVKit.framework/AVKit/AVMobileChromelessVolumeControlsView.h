@class UISelectionFeedbackGenerator, NSString, AVMobileVolumeChromelessButtonControl, UIViewPropertyAnimator, UIView, AVMobileChromelessSlider;
@protocol AVMobileChromelessVolumeControlsViewDelegate;

@interface AVMobileChromelessVolumeControlsView : AVView <AVMobileVolumeChromlesButtonControlDelegate, AVMobileChromelessSliderDelegate, AVShadowCasting> {
    UISelectionFeedbackGenerator *_feedbackGenerator;
    AVMobileVolumeChromelessButtonControl *_volumeButton;
    UIView *_volumeControls;
    AVMobileChromelessSlider *_volumeSlider;
    UIViewPropertyAnimator *_emphasizedAnimator;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sliderShadowPathRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _buttonShadowPathRect;
    BOOL _drawsShadow;
}

@property (readonly, nonatomic) BOOL isTracking;
@property (weak) id<AVMobileChromelessVolumeControlsViewDelegate> delegate;
@property (nonatomic) BOOL prefersVolumeSliderIncluded;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;
@property (nonatomic, getter=isMuted) BOOL mute;
@property (nonatomic) double volume;
@property (nonatomic, getter=isTrackingEnabled) BOOL allowsVolumeAdjustment;
@property (nonatomic) BOOL volumeSliderHidesWithAlphaChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL drawsShadow;

- (void)_volumeSliderValueDidChange;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_handleVolumeControlButtonTap;
- (BOOL)volumeControlButtonCanBeginPanning:(id)a0;
- (void)volumeControlButton:(id)a0 didContinuePanningWithXDelta:(double)a1;
- (void)_updateVolumeButtonIconState;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)volumeControlButtonDidEndPanning:(id)a0;
- (void)_updateVolumeSliderEmphasizedScale;
- (void)sliderDidEndTracking:(id)a0;
- (void)volumeControlButtonDidBeginPanning:(id)a0;
- (void)layoutSubviews;
- (void)_layoutVolumeControlView;
- (void)sliderDidBeginTracking:(id)a0;

@end
