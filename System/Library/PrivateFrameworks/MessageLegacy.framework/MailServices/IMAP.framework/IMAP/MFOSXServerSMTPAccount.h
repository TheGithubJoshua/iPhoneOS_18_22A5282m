@class NSDictionary, MFOSXServerIMAPAccount;

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (BOOL)usesSSL;
- (id)hostname;
- (id)password;
- (void)dealloc;
- (id)username;
- (unsigned int)portNumber;
- (id)accountForRenewingCredentials;
- (id)preferredAuthScheme;
- (BOOL)shouldUseAuthentication;

@end
