@class RBSProcessIdentity;

@interface RBSPrewarmAttribute : RBSAttribute

@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) double interval;

+ (id)attributeWithIdentity:(id)a0 interval:(double)a1;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithidentity:(id)a0 interval:(double)a1;

@end
