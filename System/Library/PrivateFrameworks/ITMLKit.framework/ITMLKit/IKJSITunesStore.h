@class NSString, NSDictionary, SSMetricsController, IKURLBagCache, NSNumber;

@interface IKJSITunesStore : IKJSObject <NSObject, IKJSITunesStore, _IKJSITunesStoreProxy, _IKJSITunesStore> {
    NSNumber *_lastAccountDSID;
    NSDictionary *_lastKnownStatusDictionary;
    SSMetricsController *_metricsController;
    NSString *_storeFrontSuffix;
    id _ssAccountStoreChangedToken;
    id _subscriptionStatusDidChangeToken;
    id _urlBagCacheUpdateToken;
}

@property (retain, nonatomic) IKURLBagCache *bagCache;
@property (retain, nonatomic) NSString *cookieURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *DSID;
@property (readonly, nonatomic) NSDictionary *accountInfo;
@property (readonly, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) NSString *networkConnectionType;
@property (retain, nonatomic) NSString *storefront;
@property (retain, nonatomic) id cookie;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;

+ (void)setHeadersForURL:(id)a0 inRequestProperties:(id)a1;
+ (void)setITunesStoreHeaders:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)recordEvent:(id)a0 :(id)a1;
- (id)eligibilityForService:(id)a0;
- (id)initWithAppContext:(id)a0;
- (void)flushUnreportedEvents;
- (id)initWithAppContext:(id)a0 urlBagCache:(id)a1;
- (void)signOut;
- (void)_accountStoreChanged;
- (void)_bagCacheUpdated;
- (id)_subscriptionStatusDictionaryWithStatus:(id)a0 isFinal:(BOOL)a1;
- (void)_subscriptionStatusDidChanged:(id)a0;
- (id)asPrivateIKJSITunesStore;
- (void)authenticate:(id)a0 :(id)a1;
- (void)clearCookies;
- (void)evaluateScripts:(id)a0 :(id)a1;
- (void)fetchMarketingItem:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4;
- (id)getBag;
- (void)getServiceEligibility:(id)a0 :(id)a1;
- (void)invalidateBag;
- (void)loadStoreContent:(id)a0 :(id)a1;
- (id)makeStoreXMLHttpRequest;
- (void)openDynamicUIURL:(id)a0 :(id)a1 :(id)a2;
- (void)openMarketingItem:(id)a0 :(id)a1 :(id)a2;
- (void)updateServiceEligibility:(id)a0;

@end
