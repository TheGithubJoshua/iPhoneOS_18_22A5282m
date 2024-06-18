@class NSDate;

@interface LKOperation : NSObject

@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) double duration;

- (void)setEndTime:(id)a0;
- (id)init;
- (void)setDuration:(double)a0;
- (void)setStartTime:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;

@end
