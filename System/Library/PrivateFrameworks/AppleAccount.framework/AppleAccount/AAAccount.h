@class NSString, NSArray, NSDictionary, NSSet, ACAccount;

@interface AAAccount : NSObject {
    ACAccount *_account;
}

@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *fmipToken;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (nonatomic) BOOL primaryAccount;
@property (readonly, nonatomic) BOOL primaryEmailVerified;
@property (readonly, nonatomic) BOOL needsEmailConfiguration;
@property (readonly, nonatomic) BOOL needsRegistration;
@property (readonly, nonatomic) BOOL serviceUnavailable;
@property (readonly, nonatomic) NSDictionary *serviceUnavailableInfo;
@property (readonly, nonatomic) NSString *protocolVersion;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *provisionedDataclasses;
@property (readonly, nonatomic) NSSet *enabledDataclasses;
@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSString *accountFooterText;
@property (readonly, nonatomic) NSDictionary *accountFooterButton;
@property (readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) NSString *syncStoreIdentifier;
@property (nonatomic) BOOL needsToVerifyTerms;
@property (readonly, nonatomic) NSArray *supportedDataclasses;
@property (readonly, nonatomic) int accountServiceType;

+ (id)accountTypeString;

- (id)initWithAccount:(id)a0;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)a0 withHandler:(id /* block */)a1;
- (id)init;
- (void)notifyUserOfQuotaDepletion;
- (void)presentQuotaDepletionAlertForDataclass:(id)a0;
- (void)removePasswordFromKeychain;
- (id)_childAccounts;
- (BOOL)useCellularForDataclass:(id)a0;
- (void)setUseCellular:(BOOL)a0 forDataclass:(id)a1;
- (int)mobileMeAccountStatus;
- (void)renewCredentialsForAppleIDWithHandler:(id /* block */)a0;
- (BOOL)isProvisionedForDataclass:(id)a0;
- (void)savePasswordInKeychain;
- (void)presentQuotaDepletionAlertForDataclass:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)a0;
- (void)removeTokensFromKeychain;
- (void)saveFMIPTokenInKeychain;
- (void)updateAccountWithProvisioningResponse:(id)a0;
- (void)updateAccountPropertiesWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)authenticateWithHandler:(id /* block */)a0;
- (id)_mailChildAccount;
- (id)initWithAccountIdentifier:(id)a0;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (id)propertiesForDataclass:(id)a0;
- (void)setEnabled:(BOOL)a0 forDataclass:(id)a1;
- (void)setupChildMailAccountAndEnable:(BOOL)a0 withEmail:(id)a1;
- (BOOL)isEnabledForDataclass:(id)a0;
- (id)accountPropertyForKey:(id)a0;
- (id)account;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (void)saveTokensInKeychain;

@end
