@class NSNumber;

@interface HMNumberRange : NSObject

@property (readonly, nonatomic) NSNumber *minValue;
@property (readonly, nonatomic) NSNumber *maxValue;

+ (id)numberRangeWithMaxValue:(id)a0;
+ (id)numberRangeWithMinValue:(id)a0;
+ (id)numberRangeWithMinValue:(id)a0 maxValue:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1;

@end
