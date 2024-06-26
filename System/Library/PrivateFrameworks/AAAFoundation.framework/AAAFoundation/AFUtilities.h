@interface AFUtilities : NSObject

+ (BOOL)isInternalBuild;
+ (id)bundleVersion;
+ (id)bundleIdentifier;
+ (void)openApplicationWithBundleID:(id)a0;
+ (void)openNetworkPref;
+ (void)openAppleIDPref;
+ (void)openSharingPref;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (void)launchPhotosApplication;
+ (void)launchSoftwareUpdate;
+ (BOOL)openAppleIDPrefWithLaunchParameters:(id)a0;
+ (void)openEnergySaverPref;
+ (void)openInternetAccountPref;
+ (void)openParentalControlPref;
+ (void)openSecurityPref;
+ (void)openUsersAndGroupsPref;
+ (BOOL)screenLockIsEnabled;
+ (id)urlForBundleIdentifier:(id)a0;

@end
