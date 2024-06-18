@interface DIAttributeFooter : DIAttributeLabel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)setDefaultValue:(id)a0;
- (id)init;
- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
