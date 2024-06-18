@class NSString, CLCircularRegion;

@interface DNDModeConfigurationLocationTrigger : DNDModeConfigurationTrigger

@property (readonly, copy, nonatomic) CLCircularRegion *region;
@property (readonly, copy, nonatomic) NSString *detail;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)hasSecureData;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithRegion:(id)a0 detail:(id)a1 enabledSetting:(unsigned long long)a2;

@end
