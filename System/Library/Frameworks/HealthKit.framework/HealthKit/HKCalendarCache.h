@class NSMutableDictionary, NSCalendar;

@interface HKCalendarCache : NSObject {
    NSMutableDictionary *_calendarsByTimeZoneName;
    NSCalendar *_test_currentCalendar;
}

+ (id)earliestTimeZoneCalendar;
+ (id)latestTimeZoneCalendar;

- (id)currentCalendar;
- (id)init;
- (id)calendarForTimeZone:(id)a0;
- (void)_test_setCurrentCalendar:(id)a0;
- (void).cxx_destruct;

@end
