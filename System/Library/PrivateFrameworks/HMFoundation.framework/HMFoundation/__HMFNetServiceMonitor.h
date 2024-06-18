@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor

@property (readonly) HMFNetService *service;

- (id)initWithNetAddress:(id)a0;
- (unsigned long long)reachabilityPath;
- (id)netAddress;
- (id)initWithNetService:(id)a0;
- (id)logIdentifier;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
