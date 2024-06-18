@class DSAdvertiseManager, DSCohortManager, DSDeviceContext, NSMutableSet, NSObject, DSScanManager;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DSXPCServer : NSObject {
    BOOL _shouldActivate;
    NSObject<OS_xpc_object> *_xpcListener;
    BOOL _shouldScanDSInfo;
    BOOL _shouldScanDSAction;
    DSScanManager *_scanManager;
    DSAdvertiseManager *_advertiseManager;
    BOOL _shouldAdvertiseDSInfo;
    BOOL _shouldAdvertiseDSAction;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSMutableSet *xpcConnections;
@property (retain, nonatomic) DSDeviceContext *myDeviceContext;
@property (retain, nonatomic) DSCohortManager *cohortManager;

- (id)init;
- (void)updateScanner;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleXPCConnection:(id)a0;
- (void)updateAdvertiser;
- (void)_activate;
- (void)_invalidate;
- (void)_deviceFoundHandler:(id)a0;
- (void)_deviceLostHandler:(id)a0;
- (void)_ensureAdvertiserStarted;
- (void)_ensureAdvertiserStopped;
- (void)_ensureScannerStarted;
- (void)_ensureScannerStopped;
- (void)_receivedXPCObject:(id)a0;
- (void)removeXPCConnection:(id)a0;

@end
