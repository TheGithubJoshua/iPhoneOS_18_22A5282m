@interface NSUnitConverterReciprocal : NSUnitConverter <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double reciprocalValue;

- (id)initWithCoder:(id)a0;
- (double)valueFromBaseUnitValue:(double)a0;
- (double)baseUnitValueFromValue:(double)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReciprocalValue:(double)a0;

@end
