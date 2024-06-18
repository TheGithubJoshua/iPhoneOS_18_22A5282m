@interface SFRestrictionsPasscodeController : NSObject

+ (id)newHashDataForPassword:(id)a0 andSalt:(id)a1;
+ (BOOL)settingEnabled;
+ (BOOL)hasHashAndSaltLegacyPassword;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (BOOL)legacyRestrictionsInEffect;
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (void)_removeKeychainPasswordForRestrictions;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (void)_setKeychainPasswordForRestrictions:(id)a0;
+ (id)_generateSalt;
+ (void)migrateRestrictionsPasscode;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (void)setPIN:(id)a0;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (BOOL)validatePIN:(id)a0;
+ (id)_keychainPasswordForRestrictions;

@end
