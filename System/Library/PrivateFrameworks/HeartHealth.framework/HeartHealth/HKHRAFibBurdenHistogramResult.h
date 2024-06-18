@class HKHRAFibBurdenDayOfWeekHistogram, HKHRAFibBurdenTimeOfDayHistogram;

@interface HKHRAFibBurdenHistogramResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKHRAFibBurdenDayOfWeekHistogram *dayOfWeekHistogram;
@property (readonly, nonatomic) HKHRAFibBurdenTimeOfDayHistogram *timeOfDayHistogram;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDayOfWeekHistogram:(id)a0 timeOfDayHistogram:(id)a1;

@end
