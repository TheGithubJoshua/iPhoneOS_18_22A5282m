@class NSString, CBPairingAgent, NSData, NSMutableDictionary, CBXpcConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate> {
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cnxDict;
}

@property (class, readonly, nonatomic) long long authorization;

@property (nonatomic) long long state;
@property (nonatomic) BOOL tccComplete;
@property (readonly, retain, nonatomic) CBPairingAgent *sharedPairingAgent;
@property (copy, nonatomic) NSData *advertisingAddress;
@property (readonly, nonatomic) long long advertisingAddressType;
@property (copy, nonatomic) NSData *nonConnectableAdvertisingAddress;
@property (readonly, nonatomic) long long nonConnectableAdvertisingAddressType;
@property (readonly) NSString *localAddressString;
@property (readonly) NSString *localName;
@property (readonly, nonatomic) long long authorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)tccAvailable;

- (id)getWhbLocalIdForRemoteId:(id)a0;
- (id)peerWithInfo:(id)a0;
- (void)setWhbLocalId:(id)a0 forRemoteId:(id)a1;
- (BOOL)sendMsg:(unsigned short)a0 args:(id)a1;
- (void)extractLocalDeviceStatesDictionary:(id)a0;
- (void)triggerBTErrorReport:(long long)a0;
- (BOOL)getCBPrivacySupported;
- (id)createCnxWithInfo:(id)a0;
- (void)handleLocalDeviceStateUpdatedMsg:(id)a0;
- (void)xpcConnectionDidReset;
- (id)sendDebugSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)closeL2CAPChannelForPeerUUID:(id)a0 withPsm:(unsigned short)a1;
- (void)doneWithTCC;
- (void)xpcConnectionIsInvalid;
- (id)initInternal;
- (BOOL)isMsgAllowedAlways:(unsigned short)a0;
- (void)startWithQueue:(id)a0 options:(id)a1 sessionType:(int)a2;
- (id)sharedPairingAgent;
- (id)getCurrentQueue;
- (void)removeWhbRemoteId:(id)a0;
- (id)getCnxInstanceForIdentifier:(id)a0;
- (void)performTCCCheck:(id)a0;
- (void)handleStateUpdatedMsg:(id)a0;
- (void)setWHBMsgReplyHandler:(id /* block */)a0;
- (id)sendSyncMsg:(unsigned short)a0 args:(id)a1;
- (BOOL)sendMsg:(unsigned short)a0 args:(id)a1 withReply:(id /* block */)a2;
- (void)removeCnxInstanceForIdentifier:(id)a0;
- (void)setConnectionTargetQueue:(id)a0;
- (void)didReceiveForwardedMessageForCBManager:(id)a0;
- (void)handlePairingAgentMsg:(unsigned short)a0 args:(id)a1;
- (void)_handleAdvertisingAddressChanged:(id)a0;
- (void)retrieveSupportedResources:(id)a0 subKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)sendRawCommand:(unsigned short)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)a0 args:(id)a1;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)a0;
- (BOOL)sendDebugMsg:(unsigned short)a0 args:(id)a1;
- (void).cxx_destruct;
- (void)handleMsg:(unsigned short)a0 args:(id)a1;
- (void)dealloc;

@end
