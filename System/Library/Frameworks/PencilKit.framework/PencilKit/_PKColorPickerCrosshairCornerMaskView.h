@interface _PKColorPickerCrosshairCornerMaskView : UIView

@property (nonatomic) unsigned long long cornerPosition;
@property (nonatomic) BOOL excludeCorner;

+ (Class)layerClass;

- (void)_setPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_shapeLayer;
- (void)layoutSubviews;
- (id)maskPath;
- (void)_setFillColor:(id)a0;

@end
