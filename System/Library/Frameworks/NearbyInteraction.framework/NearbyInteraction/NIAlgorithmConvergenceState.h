@interface NIAlgorithmConvergenceState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long convergence;
@property (nonatomic) BOOL insufficientSignalStrength;
@property (nonatomic) BOOL insufficientHorizontalSweep;
@property (nonatomic) BOOL insufficientVerticalSweep;
@property (nonatomic) BOOL insufficientMovement;
@property (nonatomic) BOOL insufficientLighting;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAlgorithmConvergenceState:(id)a0;
- (id)initWithConvergenceStatus:(long long)a0;

@end
