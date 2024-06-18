@class NSString, CAShapeLayer;

@interface UIKeyboardDockItemButton : UIButton

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tapActionRegion;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)setTintColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithSize:(struct CGSize { double x0; double x1; })a0 forContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withAlignmentRectInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void).cxx_destruct;
- (void)updateFillColor;
- (void)setupDictationAnimationButtonIfNeeded;
- (void)addAnimatitionIfNeeded;
- (void)layoutSubviews;

@end
