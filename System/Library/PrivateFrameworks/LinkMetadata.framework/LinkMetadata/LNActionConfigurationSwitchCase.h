@class LNValue, LNActionConfiguration;

@interface LNActionConfigurationSwitchCase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNValue *value;
@property (readonly, copy, nonatomic) LNActionConfiguration *configuration;
@property (readonly, nonatomic, getter=isDefaultCase) BOOL defaultCase;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDefaultConfiguration:(id)a0;
- (id)initWithValue:(id)a0 configuration:(id)a1;

@end
