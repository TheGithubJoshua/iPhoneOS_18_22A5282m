@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {
    struct __SCDynamicStore { } *_dynamicStore;
    struct __CFRunLoopSource { } *_dynamicStoreSource;
}

+ (id)sharedManager;

- (id)init;
- (BOOL)isHiddenEthernetInterface:(struct __SCNetworkInterface { } *)a0;
- (BOOL)hasEthernetNetworkInterfaces;
- (id)ethernetNetworkInterfaces;
- (void)ethernetDynamicStoreDidChange;
- (void)dealloc;
- (void)registerForEthernetAdapterNotifications;

@end
