@class NSString, ServiceState;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (retain, nonatomic) ServiceState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)withinQueuePermanentShutdownReason;
- (id)remoteObjectProtocol;
- (void)stopUpdatingLocation;
- (id)initWithConnection:(id)a0;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)a0;
- (id)endpointName;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)withinQueueInvalidateState;
- (void)withinQueueReinitializeRemoteState;
- (BOOL)withinQueueCanReinitializeRemoteState;
- (id)initWithApiKey:(id)a0;
- (void)clVisionNotificationAvailable:(id)a0;
- (void)gpsEstimateAvailable:(id)a0;
- (void)gpsSignalQualityAvailable:(id)a0;
- (id)initWithApiKey:(id)a0 onServer:(id)a1;
- (void)outdoorLocationAvailable:(id)a0;
- (void)playbackDatarun:(id)a0;
- (void)setApiKey:(id)a0;
- (void)setApiKey:(id)a0 onServer:(id)a1;
- (void)startUpdatingLocationAtLocation:(id)a0;
- (void)withinQueueSetDelegate:(id)a0;

@end
