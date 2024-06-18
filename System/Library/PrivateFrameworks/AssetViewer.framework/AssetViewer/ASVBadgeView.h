@class ASVBadgeDescription, UIImageView, UIVisualEffectView, UIView;

@interface ASVBadgeView : UIView {
    UIVisualEffectView *_blurView;
    UIImageView *_badgeImageView;
    UIView *_shadowView;
}

@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly, nonatomic) ASVBadgeDescription *badgeDescription;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (id)badgeView;
+ (void)applyBlurWithBackground:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
+ (id)badgeForThumbnail:(id)a0;
+ (id)highlightedBlurViewEffects;
+ (id)normalBlurViewEffects;

- (void)_updateShadow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setUpView;

@end
