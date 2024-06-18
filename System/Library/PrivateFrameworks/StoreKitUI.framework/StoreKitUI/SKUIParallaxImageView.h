@class NSString, SKUIImageView;

@interface SKUIParallaxImageView : SKUIImageView <SKUIPerspectiveView> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imagePadding;
    struct CGSize { double width; double height; } _imageSize;
    SKUIImageView *_innerImageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x0; double x1; })a0;

- (void)setImagePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)placeholder;
- (void)setPlaceholder:(id)a0;
- (id)image;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setVanishingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateInnerImageView;
- (void)setPerspectiveTargetView:(id)a0;
- (void)updateForChangedDistanceFromVanishingPoint;

@end