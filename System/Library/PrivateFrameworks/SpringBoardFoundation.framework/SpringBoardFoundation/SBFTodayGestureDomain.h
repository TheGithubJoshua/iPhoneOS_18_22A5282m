@class SBFTodayGestureSettings;

@interface SBFTodayGestureDomain : PTDomain

@property (class, readonly, nonatomic) SBFTodayGestureSettings *rootSettings;

+ (id)domainName;
+ (Class)rootSettingsClass;
+ (id)domainGroupName;

@end
