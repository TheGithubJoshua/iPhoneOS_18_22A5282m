@class NSIndexSet, NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_nw_listener, IDSLinkDelegate;

@interface IDSNWLink : NSObject <IDSLink> {
    BOOL _isInvalidated;
    BOOL _wantsWiFi;
    BOOL _wantsCellular;
    BOOL _isDefaultPairedDevice;
    BOOL _transactionIDMismatchReported;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_nwtid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _clientUUID[16];
    NSObject<OS_nw_listener> *_listener;
    NSObject<OS_nw_listener> *_cellularListener;
    NSMutableArray *_recentQRServerList;
    NSMutableArray *_tokensForUDPConnectionInProgress;
    NSMutableArray *_cellularPortList;
    NSMutableArray *_queuedPeelOffs;
    NSMutableDictionary *_tokenToNWLinkConnection;
    NSMutableDictionary *_tokenToChildConnectionEvaluator;
    NSMutableDictionary *_interfaceIndexToNAT64LocalAddress;
    NSMutableDictionary *_portToExtraListener;
}

@property (nonatomic) unsigned short port;
@property (nonatomic) unsigned short cellularPort;
@property (nonatomic) BOOL useDefaultInterfaceOnly;
@property (retain, nonatomic) NSIndexSet *cellularInterfaceIndices;
@property (nonatomic) BOOL wifiAssistEnabled;
@property (nonatomic) BOOL connectedToQR;
@property (retain) NSString *cbuuid;
@property (retain) NSString *deviceUniqueID;
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (readonly) unsigned long long state;
@property (readonly) unsigned long long headerOverhead;
@property (weak) id<IDSLinkDelegate> delegate;
@property (weak) id<IDSLinkDelegate> alternateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)derivePSKFromSessionKey:(id)a0 salt:(id)a1;
+ (BOOL)isSkywalkDemuxSupported;

