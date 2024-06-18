@interface NewsSubscription.SubscriptionActivationEligibilityProvider : NSObject <SXSubscriptionActivationEligibilityProviding> {
    void /* unknown type, empty encoding */ offerManager;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ didProcessInitialOffer;
}

@property (nonatomic, readonly) long long eligibility;

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
