@class NSString, PKCurrencyAmount, NSDate;

@interface PKAppleBalanceAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier;
@property (copy, nonatomic) NSString *associatedPassSerialNumber;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) NSString *countryCode;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)currencyCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCloudRecord:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudRecord:(id)a0;

@end
