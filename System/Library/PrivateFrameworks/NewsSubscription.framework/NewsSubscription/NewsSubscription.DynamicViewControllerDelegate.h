@interface NewsSubscription.DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate> {
    void /* unknown type, empty encoding */ purchaseContext;
    void /* unknown type, empty encoding */ resultDelegate;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ postPurchaseOnboardingManager;
    void /* unknown type, empty encoding */ paidBundleViaOfferHandler;
}

- (id)init;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (BOOL)dynamicViewControllerShouldDismiss:(id)a0;

@end
