@class UIImageView, UIActivityIndicatorView, UIView;

@interface CMKShutterButton : UIButton

@property (nonatomic, setter=_setSpec:) struct CMKShutterButtonSpec { double outerRingDiameter; double outerRingStrokeWidth; double stopSquareSideLength; double stopSquareCornerRadius; } spec;
@property (readonly, nonatomic) UIView *_outerView;
@property (readonly, nonatomic) UIImageView *_outerImageView;
@property (readonly, nonatomic) UIView *_innerView;
@property (readonly, nonatomic) UIActivityIndicatorView *_progressActivityIndicatorView;
@property (nonatomic) long long buttonMode;
@property (nonatomic, getter=isPulsing) BOOL pulsing;
@property (nonatomic, getter=isSpinning) BOOL spinning;
@property (nonatomic) BOOL showDisabled;

+ (id)shutterButton;
+ (id)smallShutterButton;
+ (id)shutterButtonWithDesiredSpec:(struct CMKShutterButtonSpec { double x0; double x1; double x2; double x3; })a0;
+ (id)tinyShutterButton;

- (id)initWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })_sizeForMode:(long long)a0;
- (void)_performModeSwitchAnimationFromMode:(long long)a0 toMode:(long long)a1 animated:(BOOL)a2;
- (void)_performHighlightAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSpinningAnimations;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_updateOuterAndInnerLayers;
- (void)layoutSubviews;
- (double)_cornerRadiusForMode:(long long)a0;
- (double)_borderWidthForMode:(long long)a0;
- (id)_colorForMode:(long long)a0;
- (void)_commonCMKShutterButtonInitialization;
- (double)_innerCircleDiameter;
- (BOOL)_isStopMode:(long long)a0;
- (id)_outerImageForMode:(long long)a0;
- (BOOL)_shouldUseImageViewForMode:(long long)a0;
- (BOOL)_shouldUseTimelapseOuterViewForMode:(long long)a0;
- (void)setButtonMode:(long long)a0 animated:(BOOL)a1;

@end
