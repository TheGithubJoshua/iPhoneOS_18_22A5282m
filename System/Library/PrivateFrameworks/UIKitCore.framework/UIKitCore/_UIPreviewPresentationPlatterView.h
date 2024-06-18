@class _UIPreviewPresentationEffectView, UIView;

@interface _UIPreviewPresentationPlatterView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *contentEffectView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *contentClipView;
@property (retain, nonatomic) UIView *contentTransformView;
@property (retain, nonatomic) UIView *contentShadowView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGSize { double width; double height; } contentClippingSize;
@property (nonatomic) double blurRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isDropShadowEnabled) BOOL dropShadowEnabled;

- (double)blurRadius;
- (id)initWithContentView:(id)a0;
- (void)setBlurRadius:(double)a0;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setCornerRadius:(double)a0;
- (void)layoutSubviews;
- (BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)a0;

@end
