@class MRCompanionConnectionController, NSArray, NSSet, NSString, AVOutputDeviceDiscoverySession, NSObject, MRAVRoutingDiscoverySession;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRCompanionConnectionControllerDelegate, MRExpanseManagerObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    MRAVRoutingDiscoverySession *_companionDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    unsigned int _clientProvidedTargetAudioSessionID;
    BOOL _hasRegisteredForExpanseMonitoring;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    BOOL _scheduledAvailableOutputDevicesReload;
    int _airplayActiveNotificationToken;
    BOOL _isLocalDeviceBeingAirplayedTo;
    MRCompanionConnectionController *_companionController;
    MRAVRoutingDiscoverySession *_externalDiscoverySession;
    id _externalDiscoverySessionToken;
}

@property (class, retain, nonatomic) NSArray *daemonVirtualDevices;

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;
@property (retain, nonatomic) NSSet *lastReportedClientIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)targetAudioSessionID;
- (void)_onQueue_setTargetAudioSessionID:(unsigned int)a0;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (void)_setupProxiedDiscoveryWithDestinationEndpoint:(id)a0;
- (BOOL)devicePresenceDetected;
- (unsigned int)endpointFeatures;
- (void)setDiscoveryMode:(unsigned int)a0 forClientIdentifiers:(id)a1;
- (void)controllerDidUndiscoverCompanion:(id)a0;
- (id)routingContextUID;
- (id)initWithConfiguration:(id)a0;
- (void)setRoutingContextUID:(id)a0;
- (id)availableOutputDevices;
- (unsigned int)discoveryMode;
- (BOOL)_shouldUseStandaloneDiscovery;
- (void)_scheduleReload;
- (id)_onQueue_reloadAvailableOutputDevices;
- (void)expanseManagerDidLeaveExpanseSession:(id)a0;
- (id)availableEndpoints;
- (void)_deviceInfoDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_onQueue_reload;
- (void)_setupStandaloneDiscovery;
- (void)setAvailableOutputDevices:(id)a0;
- (void)expanseManagerDidJoinExpanseSession:(id)a0;
- (void)_scheduleAvailableOutputDevicesReload;
- (void)controller:(id)a0 didDiscoverCompanion:(id)a1;
- (void)_handleDidJoinExpanse;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (void)setDiscoveryMode:(unsigned int)a0;

@end
