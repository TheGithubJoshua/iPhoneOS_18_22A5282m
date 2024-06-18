@class NSUUID;

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL needsHistoricalData;
@property (copy, nonatomic) NSUUID *workoutBuilderIdentifier;
@property (nonatomic) BOOL deliverQuantities;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
