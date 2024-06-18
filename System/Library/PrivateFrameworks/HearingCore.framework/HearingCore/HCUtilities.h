@interface HCUtilities : NSObject

+ (BOOL)isProtectedDataAvailable;
+ (id)bluetoothManagerQueue;
+ (BOOL)isInternalInstall;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)deviceIsPod;
+ (BOOL)deviceIsMultiUser;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)deviceIsBigPhone;
+ (BOOL)supportsLEA2;
+ (BOOL)currentProcessIsHealth;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)watchSupportsPairingHearingAids;
+ (BOOL)deviceIsPhone;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)deviceIsSmallPhone;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)deviceIsPad;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)deviceIsWatch;
+ (long long)systemBootTime;

@end
