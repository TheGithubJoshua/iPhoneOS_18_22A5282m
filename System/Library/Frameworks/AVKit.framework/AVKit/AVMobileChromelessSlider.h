@class UIVisualEffect, NSArray, UIVisualEffectView, UIView, NSMutableArray;
@protocol AVMobileChromelessSliderDelegate;

@interface AVMobileChromelessSlider : UIControl {
    UIView *_contentView;
    UIVisualEffectView *_filledBarView;
    UIVisualEffectView *_unfilledBarView;
    float _trackingStartNormalizedValue;
    float _trackingTouchStartNormalizedX;
    NSMutableArray *_sliderMarkViews;
    UIVisualEffect *_enabledFilledBarViewEffect;
    UIVisualEffect *_enabledUnfilledBarViewEffect;
    UIVisualEffect *_disabledFilledBarViewEffect;
    UIVisualEffect *_disabledUnfilledBarViewEffect;
}

@property (weak, nonatomic) id<AVMobileChromelessSliderDelegate> delegate;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) float totalValue;
@property (nonatomic) unsigned long long tintState;
@property (nonatomic) double barHeight;
@property (retain, nonatomic) NSArray *sliderMarks;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_updateAccessibilityValue;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_updateBarTintStateAlpha;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)accessibilityDecrement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSliderMark:(id)a0;

@end
