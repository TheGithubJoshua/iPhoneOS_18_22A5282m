@interface AKCDPFactory : NSObject

+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)walrusStatusLiveValue;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)cdpErrorDomain;
+ (id)webAccessStatusLiveValue;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)cdpIDMSRecordMIDKey;
+ (unsigned long long)walrusStatus;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)context;
+ (BOOL)isWebAccessEnabled;
+ (BOOL)isWalrusEnabled;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)cdpIDMSRecordPRKKey;
+ (id)stateControllerWithContext:(id)a0;
+ (id)recoveryControllerWithContext:(id)a0;
+ (unsigned long long)webAccessStatus;
+ (id)cdpStateUIController;
+ (id)contextWithAuthResults:(id)a0;
+ (id)followUpController;
+ (id)followUpRepairContext;

@end
