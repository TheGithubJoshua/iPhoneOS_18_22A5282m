@class NSSet, NSString, NSXPCConnection, NSURL;

@interface CXXPCCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) BOOL hasVoIPBackgroundMode;

- (id)init;
- (id)vendorProtocolDelegate;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)initWithConnection:(id)a0;
- (id)bundleURL;
- (BOOL)isConnected;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)localizedName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)bundleIdentifier;

@end
