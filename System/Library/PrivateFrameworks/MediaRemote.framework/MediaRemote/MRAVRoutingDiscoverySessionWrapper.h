@class NSMutableDictionary, MRAVRoutingDiscoverySessionConfiguration, MRAVRoutingDiscoverySession;

@interface MRAVRoutingDiscoverySessionWrapper : NSProxy {
    NSMutableDictionary *_endpointsChangedCallbacks;
    NSMutableDictionary *_endpointsAddedCallbacks;
    NSMutableDictionary *_endpointsRemovedCallbacks;
    NSMutableDictionary *_endpointsModifiedCallbacks;
    NSMutableDictionary *_outputDevicesChangedCallbacks;
    NSMutableDictionary *_outputDevicesAddedCallbacks;
    NSMutableDictionary *_outputDevicesRemovedCallbacks;
    NSMutableDictionary *_outputDevicesModifiedCallbacks;
    NSMutableDictionary *_endpointsTokensMap;
    NSMutableDictionary *_outputDevicesTokensMap;
    unsigned int _discoveryMode;
}

@property (retain, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *sharedSession;

- (void)updateObserversWithPreviousSession:(id)a0;
- (void)transferEndpointsChangedCallbacksFromSession:(id)a0 toSession:(id)a1;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (void)removeEndpointsModifiedCallback:(id)a0;
- (void)setAlwaysAllowUpdates:(BOOL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)removeOutputDevicesModifiedCallback:(id)a0;
- (void)removeEndpointsRemovedCallback:(id)a0;
- (void)removeOutputDevicesChangedCallback:(id)a0;
- (void)setRoutingContextUID:(id)a0;
- (void)setPopulatesExternalDevice:(BOOL)a0;
- (id)addOutputDevicesModifiedCallback:(id /* block */)a0;
- (id)addOutputDevicesRemovedCallback:(id /* block */)a0;
- (void)transferOutputDevicesModifiedCallbacksFromSession:(id)a0 toSession:(id)a1;
- (void)removeOutputDevicesRemovedCallback:(id)a0;
- (void)removeOutputDevicesAddedCallback:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeEndpointsChangedCallback:(id)a0;
- (unsigned int)discoveryMode;
- (id)addEndpointsRemovedCallback:(id /* block */)a0;
- (void)updateSharedSession;
- (void)removeEndpointsAddedCallback:(id)a0;
- (id)addOutputDevicesChangedCallback:(id /* block */)a0;
- (id)addEndpointsModifiedCallback:(id /* block */)a0;
- (id)addEndpointsAddedCallback:(id /* block */)a0;
- (void)transferCallbacksFromSession:(id)a0 toSession:(id)a1;
- (id)addOutputDevicesAddedCallback:(id /* block */)a0;
- (id)initWithSession:(id)a0 configuration:(id)a1;
- (id)addEndpointsChangedCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)transferEndpointsModifiedCallbacksFromSession:(id)a0 toSession:(id)a1;
- (void)transferEndpointsRemovedCallbacksFromSession:(id)a0 toSession:(id)a1;
- (void)transferEndpointsAddedCallbacksFromSession:(id)a0 toSession:(id)a1;
- (void)transferOutputDevicesRemovedCallbacksFromSession:(id)a0 toSession:(id)a1;
- (void)dealloc;
- (void)reevaluateDiscoveryModeForSession:(id)a0;
- (void)transferOutputDevicesChangedCallbacksFromSession:(id)a0 toSession:(id)a1;
- (void)setDiscoveryMode:(unsigned int)a0;
- (void)transferOutputDevicesAddedCallbacksFromSession:(id)a0 toSession:(id)a1;

@end
