@class HKCountrySet;

@interface HDOTAFeatureAvailabilityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKCountrySet *allowedCountrySet;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithAllowedCountrySet:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
