@class UIColor, NSArray;

@interface _MKGradientView : UIView

@property (nonatomic) BOOL shouldReduceTransparency;
@property (copy, nonatomic) UIColor *accessibilityColor;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;

+ (Class)layerClass;

- (id)initWithCoder:(id)a0;
- (void)_setup;
- (void)_transparencyStatusDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)_update;

@end
