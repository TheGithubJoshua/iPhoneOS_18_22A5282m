@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

@interface __HMFNetAddressMonitor : HMFNetMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetAddress *_netAddress;
}

@property (readonly, nonatomic) struct __SCNetworkReachability { } *networkReachabilityRef;
@property (nonatomic) unsigned int currentNetworkFlags;

- (id)initWithNetAddress:(id)a0;
- (unsigned long long)reachabilityPath;
- (id)netAddress;
- (id)initWithNetService:(id)a0;
- (id)init;
- (id)logIdentifier;
- (id)shortDescription;
- (void).cxx_destruct;
- (void)handleNetworkReachabilityChange:(unsigned int)a0;
- (void)dealloc;
- (id)attributeDescriptions;

@end
