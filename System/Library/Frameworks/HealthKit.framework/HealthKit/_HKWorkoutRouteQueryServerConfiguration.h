@class NSUUID, HKWorkoutRoute, NSDateInterval;

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration

@property (retain, nonatomic) HKWorkoutRoute *workoutRoute;
@property (retain, nonatomic) NSUUID *workoutUUID;
@property (retain, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
