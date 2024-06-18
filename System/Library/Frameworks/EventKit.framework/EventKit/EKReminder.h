@class NSTimeZone, NSDateComponents, NSDate, EKObjectID;

@interface EKReminder : EKCalendarItem

@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;

+ (Class)frozenClass;
+ (id)knownSingleValueKeysForComparison;
+ (void)_removeSnoozedAlarmsFromReminder:(id)a0 usingDueDate:(id)a1;
+ (id)generateUniqueIDWithReminder:(id)a0 calendar:(id)a1;
+ (id)reminderWithEventStore:(id)a0;

- (BOOL)refresh;
- (BOOL)save:(id *)a0;
- (unsigned long long)entityType;
- (void)setAllDay:(BOOL)a0;
- (BOOL)_reset;
- (id)init;
- (void)setDisplayOrder:(unsigned long long)a0;
- (BOOL)validate:(id *)a0;
- (void)rollback;
- (unsigned long long)displayOrder;
- (void).cxx_destruct;
- (void)setTimeZone:(id)a0;
- (id)description;
- (id)timeZone;
- (id)startDateComponents;
- (id)title;
- (void)reset;
- (BOOL)isAllDay;
- (id)externalURI;
- (id)dueDate;
- (void)setDueDate:(id)a0;
- (void)setStartDateComponents:(id)a0;
- (id)dueDateComponents;
- (void)setStartTimeZone:(id)a0;
- (id)startTimeZone;
- (BOOL)startDateAllDay;
- (void)_adjustAfterMovingOrCopyingFromOldCalendar:(id)a0 toNewCalendar:(id)a1 savingItem:(id)a2;
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)a0;
- (id)_generateNewUniqueID;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (BOOL)dueDateAllDay;
- (id)firstAlertDate;
- (void)forceUpdateFrozenCalendar:(id)a0;
- (id)initWithPersistentObject:(id)a0;
- (id)reminderIdentifier;
- (void)setDueDateComponents:(id)a0;
- (void)setFirstAlertDate:(id)a0;
- (void)setStartDateAllDay:(BOOL)a0;
- (void)setStartDateTimeZone:(id)a0;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1;
- (id)startDateComponentsRaw;
- (id)startDateForRecurrence;
- (id)startDateTimeZone;

@end
