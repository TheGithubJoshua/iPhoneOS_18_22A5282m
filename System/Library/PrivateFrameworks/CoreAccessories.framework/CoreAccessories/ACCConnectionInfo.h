@class NSString, NSXPCConnection, NSMutableDictionary, NSDictionary, NSLock;
@protocol ACCConnectionInfoConfigStreamDelegateProtocol, ACCConnectionInfoXPCServerProtocol, ACCConnectionInfoPrivateDelegateProtocol;

@interface ACCConnectionInfo : NSObject

@property (retain, nonatomic) NSString *providerUID;
@property (weak, nonatomic) id<ACCConnectionInfoPrivateDelegateProtocol> delegate;
@property (weak, nonatomic) id<ACCConnectionInfoConfigStreamDelegateProtocol> configStreamDelegate;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) NSLock *serverConnectionLock;
@property (retain, nonatomic) id<ACCConnectionInfoXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSLock *listLock;
@property (retain, nonatomic) NSMutableDictionary *connectionList;
@property (retain, nonatomic) NSMutableDictionary *endpointList;
@property (copy, nonatomic) id /* block */ configStreamGetResponseHandler;
@property (readonly) NSDictionary *accessoryFilterDictionary;

+ (id)accessoryDictionaryForLogging:(id)a0;
+ (id)sharedInstance;
+ (id)copyLocalizedAccessoryName:(id)a0;

- (void)accessoryConnectionDetached:(id)a0;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 properties:(id)a3 forConnection:(id)a4;
- (id)init;
- (id)copyLocalizedAccessoryNameFromDaemon:(id)a0;
- (void)accessoryProperty:(id)a0 forConnection:(id)a1 withReply:(id /* block */)a2;
- (void)accessoryConnectionInfoPropertyChanged:(id)a0 properties:(id)a1;
- (int)accessoryConnectionType:(id)a0;
- (void)getAccessoryUserName:(id)a0 withReply:(id /* block */)a1;
- (BOOL)registerDelegate:(id)a0;
- (void)setAccessoryUserName:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void)continueUserKeyErase:(id)a0 withSignature:(id)a1 andAccessoryNonce:(id)a2 forEndpoint:(id)a3 withReply:(id /* block */)a4;
- (void)handleInterceptData:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)notifyDelegateOfServerDisconnectAndCleanup;
- (void)copyUserPrivateKey:(id)a0 withReply:(id /* block */)a1;
- (void)cancelVendorKeyErase:(id)a0 withReply:(id /* block */)a1;
- (void)connectToServer;
- (void)continueVendorKeyErase:(id)a0 withSignature:(id)a1 andAccessoryNonce:(id)a2 forEndpoint:(id)a3 withReply:(id /* block */)a4;
- (void)accessoryProperty:(id)a0 forEndpoint:(id)a1 connection:(id)a2 withReply:(id /* block */)a3;
- (void)setPrivateNVMKeyValues:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void)setPublicNVMKeyValues:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)configStreamCategoryListReady:(id)a0 connection:(id)a1;
- (int)getInterceptCountForEndpoint:(id)a0 connection:(id)a1;
- (id)accessoryInfoForEndpointSync:(id)a0 connection:(id)a1;
- (void)sendData:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)accessoryEndpointDetached:(id)a0 forConnection:(id)a1;
- (BOOL)registerDelegate:(id)a0 withFilter:(id)a1;
- (void)accessoryInfoForConnection:(id)a0 withReply:(id /* block */)a1;
- (int)accessoryEndpointProtocolType:(id)a0 connection:(id)a1;
- (id)accessoryPropertySync:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (id)accessoryInfoForConnectionSync:(id)a0;
- (void)accessoryInfoForEndpoint:(id)a0 connection:(id)a1 withReply:(id /* block */)a2;
- (int)accessoryEndpointTransportType:(id)a0 connection:(id)a1;
- (void)dealloc;
- (void)interceptIncomingNTimes:(int)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)accessoryEndpointsForConnection:(id)a0 withReply:(id /* block */)a1;
- (void)configStreamCategoriesResponse:(id)a0 forEndpoint:(id)a1 connection:(id)a2 success:(BOOL)a3;
- (void)cancelUserKeyErase:(id)a0 withReply:(id /* block */)a1;
- (void)configStreamPropertyResponse:(unsigned char)a0 forCategory:(unsigned short)a1 forEndpoint:(id)a2 connection:(id)a3 value:(id)a4 success:(BOOL)a5;
- (void)provisionAccessoryForFindMy:(id)a0 withReply:(id /* block */)a1;
- (void)accessoryEndpointUpdate:(id)a0 protocol:(int)a1 properties:(id)a2 forConnection:(id)a3;
- (void)getPublicNVMKeyValues:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void)getPrivateNVMKeyValues:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void)accessoryEndpointInfoPropertyChanged:(id)a0 properties:(id)a1 forConnection:(id)a2;
- (void)configStreamPropertySetValue:(id)a0 forProperty:(unsigned char)a1 forCategory:(unsigned short)a2 forEndpoint:(id)a3 connection:(id)a4;
- (void)beginUserKeyErase:(id)a0 withReply:(id /* block */)a1;
- (void)beginVendorKeyErase:(id)a0 withReply:(id /* block */)a1;
- (BOOL)configStreamCategoriesRequest:(id)a0 connection:(id)a1 withReply:(id /* block */)a2;
- (void)resetPairingInformation:(id)a0 withReply:(id /* block */)a1;
- (void)accessoryConnectionAttached:(id)a0 type:(int)a1 info:(id)a2 properties:(id)a3;
- (void)getPairingStatus:(id)a0 withReply:(id /* block */)a1;
- (BOOL)configStreamPropertyRequest:(unsigned char)a0 forCategory:(unsigned short)a1 forEndpoint:(id)a2 connection:(id)a3 withReply:(id /* block */)a4;
- (id)accessoryPropertySync:(id)a0 forConnection:(id)a1;

@end
