@class NSString, HKProxyProvider, HKObserverSet;
@protocol HKProfileStoreObserver;

@interface HKProfileStore : NSObject <_HKXPCExportable, HKProfileStoreClient> {
    HKProxyProvider *_proxyProvider;
    HKObserverSet<HKProfileStoreObserver> *_observers;
    BOOL _startedObserving;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_getSynchronousProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)addObserver:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllProfilesWithCompletion:(id /* block */)a0;
- (void)setDisplayImageData:(id)a0 completion:(id /* block */)a1;
- (void)client_remoteDidUpdateProfileList;
- (void)createProfileOfType:(long long)a0 displayName:(id)a1 completion:(id /* block */)a2;
- (void)deleteProfile:(id)a0 completion:(id /* block */)a1;
- (void)dispatchProfileListDidUpdate;
- (void)fetchDisplayImageData:(id /* block */)a0;
- (void)fetchDisplayName:(id /* block */)a0;
- (void)fetchProfileIdentifierForNRDeviceUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchProfileIdentifierForNRDeviceUUID:(id)a0 ownerAppleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchSharingInformationForProfileIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setDisplayFirstName:(id)a0 lastName:(id)a1 completion:(id /* block */)a2;
- (void)startObservingWithCompletion:(id /* block */)a0;
- (id)synchronouslyFetchFirstName;

@end
