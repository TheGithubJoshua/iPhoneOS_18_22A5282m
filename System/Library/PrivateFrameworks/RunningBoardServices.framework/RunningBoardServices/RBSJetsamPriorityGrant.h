@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) unsigned long long band;

+ (id)grantWithBackgroundPriority;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithForegroundPriority;
+ (id)grantWithBand:(unsigned long long)a0;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
