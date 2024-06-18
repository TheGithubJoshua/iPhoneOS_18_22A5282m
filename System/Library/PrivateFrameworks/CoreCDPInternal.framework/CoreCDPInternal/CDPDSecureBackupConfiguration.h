@class NSDictionary, NSURLSession, CDPContext;

@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)configurationWithContext:(id)a0 andSession:(id)a1;
+ (id)_configurationRequestWithURLString:(id)a0;
+ (id)configurationWithContext:(id)a0;

- (id)_escrowProxyURL;
- (id)accountInfoFetchSetupDictionary;
- (id)_escrowConfigurationBagFull;
- (id)_fetchConfigurationDictionary;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (id)_escrowProxyConfigurationURL;
- (id)_iCloudEnvironment;
- (id)_configurationInfoURLRequest;
- (void).cxx_destruct;
- (id)_setupConfigurationURLs;
- (id)_fetchEscrowConfigurationBag;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_escrowConfigurationBag;
- (id)escrowAuthInfo;

@end
