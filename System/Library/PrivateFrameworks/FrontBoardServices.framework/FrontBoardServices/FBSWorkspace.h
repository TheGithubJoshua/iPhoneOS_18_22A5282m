@class BSServiceConnectionEndpointMonitor, NSArray, NSString, FBSSerialQueue, NSMutableDictionary, NSObject, BSServiceConnectionEndpoint;
@protocol FBSWorkspaceDelegate, OS_dispatch_queue;

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding> {
    FBSSerialQueue *_callOutQueue;
    id<FBSWorkspaceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_identifierToScenesSource;
    BSServiceConnectionEndpointMonitor *_connectionEndpointMonitor;
}

@property (readonly, nonatomic) id<FBSWorkspaceDelegate> delegate;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint;
@property (readonly, copy, nonatomic) NSArray *scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_registerBlockForWorkspaceCreation:(id /* block */)a0;
+ (id)_sharedWorkspaceIfExists;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (id)succinctDescription;
- (id)_initWithOptions:(id)a0;
- (void)setDelegate:(id)a0;
- (void)_activate:(BOOL)a0;
- (void)_queue_registerSource:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)_initWithSerialQueue:(id)a0;
- (id)_queue_scenesClientForEndpoint:(id)a0 creatingIfNecessary:(BOOL)a1;
- (void)_queue_unregisterSource:(id)a0;
- (void)_registerSource:(id)a0;
- (void)_registerSourceEndpoint:(id)a0;
- (void)_unregisterSource:(id)a0;
- (void)monitor:(id)a0 didReceiveEndpoint:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)monitor:(id)a0 willLoseEndpoint:(id)a1;
- (void)requestDestructionOfScene:(id)a0 withCompletion:(id /* block */)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_calloutQueue_executeCalloutFromSource:(id)a0 withBlock:(id /* block */)a1;
- (void)requestSceneCreationWithIdentifier:(id)a0 initialClientSettings:(id)a1 completion:(id /* block */)a2;
- (void)requestSceneCreationWithInitialClientSettings:(id)a0 completion:(id /* block */)a1;
- (void)requestSceneFromEndpoint:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (id)sceneWithIdentifier:(id)a0;
- (void)_activate;
- (id)initWithSerialQueue:(id)a0;

@end
