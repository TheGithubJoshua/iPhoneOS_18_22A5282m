@class NSString;
@protocol NRNSXPCConnectionProtocol, NRXPCProxyDelegate;

@interface NRXPCProxy : NSObject {
    id<NRXPCProxyDelegate> _delegate;
    unsigned int _entitlementBitmask;
}

@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *appPath;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) id remoteObjectProxy;
@property (readonly, nonatomic) id<NRNSXPCConnectionProtocol> connection;
@property (nonatomic) BOOL monitorClientForSuspension;

+ (id)entitlements;
+ (id)clientExportedInterface;
+ (id)serverRemoteObjectInterface;
+ (id)machServiceName;
+ (id)serverExportedInterface;
+ (id)clientRemoteObjectInterface;
+ (BOOL)requireAnEntitlement;

- (BOOL)hasEntitlement:(id)a0;
- (void).cxx_destruct;
- (void)_invalidate;
- (BOOL)hasEntitlements;
- (id)initWithConnection:(id)a0 delegate:(id)a1 xpcTarget:(id)a2 entitlementBitmask:(unsigned int)a3;

@end
