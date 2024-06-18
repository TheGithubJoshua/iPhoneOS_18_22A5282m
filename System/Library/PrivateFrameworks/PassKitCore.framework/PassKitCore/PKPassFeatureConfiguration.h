@class PKOSVersionRequirementRange;

@interface PKPassFeatureConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToPassFeatureConfiguration:(id)a0;

@end
