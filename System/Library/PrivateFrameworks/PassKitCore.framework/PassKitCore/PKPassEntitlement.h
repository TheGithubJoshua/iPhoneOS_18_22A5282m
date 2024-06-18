@class PKPassShareTimeConfiguration, NSString, NSDictionary, NSArray, NSNumber;

@interface PKPassEntitlement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (retain, nonatomic) NSString *entitlementTemplate;
@property (retain, nonatomic) NSDictionary *templateFields;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL hasRemainingShares;
@property (retain, nonatomic) NSArray *shareability;
@property (retain, nonatomic) NSArray *manageability;
@property (retain, nonatomic) NSArray *visibility;
@property (retain, nonatomic) NSNumber *value;
@property (readonly, nonatomic) long long carKeyEntitlementType;
@property (retain, nonatomic) NSString *subcredentialIdentifier;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubcredentialDictionary:(id)a0 subcredentialIdentifier:(id)a1;
- (id)subcredentialDictionaryRepresentation;

@end