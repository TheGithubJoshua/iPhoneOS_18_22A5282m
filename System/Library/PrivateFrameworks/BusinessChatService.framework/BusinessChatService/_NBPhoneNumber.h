@class NSNumber, NSString;

@interface _NBPhoneNumber : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) NSNumber *countryCode;
@property (retain, nonatomic) NSNumber *nationalNumber;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic) BOOL italianLeadingZero;
@property (retain, nonatomic) NSNumber *numberOfLeadingZeros;
@property (retain, nonatomic) NSString *rawInput;
@property (retain, nonatomic) NSNumber *countryCodeSource;
@property (retain, nonatomic) NSString *preferredDomesticCarrierCode;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCountryCodeSource;
- (long long)getCountryCodeSourceOrDefault;

@end
