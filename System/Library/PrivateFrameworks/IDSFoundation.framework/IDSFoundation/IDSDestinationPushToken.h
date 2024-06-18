@class NSString, NSData;

@interface IDSDestinationPushToken : IDSDestination

@property (readonly, nonatomic) NSString *alias;
@property (readonly, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)initWithCoder:(id)a0;
- (id)initWithAlias:(id)a0 pushToken:(id)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
