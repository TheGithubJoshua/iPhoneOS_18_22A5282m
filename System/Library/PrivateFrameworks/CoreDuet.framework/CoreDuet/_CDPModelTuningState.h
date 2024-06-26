@interface _CDPModelTuningState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int i;
@property (nonatomic) int j;
@property (nonatomic) float bestLogLambda;
@property (nonatomic) float bestW0;
@property (nonatomic) float bestScore;
@property (nonatomic) float bestThreshold;
@property (readonly, nonatomic) float progress;

+ (id)initialTuningState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
