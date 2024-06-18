@class NSUUID, HMHomeManager;

@interface HMAutoAddWalletKeySupressionAssertion : HMFAssertion

@property (readonly, weak) HMHomeManager *homeManager;
@property (readonly, copy) NSUUID *homeUUID;

- (id)initWithHomeManager:(id)a0 homeUUID:(id)a1;
- (void)acquireWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
