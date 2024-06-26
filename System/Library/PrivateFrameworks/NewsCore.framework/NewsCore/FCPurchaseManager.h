@class FCPurchaseController, NSString, NSMutableDictionary, NFMutexLock, FCReceiptRefresher, FCKeyValueStore;
@protocol FCPurchaseManagerDelegate, FCPaymentTransactionManager, FCPurchaseFlowOverrideProviderType, FCPurchaseIntegrityChecker, FCPurchaseReceiptProvider, FCBundleSubscriptionManagerType;

@interface FCPurchaseManager : NSObject <FCAppActivityObserving, FCPaymentTransactionManagerDelegate, FCPurchaseManagerType> {
    FCKeyValueStore *_localStore;
    id<FCPaymentTransactionManager> _paymentTransactionManager;
    id<FCPurchaseIntegrityChecker> _purchaseIntegrityChecker;
    id<FCPurchaseReceiptProvider> _purchaseReceiptProvider;
    id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    FCPurchaseController *_purchaseController;
    FCReceiptRefresher *_receiptRefresher;
    NSMutableDictionary *_ongoingPurchaseEntriesByProductID;
    NSMutableDictionary *_cachedPurchaseModels;
    NSString *_lastSignedInItunesAccountDSID;
    NFMutexLock *_accessLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCPurchaseManagerDelegate> delegate;
@property (retain, nonatomic) id<FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider;

- (id)init;
- (void)simulateFailurePurchaseWithProductID:(id)a0 transactionState:(long long)a1 error:(id)a2;
- (void)activityObservingApplicationWillEnterForeground;
- (void)activityObservingApplicationDidEnterBackground;
- (void)startPurchaseWithTagID:(id)a0 purchase:(id)a1 webAccessOptIn:(BOOL)a2 error:(id *)a3;
- (void)transactionPurchased:(id)a0;
- (id)fetchPurchaseMetadataForPurchaseID:(id)a0 restorePurchase:(BOOL)a1;
- (void)startBundlePurchaseWithPurchase:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCloudContext:(id)a0 purchaseIntegrityChecker:(id)a1 purchaseReceiptProvider:(id)a2 paymentTransactionManager:(id)a3 bundleSubscriptionManager:(id)a4 keyValueStoreOption:(unsigned long long)a5;
- (BOOL)anyOngoingPurchases;
- (void)transactionFailedWithProductID:(id)a0 transactionState:(long long)a1 transactionError:(id)a2;
- (void)simulateSuccessfulPurchaseWithProductID:(id)a0 tagID:(id)a1 purchaseID:(id)a2;
- (BOOL)isPurchaseOngoingForTagID:(id)a0;

@end
