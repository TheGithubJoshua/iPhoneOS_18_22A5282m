@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (void)retrieveLocationRelevancyDurationWithCompletionHandler:(id /* block */)a0;
- (id)withinQueuePermanentShutdownReason;
- (id)remoteObjectProtocol;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)a0;
- (void)doSynchronousXPC:(id /* block */)a0 description:(const char *)a1 waitForever:(BOOL)a2;
- (void)numFloors:(id /* block */)a0;
- (id)endpointName;
- (void)prefetchSynchronous:(id)a0;
- (void)withinQueueInvalidateState;
- (void)onQueuePrefetch:(id)a0 callback:(id /* block */)a1 when:(unsigned char)a2;
- (void)withinQueueReinitializeRemoteState;
- (void)onQueueShutdown;
- (void)onQueueNumFloors:(id /* block */)a0;
- (void)prefetch:(id)a0;
- (void)eraseEverything;
- (void)onQueueEraseEverything:(id /* block */)a0;
- (BOOL)withinQueueCanReinitializeRemoteState;

@end
