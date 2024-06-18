@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long validityInSeconds;

- (id)initWithCoder:(id)a0;
- (void)setDefaultValue:(id)a0;
- (id)init;
- (id)defaultValue;
- (void)setCurrentValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)submissionString;
- (id)getCurrentValue;

@end
