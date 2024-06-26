@class NSMutableSet, NSHashTable;
@protocol CBScalablePipeManagerDelegate;

@interface CBScalablePipeManager : CBManager {
    struct { unsigned char didRegisterEndpoint : 1; unsigned char didUnregisterEndpoint : 1; unsigned char pipeDidConnect : 1; unsigned char pipeDidDisconnect : 1; } _delegateFlags;
}

@property (readonly, retain, nonatomic) NSHashTable *pipes;
@property (weak, nonatomic) id<CBScalablePipeManagerDelegate> delegate;
@property (readonly, retain, nonatomic) NSMutableSet *identifiers;

- (void)unregisterEndpoint:(id)a0;
- (id)pipeForName:(id)a0 identifier:(id)a1;
- (void)handleEndpointRemoved:(id)a0;
- (void)registerEndpoint:(id)a0 type:(long long)a1 priority:(long long)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)sharedPairingAgent;
- (void)handlePipeDisconnected:(id)a0;
- (void)unregisterAllEndpoints;
- (void)handlePipeConnected:(id)a0;
- (void)orphanPipes;
- (void)handleEndpointAdded:(id)a0;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)a0;
- (void)setLinkRequirementsForPeer:(id)a0 withClientName:(id)a1 packetsPerSecond:(unsigned int)a2 inputBytesPerSecond:(unsigned int)a3 outputBytesPerSecond:(unsigned int)a4;
- (void)setLinkRequirementsForPeerWithLatency:(id)a0 latencyInMs:(unsigned int)a1 inputBytesPerSecond:(unsigned int)a2 outputBytesPerSecond:(unsigned int)a3;
- (void).cxx_destruct;
- (void)registerEndpoint:(id)a0 type:(long long)a1 priority:(long long)a2 transport:(long long)a3 requireEncryption:(BOOL)a4;
- (void)handleMsg:(unsigned short)a0 args:(id)a1;
- (void)dealloc;
- (void)registerEndpoint:(id)a0 type:(long long)a1 priority:(long long)a2 transport:(long long)a3;
- (void)setLinkRequirementsForPeer:(id)a0 packetsPerSecond:(unsigned int)a1 inputBytesPerSecond:(unsigned int)a2 outputBytesPerSecond:(unsigned int)a3;
- (void)handleHostStateUpdated:(id)a0;
- (void)registerEndpoint:(id)a0 type:(long long)a1 priority:(long long)a2 options:(id)a3;

@end
