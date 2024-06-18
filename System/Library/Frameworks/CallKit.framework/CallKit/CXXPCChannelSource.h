@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (id)initWithClient:(id)a0;
- (id)vendorProtocolDelegate;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)bundleURL;
- (BOOL)isConnected;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)localizedName;
- (void).cxx_destruct;
- (id)bundleIdentifier;

@end
