@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkInterface : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *hardwareAddress;
@property (copy) id /* block */ eventHandler;

- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (id)IPv4SubnetMasks;
- (id)__IPv4StateConfig;
- (id)init;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (id)initWithInterfaceName:(id)a0;
- (id)__networkInterfaceHardwareAddress;
- (void)__startEventMonitoring;
- (BOOL)isLinkActive;
- (id)IPv6PrefixLengths;
- (void)startEventMonitoring;
- (void).cxx_destruct;
- (void)restartEventMonitoring;
- (id)IPv6Flags;
- (void)dealloc;
- (id)__IPv6StateConfig;
- (id)IPv4BroadcastAddresses;
- (id)airPortSetupConfiguration;
- (id)airPortStateConfiguration;
- (id)__linkStateConfig;

@end
