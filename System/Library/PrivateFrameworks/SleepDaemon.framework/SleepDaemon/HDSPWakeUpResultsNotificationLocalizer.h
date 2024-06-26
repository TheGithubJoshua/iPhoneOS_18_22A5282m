@class HDSPWakeUpResultsNotification, HKHealthStore;

@interface HDSPWakeUpResultsNotificationLocalizer : NSObject

@property (readonly, nonatomic) HDSPWakeUpResultsNotification *notification;
@property (readonly, nonatomic) HKHealthStore *healthStore;

- (id)localizedTitle;
- (void).cxx_destruct;
- (unsigned long long)category;
- (id)localizedBody;
- (id)userFirstName;
- (id)_embeddedNameLocalizedStringKey;
- (id)_embeddedNameSubstitutionStringKey;
- (id)_localizedBodyForOneDayNotification;
- (id)_localizedBodyForOneWeekDayNotification;
- (id)_localizedBodyForTwoWeekNotification;
- (id)_localizedStringKeyBase;
- (id)_regularLocalizedStringKey;
- (id)_regularSubstitutionStringKey;
- (double)dailySleepDurationGoal;
- (id)initWithNotification:(id)a0 healthStore:(id)a1;
- (long long)notificationVariant;
- (long long)weeklyGoalAchieved;

@end
