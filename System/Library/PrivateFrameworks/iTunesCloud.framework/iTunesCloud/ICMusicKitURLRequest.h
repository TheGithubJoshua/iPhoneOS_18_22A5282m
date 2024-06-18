@class ICStoreURLRequest, NSString, ICMusicKitRequestContext, NSDictionary;

@interface ICMusicKitURLRequest : ICURLRequest {
    ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
    NSString *_cachedDescription;
}

@property (readonly, copy, nonatomic) NSString *_developerToken;
@property (readonly, nonatomic) ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
@property (readonly, copy, nonatomic) ICMusicKitRequestContext *requestContext;
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)a0;
+ (Class)_responseHandlerClass;
+ (Class)_responseClass;

- (void)_buildEquivalentStoreURLRequestWithDeveloperToken:(id)a0 completionHandler:(id /* block */)a1;
- (id)_description;
- (void)_buildMusicKitURLRequestWithBaseURLRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1;
- (id)initWithURL:(id)a0 requestContext:(id)a1;
- (void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:(id)a0 developerToken:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_setDeveloperToken:(id)a0;
- (id)description;
- (void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:(id)a0;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1 resumeData:(id)a2;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)a0;

@end