- (void)cleanup;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_cleanup:(BOOL)a0;
- (id)_findListenerWithLocalEndpoint:(id)a0;
- (void)_removeUDPConnectionInProgress:(id)a0;
- (unsigned int)_NAT64LocalAddressForInterfaceIndex:(unsigned int)a0;
- (id)_NWLinkConnectionForToken:(id)a0;
- (void)_addChildConnectionEvaluator:(id)a0 token:(id)a1;
- (void)_addExtraListener:(id)a0 port:(unsigned short)a1 isCellular:(BOOL)a2;
- (void)_addInterfaceIndex:(unsigned int)a0 NAT64LocalAddress:(unsigned int)a1;
- (void)_addNWLinkConnection:(id)a0 token:(id)a1;
- (void)_addToRecentQRServerList:(id)a0;
- (void)_addUDPConnectionInProgress:(id)a0;
- (id)_childConnectionEvaluatorForToken:(id)a0;
- (BOOL)_createChannelDataConnection:(id)a0;
- (BOOL)_createChannelDataConnectionForH2:(id)a0;
- (void)_createIndicationConnection:(id)a0;
- (id)_createNetworkInterfaceArrayWithIPVersion:(unsigned long long)a0 wantsWiFi:(BOOL)a1 wantsCellular:(BOOL)a2;
- (id)_createNewListenerWithLocalPort:(unsigned short *)a0;
- (void)_createUDPConnectionForNWLinkConnection:(id)a0 readyHandler:(id /* block */)a1;
- (BOOL)_doesUDPConnectionInProgressExist:(id)a0;
- (id)_extraListenerForPort:(unsigned short)a0;
- (BOOL)_findExistingCollidingQRConnection:(id)a0 remoteEndpoint:(id)a1 sessionID:(id)a2 localEndpointToUse:(id *)a3;
- (id)_findNewLocalEndpointForQRConnection:(id)a0;
- (void)_handleIncomingIndicationMessage:(id)a0;
- (void)_handleIncomingMessage:(id)a0 keepWaiting:(BOOL)a1;
- (void)_peelOffQUICConnection:(id)a0 type:(unsigned long long)a1 readyHandler:(id /* block */)a2;
- (void)_removeExtraListener:(unsigned short)a0;
- (void)_removeNWLinkConnection:(id)a0 token:(id)a1;
- (unsigned long long)_sendData:(id)a0 withPacketBuffer:(struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; unsigned int x13; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x14; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x15; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x16; unsigned short x17; unsigned char x18; int x19; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; BOOL x17; BOOL x18; BOOL x19; unsigned int x20; } x20[8]; char x21; char x22; int x23; double x24; unsigned char x25[16]; unsigned long long x26; unsigned long long x27; id x28; int x29; unsigned int x30; unsigned char x31[0]; } *)a1 NWLinkConnection:(id)a2;
- (BOOL)_setParameters:(id)a0 NWLinkConnection:(id)a1 sharePortWithListener:(BOOL)a2 isTCP:(BOOL)a3;
- (void)_setWiFiAssistStateForCellularLink:(id)a0 isEnabled:(BOOL)a1;
- (BOOL)_shouldAllowP2PConnectionTo:(id)a0 anotherRemoteEndpoint:(id)a1;
- (BOOL)connect:(int)a0 localAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 remoteAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a2 clientUUID:(unsigned char[16])a3 sessionID:(id)a4 relaySessionToken:(id)a5 relaySessionKey:(id)a6 randomSaltBlock:(id /* block */)a7 newLocalPort:(unsigned short *)a8 disconnectAfterUse:(BOOL)a9 readyHandler:(id /* block */)a10;
- (BOOL)connectTCP:(int)a0 localAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 remoteAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a2 clientUUID:(unsigned char[16])a3 sessionID:(id)a4 relaySessionToken:(id)a5 relaySessionKey:(id)a6 randomSaltBlock:(id /* block */)a7 newLocalPort:(unsigned short *)a8 disconnectAfterUse:(BOOL)a9 readyHandler:(id /* block */)a10;
- (id)copyChildConnectionIDForLocalAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 remoteAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 clientUniquePID:(unsigned long long)a2 sessionID:(id)a3 isRelay:(BOOL)a4 isCellular:(BOOL)a5;
- (id)copyCurrentNetworkInterfaces;
- (id)copyLinkStatsDict;
- (void)disconnectWithSessionID:(id)a0 localAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 remoteAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a2 waitTime:(double)a3 final:(BOOL)a4;
- (id)generateLinkReport:(double)a0 isCurrentLink:(BOOL)a1;
- (BOOL)getEffectiveSourceAddress:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a0 fromSourceAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 effectiveDestinationAddress:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2 fromDestinationAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a3 sessionID:(id)a4 isQRConnection:(BOOL)a5;
- (BOOL)hasListener;
- (id)initWithDeviceUniqueID:(id)a0 cbuuid:(id)a1;
- (id)newListenerWithClientUUID:(unsigned char[16])a0 wantsWiFi:(BOOL)a1 wantsCellular:(BOOL)a2;
- (void)removeChildConnectionEvaluatorForSessionID:(id)a0 localAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 remoteAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a2 isRelay:(BOOL)a3;
- (unsigned long long)sendPacketBuffer:(struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; unsigned int x13; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x14; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x15; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x16; unsigned short x17; unsigned char x18; int x19; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; BOOL x17; BOOL x18; BOOL x19; unsigned int x20; } x20[8]; char x21; char x22; int x23; double x24; unsigned char x25[16]; unsigned long long x26; unsigned long long x27; id x28; int x29; unsigned int x30; unsigned char x31[0]; } *)a0 toDeviceUniqueID:(id)a1 cbuuid:(id)a2;
- (unsigned long long)sendPacketBufferArray:(struct **)a0 arraySize:(int)a1 toDeviceUniqueID:(id)a2 cbuuid:(id)a3;
- (void)setWiFiAssistState:(BOOL)a0;

@end