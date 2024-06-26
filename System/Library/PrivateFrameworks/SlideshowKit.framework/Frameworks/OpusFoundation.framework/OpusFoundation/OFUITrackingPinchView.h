@class UIImageView;

@interface OFUITrackingPinchView : OFUIView {
    UIImageView *_imageView;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGSize { double width; double height; } _originalSize;
    BOOL _isRotating;
    double _originalAngle;
    double _currentAngle;
}

@property struct CGPoint { double x; double y; } originalCenter;

- (id)image;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)setContentMode:(long long)a0;
- (void)dealloc;
- (void)beginTrackingPinch:(id)a0;
- (void)continueTrackingPinch:(id)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 angle:(float)a1;
- (void)completeTrackingPinch:(id)a0;

@end
