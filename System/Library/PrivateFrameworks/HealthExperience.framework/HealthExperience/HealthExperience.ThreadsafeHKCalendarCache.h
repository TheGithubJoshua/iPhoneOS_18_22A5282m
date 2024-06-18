@interface HealthExperience.ThreadsafeHKCalendarCache : HKCalendarCache {
    void /* unknown type, empty encoding */ lock;
}

- (id)currentCalendar;
- (id)init;
- (id)calendarForTimeZone:(id)a0;
- (void).cxx_destruct;

@end
