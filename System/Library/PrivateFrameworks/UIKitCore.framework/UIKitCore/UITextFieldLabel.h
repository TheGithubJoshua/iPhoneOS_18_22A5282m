@interface UITextFieldLabel : UILabel

@property (nonatomic) BOOL shouldRenderWithoutTextField;

+ (id)defaultFont;
+ (id)_defaultAttributes;

- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldDrawUnderlinesLikeWebKit;
- (void)_defaultDrawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
