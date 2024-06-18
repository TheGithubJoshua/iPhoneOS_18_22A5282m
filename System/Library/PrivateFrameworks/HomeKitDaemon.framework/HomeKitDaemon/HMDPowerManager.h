@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDPowerManager : HMFObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _networkInterfaceActive;
    unsigned int _powerAssertion;
    struct __SCDynamicStore { } *_scStore;
    void *_scContext;
    BOOL _started;
}

@property (nonatomic, getter=isNetworkAccessRequired) BOOL networkAccessRequired;

- (id)init;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_update;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;

@end
