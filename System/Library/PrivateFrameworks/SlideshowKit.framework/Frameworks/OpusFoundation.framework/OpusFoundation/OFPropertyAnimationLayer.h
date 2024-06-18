@interface OFPropertyAnimationLayer : CALayer

@property (nonatomic) struct CGPoint { double x0; double x1; } animatedPoint;
@property (nonatomic) double animatedFloat;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)init;
- (id)initWithLayer:(id)a0;
- (void)dealloc;

@end
