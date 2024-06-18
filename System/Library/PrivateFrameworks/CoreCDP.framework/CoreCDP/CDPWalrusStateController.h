@class NSString, CDPContext;

@interface CDPWalrusStateController : NSObject <CDPWalrusStatusProvider> {
    CDPContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0;
- (void)broadcastWalrusStateChange;
- (void)walrusStatusWithCompletion:(id /* block */)a0;
- (unsigned long long)walrusStatus:(id *)a0;
- (void).cxx_destruct;
- (BOOL)shouldOpenGate;
- (void)repairWalrusStatusWithCompletion:(id /* block */)a0;
- (void)updateWalrusStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_startObservingWalrusStateChangeNotification;

@end
