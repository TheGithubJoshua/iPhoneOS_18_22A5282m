@interface CloudSubscriptionFeatures.FeatureRequestHandler : NSObject <CloudSubscriptionFeatures.FeaturesServiceRequest> {
    void /* unknown type, empty encoding */ taskLimiters;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ accountStore;
}

- (id)init;
- (void)getFeatureEligibilityFor:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)requestGeoClassificationFor:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)clearCacheAndNotify;
- (void)requestFeatureWithId:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;

@end
