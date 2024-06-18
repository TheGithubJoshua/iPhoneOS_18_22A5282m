@class NSArray;

@interface DIAttributeCamera : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *scanRequirements;
@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
