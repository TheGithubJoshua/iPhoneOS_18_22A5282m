@class NSString, UIImage, UIColor;

@interface _UIOverlayEffect : UIVisualEffect

@property (copy, nonatomic) NSString *filterType;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double alpha;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
