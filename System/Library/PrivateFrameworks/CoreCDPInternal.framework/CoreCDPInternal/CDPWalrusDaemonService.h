@class CDPInternalWalrusStateController;

@interface CDPWalrusDaemonService : NSObject {
    unsigned long long _entitlements;
}

@property (retain, nonatomic) CDPInternalWalrusStateController *walrusStateController;

- (id)initWithEntitlements:(unsigned long long)a0;
- (BOOL)_allowWalrusAccess;
- (oneway void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (oneway void)repairWalrusWithCompletion:(id /* block */)a0;
- (oneway void)broadcastWalrusStateChange;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)a0;
- (id)defaultWalrusStateController;
- (void).cxx_destruct;
- (oneway void)walrusStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_allowWalrusPCSKeysAccess;
- (oneway void)updateWebAccessStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithEntitlements:(unsigned long long)a0 walrusController:(id)a1;
- (oneway void)updateWalrusStatus:(unsigned long long)a0 completion:(id /* block */)a1;

@end
