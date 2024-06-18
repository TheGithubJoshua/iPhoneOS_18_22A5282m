@interface IMService : NSObject

+ (unsigned long long)myStatus;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)facetimeService;
+ (id)smsService;
+ (id)notificationCenter;
+ (id)jabberService;
+ (id)myIdleTime;
+ (id)canonicalFormOfID:(id)a0 withIDSensitivity:(int)a1 forHandleType:(unsigned long long)a2;
+ (id)serviceWithName:(id)a0;
+ (id)allServices;
+ (id)subnetService;
+ (id)allServicesNonBlocking;
+ (id)aimService;
+ (id)iMessageService;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (void)forgetStatusImageAppearance;
+ (BOOL)isEmailAddress:(id)a0 inDomains:(id)a1;
+ (id)callService;

- (id)localizedShortName;
- (id)infoForScreenName:(id)a0;
- (BOOL)isEnabled;
- (id)name;
- (id)localizedName;
- (id)infoForAllScreenNames;
- (id)canonicalFormOfID:(id)a0;
- (id)myScreenNames;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)infoForPreferredScreenNames;
- (BOOL)initialSyncPerformed;
- (unsigned long long)status;
- (void)logout;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;
- (id)infoForPerson:(id)a0;
- (void)login;
- (id)peopleWithScreenName:(id)a0;
- (id)screenNamesForPerson:(id)a0;

@end
