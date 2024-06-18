@class NSMutableDictionary, NSString, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;

+ (id)get;
+ (id)EmbeddedLanguages;
+ (void)downloadFactors:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)getCurrentNamespaceName;
+ (id)SupportedLanguages;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (void)initForSiriX:(id /* block */)a0;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)SupportedLocales;
+ (id)getAssetForFactorName:(id)a0;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)getTRIClient;
+ (id)getTRINamespaceName;
+ (void)removeAssetForLanguageCode:(id)a0 withCompletion:(id /* block */)a1;
+ (void)setTrialNamespaceToUse:(long long)a0;
+ (void)onDemandDownloadForLanguageCode:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)EmbeddedLocales;
+ (id)validateLocale:(id)a0;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)MorphunDomain;
+ (BOOL)validateLanguageCode:(id)a0;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (void)registerForTRINamespaceUpdates;
+ (id)EmbeddedVersion;
+ (id)getAssetForLanguageCode:(id)a0;
+ (id)getFactorNameForLanguageCode:(id)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (BOOL)isLanguageEmbedded:(id)a0;
+ (id)getAssetForLocale:(id)a0;
+ (id)blockingOnDemandDownloadForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)getAssetPathForLocale:(id)a0;
+ (long long)getCurrentNamespace;
+ (id)componentArrayForLocale:(id)a0;
+ (id)getAssetPathForLanguageCode:(id)a0;
+ (id)blockingRemoveAssetForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1;

- (id)init;
- (void)removeLanguageIfNeeded:(id)a0;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)writeSubscriptionView;
- (void)unsubscribeFromLocale:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0;
- (void)setLanguageReadinessFromTrial;
- (id)processSubscriptions;
- (void)readSubscriptionView;
- (void).cxx_destruct;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (id)listSubscriptions;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)isSubscribedToLocale:(id)a0;
- (id)referenceCountsFromSubscriptionView;

@end
