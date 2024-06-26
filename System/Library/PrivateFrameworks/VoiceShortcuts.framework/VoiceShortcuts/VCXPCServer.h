@class VCCKShortcutSyncCoordinator, NSString, NSXPCListenerEndpoint, WFWorkflowRunCoordinator, VCDaemonXPCEventHandler, WFTriggerManager, WFTriggerRegistrar, NSXPCListener, VCVoiceShortcutManager;
@protocol WFDatabaseProvider, VCSyncDataEndpoint;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate>

@property (readonly, nonatomic) BOOL skipEntitlementsCheck;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar;
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator;
@property (readonly, nonatomic) VCCKShortcutSyncCoordinator *syncCoordinator;
@property (readonly, nonatomic) id<VCSyncDataEndpoint> syncDataEndpoint;
@property (readonly, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)a0;
- (id)initWithXPCListener:(id)a0 databaseProvider:(id)a1 triggerRegistrar:(id)a2 syncCoordinator:(id)a3 syncDataEndpoint:(id)a4 runCoordinator:(id)a5 eventHandler:(id)a6;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDatabaseProvider:(id)a0 triggerRegistrar:(id)a1 syncCoordinator:(id)a2 syncDataEndpoint:(id)a3 runCoordinator:(id)a4 eventHandler:(id)a5;

@end
