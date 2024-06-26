@class SCLScheduleTime;

@interface SCLTimeInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SCLScheduleTime *startTime;
@property (readonly, copy, nonatomic) SCLScheduleTime *endTime;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (BOOL)crossesDayBoundary;
- (BOOL)containsScheduleTime:(id)a0;
- (BOOL)intersectsTimeInterval:(id)a0;

@end
