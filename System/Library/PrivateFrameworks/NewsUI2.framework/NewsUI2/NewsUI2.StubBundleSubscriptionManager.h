@class FCBundleSubscription;

@interface NewsUI2.StubBundleSubscriptionManager : _TtCs12_SwiftObject <FCBundleSubscriptionManagerType>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ cachedSubscription;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ bundleSubscription;
@property (nonatomic, retain) void /* unknown type, empty encoding */ entitlementsOverrideProvider;
@property (nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;

- (void)removeObserver:(id)a0;
- (id)bundleSubscriptionLookupEntry;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)silentExpireBundleSubscription;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (void)clearBundleSubscription;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 hideBundleDetectionUI:(BOOL)a1 completion:(id /* block */)a2;
- (void)addObserver:(id)a0;

@end
