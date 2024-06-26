@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol NSCopying;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProviderInternal, FBSceneClientProvider> {
    BOOL _workspaceInitialized;
    NSMutableArray *_pendingSceneCreatesBeforeFBSWorkspaceInitialization;
    NSMutableSet *_invalidationActions;
    NSMutableDictionary *_localSceneInfoByIdentity;
    NSMutableDictionary *_hostsByIdentity;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (id)hostProcess;
- (id)callOutQueue;
- (id)_init;
- (id)fbsSceneForScene:(id)a0;
- (id)sceneWithIdentity:(id)a0;
- (void).cxx_destruct;
- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)host:(id)a0 didReceiveActions:(id)a1;
- (void)registerInvalidationAction:(id)a0;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (id)registerHost:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 fromRemnant:(id)a3 error:(out id *)a4;
- (void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)a0 transitionContext:(id)a1;
- (id)fbsSceneWithIdentifier:(id)a0;
- (void)unregisterHost:(id)a0;
- (id)scenes;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (BOOL)canHaveAgent;

@end
