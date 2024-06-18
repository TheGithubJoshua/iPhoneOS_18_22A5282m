@class NSString, UIImageView, UIImage, NSLayoutConstraint;

@interface SFUnifiedBarButtonView : SFUnifiedBarItemView <UIPointerInteractionDelegate> {
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewLeadingConstraint;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL shouldTrailingAlignImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)preferredWidth;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_hitRect;
- (void)updateTitleFont;

@end
