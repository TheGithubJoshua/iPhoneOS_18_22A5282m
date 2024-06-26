@class NSString, WrappedAMSUIWebViewController, AMSUIPaymentVerificationMetrics, NSDictionary, AMSBagKeySet, ACAccount, AMSPromise, UIViewController, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics;
@property (retain, nonatomic) AMSPromise *resultPromise;
@property (retain, nonatomic) WrappedAMSUIWebViewController *webVC;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSDictionary *accountParameters;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)accountForNetworkingFromAccount:(id)a0 accountParameters:(id)a1 accountStore:(id)a2;
+ (id)_contextCombining:(id)a0 with:(id)a1;
+ (id)_promiseToTryNextFlowWithResult:(id)a0 error:(id)a1 continuationBlock:(id /* block */)a2;
+ (id)_tokenFromDictionary:(id)a0;
+ (id)performApplePayTask:(id)a0;
+ (id)performCardOnFileTask:(id)a0;
+ (id)performIDCardTask:(id)a0;
+ (id)performRemoteDisabledFeatureWithBag:(id)a0 featureKey:(id)a1 featureBlock:(id /* block */)a2;

- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (id)performTask;
- (void)webViewController:(id)a0 didEncodeNetworkRequest:(id)a1;
- (id)initWithMode:(unsigned long long)a0 accountParameters:(id)a1 viewController:(id)a2 bag:(id)a3 displayName:(id)a4;
- (void)_finishPromiseWithResult:(id)a0 error:(id)a1;
- (id)initWithMode:(unsigned long long)a0 account:(id)a1 viewController:(id)a2 bag:(id)a3 displayName:(id)a4;
- (id)performApplePayTaskWithFeatureFlag:(BOOL)a0;
- (id)performCardOnFileTaskWithFeatureFlag:(BOOL)a0;
- (id)performIDCardTaskWithFeatureFlag:(BOOL)a0;
- (id)performWebFlowTask;
- (void)setHeader:(id)a0 withValueIn:(id)a1 forKey:(id)a2 onRequest:(id)a3;

@end
