@interface _DPBiasedCoin : NSObject

@property (readonly, nonatomic) double bias;

+ (id)coinWithBias:(double)a0;
+ (double)sanitizedProbability:(double)a0;

- (id)init;
- (unsigned char)generateByte;
- (id)description;
- (BOOL)flip;
- (id)initWithBias:(double)a0;

@end
