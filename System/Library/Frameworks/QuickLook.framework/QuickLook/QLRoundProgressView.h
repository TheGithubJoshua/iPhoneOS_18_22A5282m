@interface QLRoundProgressView : UIView

@property (nonatomic) double progress;

+ (Class)layerClass;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
