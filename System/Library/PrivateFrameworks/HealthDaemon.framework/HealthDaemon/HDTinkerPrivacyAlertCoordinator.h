@class NSObject, HDPrimaryProfile, NSDateComponents, NSDate, HDRestorableAlarm;
@protocol OS_dispatch_queue;

@interface HDTinkerPrivacyAlertCoordinator : NSObject {
    HDPrimaryProfile *_profile;
    HDRestorableAlarm *_scheduler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSDate *_unitTest_currentDate;
@property (readonly, nonatomic) NSDateComponents *_unitTest_scheduledBirthdayTransparencyAlertComponents;

- (id)initWithProfile:(id)a0;
- (BOOL)removeAllEventsWithError:(id *)a0;
- (void)_queue_clearDueEvents:(id)a0;
- (BOOL)_unitTest_didReceiveDueEvents:(id)a0;
- (id)allScheduledDueDatesWithError:(id *)a0;
- (BOOL)_unitTest_scheduleTransparencyAlertIfRequiredForBirthdate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)scheduleEventIfRequiredForDateComponents:(id)a0 eventIdentifier:(id)a1 error:(id *)a2;
- (id)allScheduledEventsWithError:(id *)a0;
- (void)_userCharacteristicsDidChangeNotification:(id)a0;

@end
