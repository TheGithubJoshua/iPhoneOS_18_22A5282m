@class UIVisualEffectView, PXShadowView, UILabel, PXSharedLibrarySharingSuggestionBadgeViewConfiguration;
@protocol NSCopying;

@interface PXSharedLibrarySharingSuggestionBadgeView : UIView <PXGReusableView> {
    UIVisualEffectView *_backgroundEffectView;
    UIVisualEffectView *_labelVibrancyEffectView;
    UILabel *_label;
    PXShadowView *_shadowView;
}

@property (retain, nonatomic) PXSharedLibrarySharingSuggestionBadgeViewConfiguration *configuration;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)becomeReusable;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
