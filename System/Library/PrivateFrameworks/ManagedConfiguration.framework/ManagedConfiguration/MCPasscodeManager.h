@interface MCPasscodeManager : NSObject

+ (id)characteristicsDictionaryFromPasscode:(id)a0;
+ (int)unlockScreenTypeForRestrictions:(id)a0;
+ (id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)a0;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0;
+ (id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0 shouldBeDefault:(BOOL)a1;
+ (id)hashForPasscode:(id)a0 usingMethod:(int)a1 salt:(id)a2 customIterations:(unsigned int)a3;
+ (id)deviceLockedError;
+ (id)generateSalt;
+ (id)sharedManager;
+ (BOOL)passcode:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 checkHistory:(BOOL)a2 outError:(id *)a3;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0;
+ (BOOL)_passcodeCharacteristics:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 outError:(id *)a2;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0 outSimplePasscodeType:(int *)a1;
+ (BOOL)isDeviceUnlocked;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;
+ (int)unlockScreenTypeForRestrictions:(id)a0 outSimplePasscodeType:(int *)a1;

- (BOOL)unlockDeviceWithPasscode:(id)a0 outError:(id *)a1;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (int)newPasscodeEntryScreenType;
- (id)passcodeExpiryDateOutError:(id *)a0;
- (id)_privatePasscodeDictWithOutError:(id *)a0;
- (void)passcodeExpiryDateCompletionBlock:(id /* block */)a0;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)a0 outError:(id *)a1;
- (id)localizedDescriptionOfPasscodePolicy;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0 shouldBeMinimum:(BOOL)a1;
- (int)currentUnlockSimplePasscodeType;
- (BOOL)isPasscodeSet;
- (id)_publicPasscodeDict;
- (void)lockDevice;
- (id)localizedDescriptionOfDefaultNewPasscodePolicy;
- (id)_wrongPasscodeError;
- (BOOL)isPasscodeCompliantWithNamedPolicy:(id)a0 outError:(id *)a1;
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)a0;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (BOOL)passcode:(id)a0 compliesWithPolicyCheckHistory:(BOOL)a1 outError:(id *)a2;
- (int)currentUnlockScreenType;
- (BOOL)isDeviceLocked;
- (void)lockDeviceImmediately:(BOOL)a0;
- (BOOL)_checkPasscode:(id)a0 againstHistoryWithRestrictions:(id)a1 outError:(id *)a2;

@end
