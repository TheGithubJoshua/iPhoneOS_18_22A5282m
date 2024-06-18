@class NSXPCConnection;

@interface LPLinkSnapshotGenerator : NSObject {
    NSXPCConnection *_connectionToService;
    BOOL _active;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)snapshotForMetadata:(id)a0 configurations:(id)a1 completionHandler:(id /* block */)a2;

@end
