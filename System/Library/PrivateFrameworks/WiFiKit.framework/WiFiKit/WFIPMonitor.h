@class NSString, _WFIPMonitorObserver, NSObject;
@protocol OS_dispatch_queue;

@interface WFIPMonitor : NSObject {
    BOOL _isMonitoring;
    _WFIPMonitorObserver *_dynamicStoreInfo;
}

@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *interfaceName;
@property struct __SCDynamicStore { } *storeRef;
@property struct __SCPreferences { } *prefsRef;
@property struct __SCDynamicStore { } *networkServiceStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (BOOL)hasValidIPAddress;
- (id)dnsSearchDomains;
- (id)init;
- (id)__ipv6StateConfig;
- (BOOL)hasValidIPv6Address;
- (BOOL)hasValidIPv4Address;
- (id)dnsServerAddresses;
- (id)httpProxyPort;
- (id)initWithInterfaceName:(id)a0;
- (id)__dnsStateConfig;
- (id)__proxiesSetupConfig;
- (BOOL)httpProxyAutoConfigured;
- (id)dnsDomainName;
- (BOOL)isUsingCustomDNSSettings;
- (id)ipv4Addresses;
- (id)httpProxyAutoConfigURL;
- (BOOL)isUsingCustomProxySetting;
- (long long)ipv6ConfigMethod;
- (id)__ipv6SetupConfig;
- (id)__ipv4SetupConfig;
- (void).cxx_destruct;
- (id)__wifiServiceID;
- (id)DHCPLeaseExpirationDate;
- (id)ipv6Addresses;
- (void)_postChangesNotification:(id)a0;
- (id)ipv4DHCPClientID;
- (BOOL)personalHotspotHasClients;
- (id)__ipv4StateConfig;
- (BOOL)renewLease;
- (id)ipv6PrefixLengths;
- (BOOL)monitorNetworkServiceID:(id)a0;
- (id)__dnsSetupConfig;
- (id)ipv4SubnetMasks;
- (void)dealloc;
- (id)ipv4Router;
- (BOOL)httpProxyIsAuthenticated;
- (id)__ipv4InterfaceStateConfig;
- (BOOL)globalProxyIsEnabled;
- (id)ipv6Router;
- (long long)ipv4ConfigMethod;
- (id)__dhcpInfo;
- (id)httpProxyUsername;
- (id)httpProxyServer;

@end
