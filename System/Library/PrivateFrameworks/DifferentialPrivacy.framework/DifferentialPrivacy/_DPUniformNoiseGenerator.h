@interface _DPUniformNoiseGenerator : NSObject

@property (readonly, nonatomic) double minValue;
@property (readonly, nonatomic) double range;

+ (id)generatorWithValueRange:(id)a0;

- (id)init;
- (double)sample;
- (id)description;
- (id)initWithValueRange:(id)a0;

@end
