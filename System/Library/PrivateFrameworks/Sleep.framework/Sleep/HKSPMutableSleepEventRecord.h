@class HKSPChangeSet, NSSet, NSDictionary, NSString, NSDate;
@protocol HKSPObject;

@interface HKSPMutableSleepEventRecord : HKSPSleepEventRecord <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *wakeUpEarlyNotificationConfirmedDate;
@property (copy, nonatomic) NSDate *wakeUpConfirmedUntilDate;
@property (copy, nonatomic) NSDate *wakeUpAlarmDismissedDate;
@property (copy, nonatomic) NSDate *wakeUpOverriddenDate;
@property (copy, nonatomic) NSDate *wakeUpAlarmSnoozedUntilDate;
@property (copy, nonatomic) NSDate *goodMorningDismissedDate;
@property (nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)updateSleepTrackingOnboardingCompletedVersion:(long long)a0 completedDate:(id)a1;
- (void)freeze;
- (id)mutableCopy;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateSleepWindDownShortcutsOnboardingCompletedVersion:(long long)a0 completedDate:(id)a1;
- (void)updateSleepCoachingOnboardingCompletedVersion:(long long)a0 completedDate:(id)a1;

@end
