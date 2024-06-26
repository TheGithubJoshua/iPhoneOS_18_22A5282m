@class CTCallForwardingValue;

@interface TPSSetCallForwardingRequest : TPSRequest

@property (readonly, nonatomic) CTCallForwardingValue *value;

+ (id)unarchivedObjectClasses;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 value:(id)a1;

@end
