@class NSString, HKProxyProvider;

@interface HKNotificationStore : NSObject <_HKXPCExportable, HKNotificationStoreClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)postCompanionUserNotificationOfType:(long long)a0 completion:(id /* block */)a1;
- (void)postNotificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)setBadge:(id)a0 forDomain:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)fetchBadgeForDomain:(long long)a0 completion:(id /* block */)a1;

@end
