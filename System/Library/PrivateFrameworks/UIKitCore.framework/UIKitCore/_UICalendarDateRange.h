@class NSDateComponents;

@interface _UICalendarDateRange : NSObject

@property (readonly, nonatomic) NSDateComponents *startDate;
@property (readonly, nonatomic) NSDateComponents *endDate;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)allDatesInRangeForCalendar:(id)a0;

@end
