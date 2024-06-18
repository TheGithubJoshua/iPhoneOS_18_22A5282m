@class NSSet, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CUTNetworkInterfaceListener : NSObject {
    void *_dynamicStore;
    NSHashTable *_delegateMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, nonatomic) int wifiState;
@property (readonly, nonatomic) int cellState;
@property (readonly, nonatomic) NSSet *IPv6Addresses;
@property (readonly, nonatomic) NSSet *IPv4Addresses;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0;
- (id)init;
- (void)removeDelegate:(id)a0;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_handleNetworkChange:(id)a0;
- (void)_notifyDelegatesOfAddressChange:(id)a0 isIPv6:(BOOL)a1;
- (void)_notifyDelegatesOfCellChange:(int)a0;
- (void)_notifyDelegatesOfWifiChange:(int)a0;

@end