@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (id)stressBundleIdentifiers;
- (double)oneDayTimeInterval;
- (BOOL)isUnlocked;
- (id)init;
- (BOOL)isInternal;
- (BOOL)stressMode;
- (void).cxx_destruct;
- (id)supportedNotifyingAppIds;
- (id)supportedBundleIdentifiers;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (BOOL)normalizeExpirationToMidnight;
- (BOOL)shouldHideAllFollowUps;
- (BOOL)shouldShowUnapprovedItems;

@end
