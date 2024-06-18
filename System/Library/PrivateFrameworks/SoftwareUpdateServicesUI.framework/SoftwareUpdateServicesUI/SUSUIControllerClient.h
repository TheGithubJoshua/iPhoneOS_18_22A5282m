@class NSString, NSXPCConnection;

@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface> {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_invalidateConnection;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)_noteConnectionDropped;
- (void)_connectToServerIfNecessary;
- (id)_remoteInterface;
- (void)_noteServerExiting;
- (BOOL)createKeybagWithSecret:(id)a0;
- (void)getPasscodePolicy:(id /* block */)a0;

@end
