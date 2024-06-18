@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)registerForClockSetNotification;
- (void)registerForDayChangedNotification;
- (void)registerForTimeZoneChangedNotification;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)timeZoneChangedNotificationReceived:(id)a0;
- (void)timeChangedToMidnightLocalTime;
- (id)currentTime;
- (void)registerForTimeChangedNotification;
- (void)dealloc;

@end
