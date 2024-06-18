@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (id)IPv4SubnetMasks;
- (id)IPv4Router;
- (id)init;
- (id)IEEE80211NetworkInterfacesNames;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (id)__networkInterfaceStateConfig;
- (id)IPv6Router;
- (id)DNSServerAddresses;
- (void)__startEventMonitoring;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)IPv4ServiceName;
- (id)DNSSearchDomains;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (id)IPv6PrefixLengths;
- (id)IPv4InterfaceName;
- (void)startEventMonitoring;
- (id)IPv6InterfaceName;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (void).cxx_destruct;
- (id)IPv6ServiceID;
- (id)__nameForServiceWithID:(id)a0;
- (void)restartEventMonitoring;
- (id)__DNSGlobalStateConfig;
- (id)__IPv6GlobalStateConfig;
- (void)dealloc;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)networkInterfacesNames;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (id)IPv6ServiceName;
- (id)__IPv4GlobalStateConfig;
- (id)IPv4ServiceID;
- (id)DNSDomainName;

@end
