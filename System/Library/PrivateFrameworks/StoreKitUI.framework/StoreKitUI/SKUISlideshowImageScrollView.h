@class UIImage, UIImageView;

@interface SKUISlideshowImageScrollView : UIScrollView {
    struct CGPoint { double x; double y; } _centerPointBeforeResize;
    double _scaleBeforeResize;
}

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)layoutSubviews;
- (void)_prepareToResize;
- (void)_recoverFromResize;
- (void)_resetMinMaxZoomScales;
- (void)resetZoomScale;
- (void)zoomIntoPoint:(struct CGPoint { double x0; double x1; })a0;

@end
