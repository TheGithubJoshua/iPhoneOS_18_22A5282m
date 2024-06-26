@class NSString, HKTaskServerProxyProvider;

@interface HKClinicalProviderServiceStore : NSObject <HKClinicalProviderServiceStoreClientInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (id)init;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)cancelInFlightSearchQueriesWithCompletion:(id /* block */)a0;
- (void)fetchLogoDataForBrand:(id)a0 scaleKey:(id)a1 completion:(id /* block */)a2;
- (void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)a0 completion:(id /* block */)a1;
- (void)fetchRemoteGatewayWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)fetchRemoteProviderWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)fetchRemoteSearchResultsPageForQuery:(id)a0 completion:(id /* block */)a1;
- (void)_fetchServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;

@end
