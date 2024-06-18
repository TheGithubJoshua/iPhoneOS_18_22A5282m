@class UILabel, CAMAnimationDelegate, UIView;

@interface CAMTimerIndicatorView : UIView

@property (readonly, nonatomic) UIView *_dimmingView;
@property (readonly, nonatomic) UILabel *_countdownLabel;
@property (readonly, nonatomic) long long _startingTicks;
@property (readonly, nonatomic) long long _remainingTicks;
@property (nonatomic, setter=_setLabelOrientation:) long long _labelOrientation;
@property (readonly, nonatomic) CAMAnimationDelegate *_animationDelegate;
@property (nonatomic, getter=_isPerformingStyleAnimation, setter=_setPerformingStyleAnimation:) BOOL _performingStyleAnimation;
@property (nonatomic, setter=_setDeferredOrientation:) long long _deferredLabelOrientation;
@property (nonatomic) long long style;

- (void)decrement;
- (id)initWithCoder:(id)a0;
- (void)_commonCAMTimerIndicatorViewInitialization;
- (void)_addDimmingAnimationForTick:(long long)a0;
- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (void)_transitionDimmingViewFromStyle:(long long)a0;
- (void)resetWithNumberOfTicks:(long long)a0;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopCountdown;
- (id)_decrementAnimationForTick:(long long)a0;
- (id)_fontForStyle:(long long)a0;
- (void)_layoutCountdownLabelForSmallStyle;
- (void)_updateFromChangeToStyle:(long long)a0 animated:(BOOL)a1;
- (void)cam_rotateWithInterfaceOrientation:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_addDecrementAnimationForTick:(long long)a0;
- (id)_finalDimmingAnimation;
- (void)_layoutCountdownLabelForLargeStyle;
- (void)setFont:(id)a0;
- (id)_dimmingAnimationForTick:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_landscapeSwapBoundsCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleOrientationChange:(long long)a0;
- (void)layoutSubviews;
- (void)_updateCountdownLabelWithTicksRemaining;
- (void)startCountdownWithAnimationDelegate:(id)a0;
- (void)_layoutCountdownLabelForStyle:(long long)a0;

@end
