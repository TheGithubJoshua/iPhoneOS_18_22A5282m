@class NSNumber;

@interface HAMenstrualAlgorithmsStats : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *medianCycleLength;
@property (retain, nonatomic) NSNumber *medianMenstruationLength;
@property (retain, nonatomic) NSNumber *lowerCycleLengthPercentile;
@property (retain, nonatomic) NSNumber *lowerMenstruationLengthPercentile;
@property (retain, nonatomic) NSNumber *upperCycleLengthPercentile;
@property (retain, nonatomic) NSNumber *upperMenstruationLengthPercentile;
@property (retain, nonatomic) NSNumber *numberOfCyclesFound;
@property (retain, nonatomic) NSNumber *julianDayOfFirstCycleStart;
@property (retain, nonatomic) NSNumber *julianDayOfLastCycleStart;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
