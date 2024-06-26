@class NSDate, EKEventStore;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore *_eventStore;
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (id)init;
- (id)_eventForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_eventStore;
- (id)activeDateIntervalForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (id)_eventStoreCreatingIfNeeded;
- (void)_calendarEventStoreChangedWithNotification:(id)a0;

@end
