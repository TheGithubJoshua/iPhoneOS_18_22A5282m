@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation

@property (nonatomic) BOOL shouldRequestLightweightStatus;
@property (readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request;
@property (nonatomic) BOOL allowsFuseHeaderEnrichment;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)initWithRequest:(id)a0;
- (BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)a0;
- (void)execute;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)a0 subscriptionStatusURL:(id)a1 allowsAuthentication:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_cacheAccountEligibilityWithStatus:(id)a0 requestContext:(id)a1;

@end
