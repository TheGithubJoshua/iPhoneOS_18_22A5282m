@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (id)httpMethod;
- (id)url;
- (id)additionalHeaderValues;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (long long)partitionType;
- (BOOL)hasRequestBody;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (long long)serverType;

@end
