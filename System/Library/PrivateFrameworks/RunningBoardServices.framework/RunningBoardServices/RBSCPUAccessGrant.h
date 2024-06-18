@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grant;
+ (id)grantWithUserInteractivity;
+ (id)grantWithRole:(unsigned char)a0;
+ (id)grantUserInitiated;
+ (id)grantWithUserInteractivityAndFocus;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
