@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessHasContactsUIEntitlement;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (id)_currentProcessValueForEntitlement:(id)a0 expectedType:(unsigned long long)a1;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessIsDataAccess;

@end
