@class NSXPCConnection;

@interface CXNotificationServiceExtensionVoIPXPCClient : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestApplicationLaunchForIncomingCall:(id)a0 completion:(id /* block */)a1;
- (BOOL)requestDidArriveFromExtensionPoint;
- (BOOL)taskHasEntitlement:(id)a0;

@end
