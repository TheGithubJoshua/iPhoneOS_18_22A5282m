@interface TPSCallForwardingRequest : TPSCallClassRequest

@property (readonly, nonatomic) int reason;

+ (id)unarchivedObjectClasses;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubscriptionContext:(id)a0 callClass:(int)a1;
- (id)initWithSubscriptionContext:(id)a0 reason:(int)a1;

@end
