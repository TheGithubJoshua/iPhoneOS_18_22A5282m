@class NSNumber, NSString, NSDate;

@interface ASDIAPInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *adamId;
@property (retain, nonatomic) NSNumber *appAdamId;
@property (nonatomic) BOOL autoRenewStatus;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (nonatomic) unsigned char type;
@property (nonatomic) BOOL hasUsedFreeOffer;
@property (nonatomic) BOOL hasUsedIntroPricingOffer;
@property (retain, nonatomic) NSString *subscriptionFamilyId;
@property (readonly, nonatomic) NSNumber *expirationTimestamp;
@property (readonly, nonatomic) NSNumber *lastModifiedTimestamp;
@property (readonly, nonatomic) NSNumber *purchaseTimestamp;

- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
