@class NSUUID, NSString, NSDate, MTSound, NSURL, NSDictionary, MTIntentAlarm, NSNumber;

@interface MTAlarm : NSObject <MTScheduleable, MTDictionarySerializable, MTSerializable, BSDescriptionProviding, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MTIntentAlarm *intentAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long bedtimeHour;
@property (nonatomic) unsigned long long day;
@property (nonatomic) unsigned long long month;
@property (nonatomic) unsigned long long year;
@property (nonatomic) unsigned long long bedtimeMinute;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (copy, nonatomic) NSNumber *bedtimeReminder;
@property (nonatomic) BOOL sleepMode;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) BOOL sleepTracking;
@property (copy, nonatomic) NSDate *overriddenForDate;
@property (nonatomic) BOOL timeInBedTracking;
@property (nonatomic) BOOL sleepSchedule;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) unsigned long long playOptions;
@property (nonatomic, getter=isSleepAlarm) BOOL sleepAlarm;
@property (nonatomic) BOOL allowsSnooze;
@property (copy, nonatomic) NSDate *snoozeFireDate;
@property (copy, nonatomic) NSDate *bedtimeSnoozeFireDate;
@property (copy, nonatomic) NSDate *firedDate;
@property (copy, nonatomic) NSDate *dismissedDate;
@property (nonatomic) unsigned long long dismissedAction;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDate *bedtimeFiredDate;
@property (copy, nonatomic) NSDate *bedtimeDismissedDate;
@property (nonatomic) unsigned long long bedtimeDismissedAction;
@property (copy, nonatomic) NSDate *keepOffUntilDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;
@property (nonatomic) unsigned long long onboardingVersion;
@property (copy, nonatomic) id /* block */ currentDateProvider;
@property (copy, nonatomic) NSDictionary *siriContext;
@property (copy, nonatomic) NSDate *bypassReloadDate;
@property (readonly, nonatomic) NSUUID *alarmID;
@property (readonly, nonatomic) NSURL *alarmURL;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) BOOL playsOnThisDevice;
@property (readonly, nonatomic, getter=isFiring) BOOL firing;
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) unsigned long long sleepDuration;
@property (readonly, nonatomic) NSDate *nextFireDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sleepAlarm;
+ (id)alarm;
+ (BOOL)_isInternalBuild;
+ (unsigned long long)defaultPlayOptionsIsSleepAlarm:(BOOL)a0;
+ (id)propertiesAffectingNotification;
+ (BOOL)_date:(id)a0 isOnDay:(long long)a1 calendar:(id)a2;
+ (id)alarmWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;
+ (unsigned long long)defaultPlayOptions;
+ (unsigned long long)defaultSleepModeOptions;
+ (id)mostRecentlyUpdatedAlarmForAlarms:(id)a0;
+ (id)propertiesAffectingBedtime;
+ (id)propertiesAffectingSnooze;
+ (id)propertiesAffectingSync;
+ (id)propertiesAffectingWaketime;
+ (id)sleepAlarmWithHour:(long long)a0 minute:(long long)a1;
+ (id)sleepAlarmWithHour:(long long)a0 minute:(long long)a1 bedtimeHour:(long long)a2 bedtimeMinute:(long long)a3;
+ (id)sleepAlarmWithHour:(long long)a0 minute:(long long)a1 year:(long long)a2 month:(long long)a3 day:(long long)a4 bedtimeHour:(long long)a5 bedtimeMinute:(long long)a6;
+ (id)sleepAlarmWithId:(id)a0;
+ (id)sleepAlarmWithSchedule:(unsigned long long)a0;
+ (id)sleepScheduleString:(unsigned long long)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualIgnoringLastModifiedDate:(id)a0;
- (id)initFromDeserializer:(id)a0;
- (id)dateComponents;
- (id)nextFireDateAfterDate:(id)a0;
- (id)initWithCurrentTimeFromCurrentDateProvider:(id /* block */)a0;
- (id)init;
- (BOOL)isEqualToAlarm:(id)a0;
- (BOOL)overridesScheduledObject:(id)a0 calendar:(id)a1;
- (id)getOverriddenDate;
- (BOOL)shouldBeScheduled;
- (BOOL)isItemEnabled;
- (BOOL)isSingleTime;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)serializeWithSerializer:(id)a0;
- (id)nextFireDateAfterDate:(id)a0 includeBedtimeNotification:(BOOL)a1;
- (id)_initCommon;
- (id)nextTriggerAfterDate:(id)a0;
- (id)upcomingTriggersAfterDate:(id)a0;
- (double)sleepDurationSeconds;
- (id)nextTrigger;
- (void)setFiring:(BOOL)a0;
- (BOOL)overridesAlarm:(id)a0 trigger:(id)a1 calendar:(id)a2;
- (void)_copyStateOntoAlarm:(id)a0;
- (id)nextTriggersAfterDate:(id)a0 inclusionOptions:(unsigned long long)a1;
- (BOOL)confirmedLastBedtimeReminder;
- (id)initWithIdentifier:(id)a0;
- (id)singleTimeOverrideDateInCalendar:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setOverriddenDate:(id)a0;
- (BOOL)isBedtimeSnoozed;
- (long long)compare:(id)a0;
- (id)_nextDateHelperWithDate:(id)a0 calendar:(id)a1;
- (id)initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (id)nextExpectedBedtimeDateAfterDate:(id)a0;
- (id)nextTriggersAfterDate:(id)a0 includeBedtime:(BOOL)a1;
- (id)initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1 currentDateProvider:(id /* block */)a2;
- (id)succinctDescription;
- (id)nextTriggerAfterDate:(id)a0 ofType:(unsigned long long)a1;
- (BOOL)shouldBypassWidgetReload;
- (BOOL)overridesNextAlarm:(id)a0 date:(id)a1 calendar:(id)a2;
- (BOOL)_isEqualToAlarm:(id)a0 checkLastModified:(BOOL)a1;
- (id)intentLabel;
- (void)scheduleOverridenForDate:(id)a0;
- (id)bedtimeComponents;
- (id)nextTriggerAfterDate:(id)a0 includeBedtimeNotification:(BOOL)a1;
- (id)timeObject;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_earliestTriggerDateForDate:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValidDateComponent:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updatePropertiesFromDeserializer:(id)a0;
- (BOOL)isSingleTimeAlarm;
- (BOOL)isSleepItem;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)alarmIntentDisplayString;
- (id)nextTriggersAfterDate:(id)a0;
- (id)identifier;
- (id)nextTriggerAfterDate:(id)a0 includeSnooze:(BOOL)a1 includeBedtimeNotification:(BOOL)a2;
- (id)alarmIDString;
- (id)alarmIDIntentObject;
- (id)nextTriggersAfterDate:(id)a0 includeSnooze:(BOOL)a1 includeBedtimeNotification:(BOOL)a2;
- (void)resetSnoozeFireDate;
- (id)nextExpectedWakeUpDateAfterDate:(id)a0;

@end
