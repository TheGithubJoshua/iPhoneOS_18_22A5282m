@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkService : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    struct __SCPreferences { } *_prefsRef;
    BOOL _isMonitoringEvents;
    NSString *_serviceID;
    NSString *_serviceName;
    BOOL _isServiceEnabled;
}

@property (copy) id /* block */ eventHandler;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *serviceID;

- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (id)IPv4SubnetMasks;
- (id)IPv4Router;
- (id)__IPv4StateConfig;
- (id)init;
- (BOOL)isMonitoringEvents;
- (id)DHCPServerID;
- (void)stopEventMonitoring;
- (id)IPv6Router;
- (id)__DHCPv6StateConfig;
- (id)initWithInterfaceName:(id)a0;
- (id)__DHCPInfo;
- (id)__proxiesSetupConfig;
- (id)serviceName;
- (BOOL)isServiceEnabled;
- (id)DNSServerAddresses;
- (id)IPv6NetworkSignature;
- (id)__DHCPStateConfig;
- (void)__refreshNotificationKeys;
- (id)__IPv6SetupConfig;
- (id)DHCPv6ServerID;
- (id)DHCPLeaseExpirationTimestamp;
- (id)__DNSSetupConfig;
- (void)startEventMonitoring;
- (id)IPv4ARPResolvedHardwareAddress;
- (BOOL)refreshServiceID;
- (id)IPv4NetworkSignature;
- (void).cxx_destruct;
- (void)restartEventMonitoring;
- (id)IPv6ConfigMethod;
- (id)DHCPLeaseStartTimestamp;
- (id)IPv4ARPResolvedIPAddress;
- (void)dealloc;
- (id)__IPv6StateConfig;
- (BOOL)__updateServiceID;
- (id)__IPv4SetupConfig;
- (id)__DNSStateConfig;
- (id)IPv4ConfigMethod;
- (id)DNSDomainName;
- (BOOL)__refreshServiceID;

@end
