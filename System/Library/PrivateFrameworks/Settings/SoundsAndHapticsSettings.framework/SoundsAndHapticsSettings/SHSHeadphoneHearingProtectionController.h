@class NSArray, HKHealthStore, NSNumberFormatter, ADASManager, NSNumber;

@interface SHSHeadphoneHearingProtectionController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager;
@property (nonatomic, getter=isDeviceiPad) BOOL DeviceiPad;
@property (nonatomic, getter=isDeviceiPod) BOOL DeviceiPod;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSArray *weeklyNotificationData;
@property (nonatomic) int weeklyNotificationCount;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSNumber *levelLimitThreshold;

- (id)specifiers;
- (id)init;
- (void)dismiss;
- (id)startDate;
- (void)loadView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)endDate;
- (id)deviceTypeString;
- (void)openAboutHeadphoneNotifications;
- (id)getHeadphoneLevelLimitEnabled;
- (id)getHeadphoneLevelLimitSetting;
- (id)getHeadphoneNotificationsEnabled;
- (id)headphoneLevelLimitDescriptionSpecifier;
- (id)headphoneLevelLimitGroupSpecifier;
- (BOOL)headphoneLevelLimitLockedByRestrictions;
- (id)headphoneLevelLimitSliderSpecifier;
- (id)headphoneLevelLimitSwitchSpecifier;
- (id)headphoneLightningAdaptersSpecifier;
- (id)headphoneNotificationsGroupSpecifier;
- (id)headphoneNotificationsSwitchSpecifier;
- (id)headphoneWeeklyNotificationDescriptionSpecifier;
- (void)openHealthArticleSafeListening;
- (void)openHealthPrivacySettings;
- (void)queryNotificationCountsFromDate:(id)a0 toDate:(id)a1;
- (void)setHeadphoneLevelLimitEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setHeadphoneLevelLimitValue:(id)a0 forSpecifier:(id)a1;
- (void)setHeadphoneNotificationsEnabled:(id)a0 forSpecifier:(id)a1;
- (id)updateHeadphoneLevelLimitDescriptionText;
- (id)updateHeadphoneLevelLimitText;
- (void)updateWeeklyNotificationCounts:(id)a0 perMonth:(id)a1;
- (id)weeklyNotificationCount:(id)a0;

@end
