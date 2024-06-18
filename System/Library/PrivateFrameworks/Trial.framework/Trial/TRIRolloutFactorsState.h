@class TRIRolloutDeployment;

@interface TRIRolloutFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)rolloutIdentifiers;
- (BOOL)_isEqualToState:(id)a0;
- (id)initWithDeployment:(id)a0;
- (id)persisted;

@end
