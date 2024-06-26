@class NSDictionary;

@interface FASettingsPresetConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *values;

+ (id)boolKeys;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithValues:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isValidBoolValue:(id)a0;
- (BOOL)isValidTriState:(id)a0;
- (id)validatedValuesFromValues:(id)a0;

@end
