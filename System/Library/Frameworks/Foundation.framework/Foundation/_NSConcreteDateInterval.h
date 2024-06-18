@class NSDate;

@interface _NSConcreteDateInterval : NSDateInterval {
    NSDate *_startDate;
    double _duration;
}

- (id)init;
- (id)startDate;
- (double)duration;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (void)dealloc;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)endDate;

@end
