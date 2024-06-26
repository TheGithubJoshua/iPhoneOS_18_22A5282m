@class HKSource, NSDate;

@interface _HKActivityStatisticsWorkoutInfo : NSObject <_HKJSONObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKSource *source;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)jsonObject;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 source:(id)a2;

@end
