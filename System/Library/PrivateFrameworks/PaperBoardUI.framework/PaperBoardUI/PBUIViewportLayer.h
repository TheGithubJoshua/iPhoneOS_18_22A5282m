@class CALayer;

@interface PBUIViewportLayer : CALayer

@property (readonly, nonatomic) CALayer *contentLayer;
@property (nonatomic) double scale;

- (id)initWithCoder:(id)a0;
- (id)initWithScale:(double)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)layoutSublayers;
- (id)animationForKey:(id)a0;

@end
