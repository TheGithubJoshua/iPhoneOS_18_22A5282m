@class NSArray, NSString, EKFrozenReminderStructuredLocation, REMAlarm;

@interface EKFrozenReminderAlarm : EKFrozenReminderObject {
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}

@property (readonly) NSArray *alarms;
@property (readonly) NSArray *triggers;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;

+ (Class)meltedClass;
+ (id)semanticIdentifierFromREMAlarm:(id)a0;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)a0;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)a0;
+ (id)semanticIdentifierFromDateComponents:(id)a0;
+ (id)triggersFromAbsoluteDate:(id)a0 relativeOffset:(double)a1 timeValuesRelevant:(BOOL)a2 structuredLocation:(id)a3 proximity:(long long)a4;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)remObjectID;
- (void)setEmailAddress:(id)a0;
- (id)emailAddress;
- (void)setType:(long long)a0;
- (void)setUrlWrapper:(id)a0;
- (BOOL)isDefaultAlarm;
- (void)setCalendarOwner:(id)a0;
- (id)UUID;
- (void)setCalendarItemOwner:(id)a0;
- (id)originalAlarm;
- (double)relativeOffset;
- (long long)proximity;
- (id)calendarItemOwner;
- (id)urlWrapper;
- (void).cxx_destruct;
- (id)snoozedAlarmsSet;
- (id)acknowledgedDate;
- (id)uniqueIdentifier;
- (long long)type;
- (id)absoluteDate;
- (id)calendarOwner;
- (id)_effectiveAlarm;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_locationAlarm;
- (id)_remStructuredLocation;
- (void)_setTimeAndLocationAlarms:(id)a0;
- (id)_setTimeOrLocationAlarm:(id)a0;
- (id)_timeAlarm;
- (id)initWithAlarms:(id)a0 inStore:(id)a1;
- (id)initWithAlarms:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)modifiedStructuredLocation;
- (id)updatedAlarmWithLocation:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;

@end
