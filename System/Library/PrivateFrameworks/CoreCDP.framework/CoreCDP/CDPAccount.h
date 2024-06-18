@class NSDate;

@interface CDPAccount : NSObject

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;

+ (id)altDSIDForPersonID:(id)a0;
+ (BOOL)isHSA2Enabled:(id)a0;
+ (id)sharedInstance;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (id)personIDForAltDSID:(id)a0;
+ (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (id)_authKitAccountWith:(id)a0;
+ (id)cdpContextForUsername:(id)a0;
+ (id)contextForAccountWithAltDSID:(id)a0;
+ (id)appleAccountForAltDSID:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;

- (id)authToken;
- (BOOL)rpdProbationIsInEffectForDuration:(double)a0;
- (id)_serverFriendlyDateFormatter;
- (id)primaryAccountAltDSID;
- (id)primaryAccountStashedPRK;
- (id)primaryAccountFullName;
- (id)primaryAuthKitAccount;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
- (id)iCloudEnv;
- (BOOL)isOTEnabledForContext:(id)a0;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountFirstName;
- (BOOL)primaryAccountIsBeneficiary;
- (id)contextForPrimaryAccount;
- (id)primaryAppleAccount;
- (id)escrowURL;
- (id)primaryAccountUsername;
- (id)primaryAccountDSID;

@end
