@class UIColor, _UIBackdropView, CAFilter, UIImage, NSMutableSet, CAShapeLayer, UIActivityIndicatorView;

@interface PKContinuousButton : UIButton {
    struct { double cornerRadius; long long shape; long long style; long long highlightEffect; long long disabledEffect; } _configuration;
    UIImage *_image;
    NSMutableSet *_disabledImageStates;
    UIColor *_overrideBackgroundColor;
    UIColor *_overrideTitleColor;
    CAFilter *_highlightFilter;
    UIColor *_normalInputColor;
    UIColor *_highlightInputColor;
    UIColor *_selectedInputColor;
    UIColor *_disabledInputColor;
    UIColor *_appliedInputColor;
    CAShapeLayer *_layer;
    _UIBackdropView *_backdropView;
    long long _backdropStyle;
    BOOL _updatingBackdropSettings;
    BOOL _highlighted;
    BOOL _selected;
    BOOL _enabled;
    struct CGSize { double width; double height; } _boundsSize;
    UIActivityIndicatorView *_activityIndicatorView;
    UIColor *_activityIndicatorColor;
}

@property (nonatomic) BOOL showSpinner;
@property (nonatomic) BOOL blurDisabled;

+ (Class)layerClass;
+ (id)_filterInputColorForEffect:(long long)a0;

- (id)initWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)init;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)_updateTitleColor;
- (id)initWithConfiguration:(struct { double x0; long long x1; long long x2; long long x3; long long x4; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_updateFilter;
- (void)updateWithImage:(id)a0;
- (void)updateImageView;
- (void)_accessibilitySettingsDidChange:(id)a0;
- (void)updateBackgroundColorWithColor:(id)a0;
- (void)_createHighlightFilterIfNecessary;
- (void)_updateBackdropSettings;
- (void)_updateColor;
- (id)initWithCornerRadius:(double)a0 effect:(long long)a1;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;
- (void)setImageEnabled:(BOOL)a0 forState:(unsigned long long)a1;
- (void)updateActivityIndicatorColorWithColor:(id)a0;
- (void)updateTitleColorWithColor:(id)a0;

@end
