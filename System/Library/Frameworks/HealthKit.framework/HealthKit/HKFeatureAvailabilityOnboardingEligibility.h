@class NSString;

@interface HKFeatureAvailabilityOnboardingEligibility : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEligible;
@property (readonly, nonatomic) unsigned long long ineligibilityReasons;
@property (readonly, copy, nonatomic) NSString *countryAvailabilityVersion;

- (id)initWithCoder:(id)a0;
- (id)initWithIneligibilityReasons:(unsigned long long)a0 countryAvailabilityVersion:(id)a1;
- (id)eligibilityRespectingOverridesForFeatureIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (long long)onboardedCountrySupportedState;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ineligibilityReasonsDescription;

@end
