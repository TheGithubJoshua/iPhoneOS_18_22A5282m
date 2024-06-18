@class NSDictionary, NSArray, HKSPSleepScheduleDayOccurrence, NSString, HKSPSleepScheduleOccurrence, NSDate, NSSet;
@protocol HKSPSyncAnchor;

@interface HKSPSleepSchedule : NSObject <BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *mondayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *tuesdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *wednesdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *thursdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *fridayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *saturdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *sundayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *overrideDayOccurrence;
@property (readonly, nonatomic) unsigned long long windDownMinutes;
@property (readonly, nonatomic) double sleepDurationGoal;
@property (readonly, nonatomic) BOOL isDefaultSchedule;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *overrideOccurrence;
@property (readonly, nonatomic) unsigned long long weekdaysWithOccurrences;
@property (readonly, nonatomic) unsigned long long weekdaysWithoutOccurrences;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) double windDownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;

+ (id)emptyScheduleWithSyncAnchor:(id)a0;
+ (id)innerClasses;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_unsortedOccurrences;
- (double)maximumAllowableWindDown;
- (BOOL)isEmptySleepSchedule;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)occurrencesAfterDate:(id)a0 gregorianCalendar:(id)a1;
- (BOOL)meetsDefaultSleepGoal;
- (id)initFromObject:(id)a0;
- (id)emptyCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (BOOL)isEquivalentTo:(id)a0;
- (id)succinctDescription;
- (id)mutableOccurrenceTemplate;
- (id)mutableCopy;
- (id)occurrenceOnDay:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allowableRangeForModifiedOccurrence:(id)a0 gregorianCalendar:(id)a1;
- (void)copyFromObject:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEnabledAndHasOccurrences;
- (void)_enumerateDayOccurrencesWithBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_wakeUpComponentsByAddingSleepDurationGoalToBedtimeComponents:(id)a0;
- (id)allowableRangeForWeekdays:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)objectWithSyncAnchor:(id)a0;
- (id)overridenOccurrenceForOverrideOccurrence:(id)a0;
- (id)occurrencesOnDays:(unsigned long long)a0;

@end
