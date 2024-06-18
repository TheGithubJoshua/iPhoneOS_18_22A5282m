@class CBManager, NSUUID;

@interface CBPeer : NSObject <NSCopying>

@property (nonatomic) unsigned long long mtuLength;
@property (nonatomic) long long pairingState;
@property (nonatomic) long long hostState;
@property (nonatomic) BOOL isLinkEncrypted;
@property (nonatomic) long long role;
@property (weak, nonatomic) CBManager *manager;
@property (nonatomic) unsigned char connectedTransport;
@property (readonly, nonatomic) NSUUID *identifier;

- (void)untag:(id)a0;
- (id)peerStateToString:(long long)a0;
- (unsigned long long)hash;
- (void)handleMTUChanged:(id)a0;
- (void)sendInternalMsg:(int)a0 args:(id)a1;
- (void)tag:(id)a0;
- (void).cxx_destruct;
- (void)handleLinkEncryptionChanged:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)handleMsg:(int)a0 args:(id)a1;
- (id)sendInternalSyncMsg:(int)a0 args:(id)a1;
- (BOOL)hasTag:(id)a0;
- (void)handleHostStateUpdated:(id)a0;
- (id)initWithInfo:(id)a0 manager:(id)a1;

@end
