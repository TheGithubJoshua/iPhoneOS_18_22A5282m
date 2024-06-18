@interface WFImgurAccount : WFOAuth2Account

+ (id)serviceID;
+ (id)clientID;
+ (id)sessionManager;
+ (id)responseType;
+ (id)localizedServiceName;
+ (id)clientSecret;
+ (id)redirectURI;

- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
