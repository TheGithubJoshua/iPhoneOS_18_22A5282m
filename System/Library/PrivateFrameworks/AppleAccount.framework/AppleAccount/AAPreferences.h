@interface AAPreferences : NSObject

+ (BOOL)isSkipPurgeAndPullBeforeHealthChecksEnabled;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (void)setNeverSkipCustodianCheckEnabled:(BOOL)a0;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (BOOL)shouldShowAccountContacts;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (BOOL)isRunningInStoreDemoMode;
+ (long long)customHealthCheckIntervalMinutes;
+ (void)setHealthCheckTTREnabled:(BOOL)a0;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (BOOL)shouldEnableFastSignIn;
+ (BOOL)isExperimentalModeEnabled;
+ (long long)customHealthCheckVersion;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (BOOL)isHealthCheckTTREnabled;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (void)setSkipPurgeAndPullBeforeHealthChecksEnabled:(BOOL)a0;
+ (BOOL)isBackupForDataSeparationEnabled;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (void)setSimulateUnhealthyCustodianEnabled:(BOOL)a0;

@end
