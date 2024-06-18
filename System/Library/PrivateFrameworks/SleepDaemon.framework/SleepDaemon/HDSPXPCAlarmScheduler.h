@class NSString;
@protocol HDSPEventScheduleDelegate;

@interface HDSPXPCAlarmScheduler : NSObject <HDSPEventScheduler, HDSPNotificationObserver>

@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (weak, nonatomic) id<HDSPEventScheduleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void).cxx_destruct;
- (void)unschedule;
- (void)scheduleEventForDate:(id)a0 options:(unsigned long long)a1;
- (id)initWithCurrentDateProvider:(id /* block */)a0;

@end
