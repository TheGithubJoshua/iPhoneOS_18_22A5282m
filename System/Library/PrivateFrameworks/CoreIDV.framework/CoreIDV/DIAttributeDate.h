@class NSDate;

@interface DIAttributeDate : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requireDay;
@property (nonatomic) BOOL requireMonth;
@property (nonatomic) BOOL requireYear;
@property (copy, nonatomic) NSDate *defaultValue;
@property (copy, nonatomic, getter=getCurrentValue) NSDate *currentValue;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
