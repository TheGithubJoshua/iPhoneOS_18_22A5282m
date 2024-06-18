@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKOSVersionRequirement *minimum;
@property (readonly, nonatomic) PKOSVersionRequirement *maximum;

- (id)initWithCoder:(id)a0;
- (id)initWithMinimumVersion:(id)a0 maximumVersion:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (BOOL)versionMeetsRequirements:(id)a0 deviceClass:(id)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToOSVersionRequirementRange:(id)a0;

@end
