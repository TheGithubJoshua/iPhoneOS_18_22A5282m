@interface DIAttributeCustom : DIAttributeText <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)setDefaultValue:(id)a0;
- (id)init;
- (id)defaultValue;
- (void)setIdentifier:(id)a0;
- (void)setCurrentValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)submissionString;
- (id)getCurrentValue;

@end
