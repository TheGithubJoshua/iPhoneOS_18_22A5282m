@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject

@property (readonly, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, nonatomic) NSDateComponents *endDateComponents;

- (unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)a0;
- (id)chunked:(long long)a0 calendar:(id)a1;
- (BOOL)containsDateComponents:(id)a0 inCalendar:(id)a1;
- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
