@class ATXHeuristicDevice;

@interface ATXCalendarEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

+ (id)contactStore;
+ (id)contactForParticipant:(id)a0;
+ (id)eventsFromStartDate:(id)a0 endDate:(id)a1;
+ (id)organizerContactWithEvent:(id)a0;
+ (id)flightEventsFromStartDate:(id)a0 endDate:(id)a1;
+ (id)eventsFromStartDate:(id)a0 endDate:(id)a1 category:(id)a2;
+ (id)hotelEventsFromStartDate:(id)a0 endDate:(id)a1;
+ (id)sortEkEvents:(id)a0;

- (id)initWithDevice:(id)a0;
- (void)visibleCalendarsWithCallback:(id /* block */)a0;
- (void)calendarEventsFromStartDate:(id)a0 toEndDate:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
