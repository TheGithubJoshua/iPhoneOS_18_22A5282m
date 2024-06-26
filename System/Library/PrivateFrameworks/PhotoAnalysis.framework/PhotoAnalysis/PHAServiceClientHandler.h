@class PHAExecutive, NSXPCConnection, NSString, NSMutableDictionary, PHAManager;

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAServiceOperationListener, PLPhotoAnalysisServiceProtocol> {
    NSString *_clientBundleID;
    NSMutableDictionary *_operationsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) PHAManager *photoAnalysisManager;
@property (retain) PHAExecutive *executive;
@property (retain) id serviceUnavailableHandler;
@property (readonly) NSString *clientBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (BOOL)isPhotos;
- (id)init;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)operationWillStart:(id)a0;
- (id)contextInformationFromInvocation:(id)a0;
- (void)addOperation:(id)a0;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (id)libraryURLFromContextInformation:(id)a0;
- (void)operationDidFinish:(id)a0;
- (void)xpcHandlerInvalidate;
- (void).cxx_destruct;
- (void)handleOperation:(id)a0;
- (void)setJobProcessingConstraintsWithValues:(id)a0 mask:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)cancelOperationsWithIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)managerForInvocation:(id)a0 contextInformation:(id)a1;
- (BOOL)isplphotosctl;
- (void)upgradePosterConfigurationWithAssetDirectory:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (id)forwardingTargetForInvocation:(id)a0 contextInformation:(id)a1 cancelBackgroundActivities:(BOOL *)a2;
- (void)submitBlockToExecutiveStateQueue:(id /* block */)a0;
- (id)wallpaperUpgradeSession;
- (id)initWithXPCConnection:(id)a0 executive:(id)a1;
- (void)removeClientFromExecutiveIfNeeded;

@end
