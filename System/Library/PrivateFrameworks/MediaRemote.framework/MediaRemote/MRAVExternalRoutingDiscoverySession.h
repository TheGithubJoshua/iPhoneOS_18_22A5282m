@class MRAVEndpoint, MRExternalDevice, MRAVRoutingDiscoverySessionConfiguration;

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
    id _externalDeviceDiscoveryToken;
}

@property (retain, nonatomic) MRAVEndpoint *destination;
@property (retain, nonatomic) MRExternalDevice *externalDevice;

- (BOOL)devicePresenceDetected;
- (unsigned int)endpointFeatures;
- (id)initWithConfiguration:(id)a0;
- (id)availableOutputDevices;
- (unsigned int)discoveryMode;
- (id)availableEndpoints;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)destinationOutputDeviceUID;

@end
