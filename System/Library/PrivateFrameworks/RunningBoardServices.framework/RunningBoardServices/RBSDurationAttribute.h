@interface RBSDurationAttribute : RBSAttribute

@property (nonatomic) double invalidationDuration;
@property (nonatomic) double warningDuration;
@property (nonatomic) unsigned long long startPolicy;
@property (nonatomic) unsigned long long endPolicy;

+ (id)terminateAfterInterval:(double)a0;
+ (id)invalidateAfterInterval:(double)a0;
+ (id)attributeWithDuration:(double)a0;
+ (id)attributeWithDuration:(double)a0 warningDuration:(double)a1 startPolicy:(unsigned long long)a2 endPolicy:(unsigned long long)a3;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
