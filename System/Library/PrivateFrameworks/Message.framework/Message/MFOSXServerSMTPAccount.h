@class NSDictionary, MFOSXServerIMAPAccount;

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (BOOL)usesSSL;
- (id)hostname;
- (void).cxx_destruct;
- (id)password;
- (id)username;
- (unsigned int)portNumber;
- (id)accountForRenewingCredentials;
- (id)preferredAuthScheme;
- (BOOL)shouldUseAuthentication;

@end
