@interface DNDModeConfigurationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasSecureData;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) unsigned long long enabledSetting;
@property (readonly, nonatomic) BOOL isEnabled;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnabledSetting:(unsigned long long)a0;

@end
