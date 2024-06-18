@interface NewsUI2.MagazineSectionsInteractor : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ magazinesBadgingCoordinator;
}

- (id)init;
- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;

@end
