@class NSArray;

@interface _HKActivityStatisticsQueryResult : NSObject <_HKJSONObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *activeEnergyResults;
@property (copy, nonatomic) NSArray *appleMoveTimeResults;
@property (copy, nonatomic) NSArray *appleExerciseTimeResults;
@property (copy, nonatomic) NSArray *appleStandHourResults;
@property (copy, nonatomic) NSArray *workoutResults;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)jsonObject;

@end
