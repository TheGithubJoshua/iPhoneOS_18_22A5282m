@class NSArray;

@interface SKAnimate : SKAction {
    void *_mycaction;
    NSArray *_textures;
}

@property (nonatomic) double timePerFrame;

+ (BOOL)supportsSecureCoding;
+ (id)animateWithNormalTextures:(id)a0 timePerFrame:(double)a1 resize:(BOOL)a2 restore:(BOOL)a3;
+ (id)animateWithTextures:(id)a0 timePerFrame:(double)a1 resize:(BOOL)a2 restore:(BOOL)a3;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)setDuration:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reversedAction;

@end
