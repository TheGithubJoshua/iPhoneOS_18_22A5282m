@class CALayer;

@interface PBUIImageContainerLayer : CALayer

@property (retain, nonatomic) CALayer *imageLayer;

+ (id)layer;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)layoutSublayers;
- (id)animationForKey:(id)a0;

@end
