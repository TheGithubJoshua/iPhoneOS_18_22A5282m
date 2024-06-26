@class NSString;

@interface WFSlackAccount : WFOAuth2Account

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *teamName;

+ (id)scopes;
+ (id)serviceID;
+ (id)clientID;
+ (id)sessionManager;
+ (id)localizedServiceName;
+ (id)clientSecret;
+ (id)redirectURI;
+ (BOOL)allowsMultipleAccounts;

- (id)localizedName;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
