@interface DMCMultiUserModeUtilities : NSObject

+ (BOOL)configureTemporarySessionTimeout:(double)a0;
+ (BOOL)deviceHasMultipleUsers;
+ (BOOL)isEphemeralMultiUser;
+ (unsigned long long)_previousQuotaSize;
+ (id)_configureQuotaSizeForSharedDeviceImmediately:(id)a0;
+ (id)managedAppleIDDefaultDomains;
+ (double)temporarySessionTimeout;
+ (BOOL)isSharediPad;
+ (BOOL)configureOnlineAuthenticationGracePeriod:(id)a0;
+ (BOOL)isFirstSetupBuddyDone;
+ (id)configureQuotaSizeForSharedDevice:(id)a0 preferenceDomain:(struct __CFString { } *)a1;
+ (BOOL)configureShouldSkipLanguageAndLocaleSetupForNewUsers:(BOOL)a0;
+ (BOOL)configureTemporarySessionOnly:(BOOL)a0 restoreQuotaSize:(BOOL)a1 preferenceDomain:(struct __CFString { } *)a2;
+ (id)configureResidentUsersNumberForSharedDevice:(id)a0 preferenceDomain:(struct __CFString { } *)a1;
+ (BOOL)shouldSkipLanguageAndLocaleSetupForNewUsers;
+ (BOOL)isPrimaryUserSession;
+ (BOOL)temporarySessionOnly;
+ (BOOL)inSharediPadUserSession;
+ (BOOL)configureMAIDDefaultDomains:(id)a0;
+ (BOOL)configureUserSessionTimeout:(double)a0;
+ (id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)a0;
+ (BOOL)_updateMultiUserDeviceConfigurationFileWithKey:(id)a0 value:(id)a1;
+ (id)onlineAuthenticationGracePeriod;
+ (double)userSessionTimeout;
+ (unsigned long long)getDiskAvailableSize;
+ (unsigned long long)_getDiskSize;
+ (id)configureToSharedDeviceWithPreferenceDomain:(struct __CFString { } *)a0;

@end
