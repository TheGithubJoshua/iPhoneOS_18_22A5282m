@class NSXPCConnection, NSXPCInterface;

@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer> {
    BOOL _hasValidConnection;
    NSXPCConnection *_xpcConnection;
}

@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonMuxerInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientMuxerInterface;

@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)sharedXPCConnection;

- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)a0 exportedProxy:(id)a1 synchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getDaemonTestServerManagerProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)_init;
- (void)resetConnection;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id /* block */)a0;

@end
