@interface EKEventRecurrenceEditItem : EKCalendarItemRecurrenceEditItem

- (id)event;
- (id)recurrenceDate;
- (id)minRecurrenceEndDate;
- (id)recurrenceTimeZone;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (id)stringForDate:(id)a0;

@end
