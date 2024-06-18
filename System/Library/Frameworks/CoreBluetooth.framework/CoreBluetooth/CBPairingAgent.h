@protocol CBPairingAgentParentDelegate, CBPairingAgentDelegate;

@interface CBPairingAgent : NSObject

@property (weak, nonatomic) id<CBPairingAgentParentDelegate> parentManager;
@property (weak, nonatomic) id<CBPairingAgentDelegate> delegate;
@property (nonatomic) BOOL useOOBMode;

- (id)initWithParentManager:(id)a0;
- (void)pairPeer:(id)a0 useMITM:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)unpairPeer:(id)a0;
- (id)retrievePairedPeers;
- (void)handleUnpaired:(id)a0;
- (void)setOOBPairingEnabled:(BOOL)a0 forPeer:(id)a1;
- (void)handlePairingMessage:(unsigned short)a0 args:(id)a1;
- (void)pairPeer:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPeerMagicPaired:(id)a0;
- (id)retrieveOOBDataForPeer:(id)a0;
- (BOOL)isPeerPaired:(id)a0;
- (void)pairPeer:(id)a0 options:(id)a1;
- (BOOL)isPeerCloudPaired:(id)a0;
- (void)updateRegistration;
- (void)dealloc;
- (void)respondToPairingRequest:(id)a0 type:(long long)a1 accept:(BOOL)a2 data:(id)a3;
- (void)handlePairingCompleted:(id)a0;
- (void)handlePairingRequested:(id)a0;
- (void)unpairPeer:(id)a0 options:(id)a1;

@end
