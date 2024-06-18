@class NSString, UIVisualEffectView, _UIBarBackgroundLayout, UIView, UIImageView, _UIBarBackgroundShadowView;

@interface _UIBarBackground : UIView {
    UIVisualEffectView *_effectView1;
    UIImageView *_colorAndImageView1;
    _UIBarBackgroundShadowView *_shadowView1;
    UIVisualEffectView *_effectView2;
    UIImageView *_colorAndImageView2;
    _UIBarBackgroundShadowView *_shadowView2;
    UIView *_topInsetView;
    double _bg1LastLayoutHeight;
    double _bg2LastLayoutHeight;
    struct { unsigned char needsTopInsetView : 1; unsigned char needsEffectView1 : 1; unsigned char needsColorAndImageView1 : 1; unsigned char needsShadowView1 : 1; unsigned char needsEffectView2 : 1; unsigned char needsColorAndImageView2 : 1; unsigned char needsShadowView2 : 1; } _backgroundFlags;
}

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) BOOL topAligned;
@property (retain, nonatomic) _UIBarBackgroundLayout *layout;
@property (retain, nonatomic) UIView *customBackgroundView;

- (void)_orderSubviews;
- (id)initWithCoder:(id)a0;
- (void)_updateBackgroundViewVisiblity;
- (id)_shadowView;
- (id)_encodableSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForYOrigin:(double)a0 height:(double)a1;
- (void)prepareBackgroundViews;
- (id)_backgroundEffectView;
- (void)transition:(unsigned long long)a0 toLayout:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupShadowView:(id)a0 effect:(id)a1 image:(id)a2 shadowColor:(id)a3 shadowTint:(id)a4 alpha:(double)a5;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)transitionBackgroundViews;
- (void)_setupBackgroundValues;
- (void)updateBackground;
- (void)cleanupBackgroundViews;
- (void)set_backgroundEffectView:(id)a0;
- (void)layoutSubviews;
- (void)set_shadowView:(id)a0;

@end
