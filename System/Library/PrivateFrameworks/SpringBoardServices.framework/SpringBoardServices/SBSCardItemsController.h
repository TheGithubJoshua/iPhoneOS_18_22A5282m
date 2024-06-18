@class NSString, NSXPCConnection;

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface> {
    NSString *_identifier;
    NSXPCConnection *_connection;
    BOOL _connected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateConnection;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setCardItems:(id)a0;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)getCardItemsWithHandler:(id /* block */)a0;
- (void)_noteConnectionDropped;
- (void)_connectToServerIfNecessary;

@end
