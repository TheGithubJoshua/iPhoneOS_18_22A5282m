@class UIColor, NSString, UIVisualEffectView, NSArray, UIView;

@interface MUBlurView : UIView {
    BOOL _isGaussianBlur;
    BOOL _isVariableBlur;
    double _blurRadius;
    long long _blurEffectStyle;
}

@property (nonatomic) BOOL shouldBlur;
@property (retain, nonatomic) UIVisualEffectView *materialBlurView;
@property (retain, nonatomic) UIView *variableBlurView;
@property (retain, nonatomic) UIView *nonBlurView;
@property (copy, nonatomic) UIColor *overlayColor;
@property (copy, nonatomic) NSString *blurGroupName;
@property (copy, nonatomic) UIColor *nonBlurredColor;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *backgroundEffects;

- (id)initWithBlurEffectStyle:(long long)a0;
- (id)blurView;
- (void)_setup;
- (void)_transparencyStatusDidChange;
- (id)blurViewIfExists;
- (void).cxx_destruct;
- (id)initWithGaussianBlurWithRadius:(double)a0;
- (id)initWithVariableBlurWithRadius:(double)a0;
- (void)_update;

@end
