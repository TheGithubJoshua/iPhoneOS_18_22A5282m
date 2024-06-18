@class NSDateInterval;

@interface FIUIWorkoutSplit : NSObject

@property (nonatomic) double distanceInMeters;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDateInterval *dateInterval;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDistance:(double)a0 duration:(double)a1;
- (id)initWithDistance:(double)a0 duration:(double)a1 dateInterval:(id)a2;

@end
