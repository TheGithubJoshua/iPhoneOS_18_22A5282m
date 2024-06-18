@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AccessoryTransportPluginUSBHost : ACCTransportPlugin <ACCTransportPluginProtocol, ACCPlatformUSBHostPluginProtocol> {
    struct IONotificationPort { } *_iokitNotifyPort;
    unsigned int _iokitAddedIterator;
    unsigned int _iokitRemovedIterator;
    unsigned int temp;
    struct IONotificationPort { } *_iokitVIDPIDNotifyPort;
    unsigned int _iokitVIDPIDAddedIterator;
    unsigned int _iokitVIDPIDRemovedIterator;
}

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSMutableDictionary *accessoryConnections;
@property (retain, nonatomic) NSMutableDictionary *accessoryNativeUSBEndpoints;
@property (retain, nonatomic) NSMutableDictionary *activeEAInterfaces;
@property (retain, nonatomic) NSMutableDictionary *activeUSBCDCInterfaces;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessoryConnectionsLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activeEAInterfacesLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessoryNativeUSBEndpointsLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

+ (struct __CFDictionary { } *)_createVIDPIDMatchingDictionary;

- (void)initPlugin;
- (BOOL)configureUSBHostNCMInterface:(unsigned char)a0 asCarPlay:(BOOL)a1 forConnectionUUID:(id)a2;
- (void)VIDPIDServiceRemoved:(unsigned int)a0;
- (void)startPlugin;
- (BOOL)setNeedOutZLP:(BOOL)a0 maxOutLength:(unsigned int)a1 forConnectionUUID:(id)a2;
- (void)serviceRemoved:(unsigned int)a0;
- (BOOL)unlockUSBHostInterfacesForConnectionUUID:(id)a0;
- (void)configureIOKitVIDPID;
- (void)configureIOKit;
- (void)stopPlugin;
- (void)_handleCloseEASessionNotificationForEndpoint:(id)a0 connection:(id)a1;
- (BOOL)lockUSBHostInterfacesForConnectionUUID:(id)a0;
- (void)tearDownIOKit;
- (void)_handleOpenEASessionNotificationForEndpoint:(id)a0 connection:(id)a1;
- (void)VIDPIDServiceAdded:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)setUSBHostHIDInterface:(unsigned char)a0 withHIDFunction:(unsigned int)a1 forConnectionUUID:(id)a2;
- (void)_handleOpenSocketFromAccessoryToAppNotification:(id)a0;
- (void)tearDownIOKitVIDPID;
- (BOOL)sendOutgoingData:(id)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2;
- (void)startConfiguringIOKit;
- (void)serviceAdded:(unsigned int)a0;
- (void)_handleOpenSocketFromAppToAccessoryNotification:(id)a0;
- (BOOL)clearUSBHostHIDInterfacesForConnectionUUID:(id)a0;

@end
