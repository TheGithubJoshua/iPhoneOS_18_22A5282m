@class NSMapTable, NSString, RBSProcessIdentity, SBFSceneWorkspaceDefaultDelegate, FBProcess, SBFSceneWorkspaceController, NSMutableArray;
@protocol BSInvalidatable;

@interface SBSystemUISceneController : NSObject <FBProcessManagerObserver, FBProcessObserver, SBScenePresentingDelegate, SBFSceneWorkspaceControlling, BSDescriptionProviding> {
    FBProcess *_clientProcess;
    unsigned long long _sceneIDGeneration;
    id<BSInvalidatable> _stateCaptureInvalidatable;
    NSMutableArray *_sceneControllers;
    NSMapTable *_presentersMap;
    NSMapTable *_sceneControllersByWindowScene;
}

@property (retain, nonatomic) SBFSceneWorkspaceDefaultDelegate *sceneWorkspaceControllerDelegate;
@property (readonly, nonatomic) SBFSceneWorkspaceController *sceneWorkspaceController;
@property (readonly, nonatomic) RBSProcessIdentity *clientProcessIdentity;
@property (readonly, nonatomic) long long sceneVendingPolicy;
@property (readonly, copy, nonatomic) NSString *traitsRole;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, nonatomic) double level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_setupInfo;

- (id)addPresenter:(id)a0;
- (id)_newSceneControllerForWindowScene:(id)a0 sceneRequestOptions:(id)a1 traitsRole:(id)a2 level:(double)a3;
- (void)processDidExit:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (void)processManager:(id)a0 didAddProcess:(id)a1;
- (void)windowSceneDidConnect:(id)a0;
- (void)windowSceneDidDisconnect:(id)a0;
- (void)processManager:(id)a0 didRemoveProcess:(id)a1;
- (BOOL)enumerateScenesWithBlock:(id /* block */)a0;
- (id)succinctDescription;
- (id)sceneFromIdentityToken:(id)a0;
- (void)createSceneForProcessIdentity:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)destroyScenesWithPersistentIdentifiers:(id)a0 processIdentity:(id)a1 completion:(id /* block */)a2;
- (id)sceneWorkspaceControllerForProcessIdentity:(id)a0;
- (id)__newSceneIdentifierForWindowScene:(id)a0;
- (void)_evaluateAvailablePresenters:(id)a0 forSceneControllers:(id)a1;
- (void)_invalidateSceneControllersForWindowScene:(id)a0;
- (id)_newAppSceneRequestOptionsForWindowScene:(id)a0 withBlueprintOptions:(id)a1;
- (id)_newSceneControllerForWindowScene:(id)a0 withSceneRequestOptions:(id)a1;
- (id)_orderedPresenters;
- (void)_setNeedsPresentersEvaluation;
- (id)initWithSceneWorkspaceIdentifier:(id)a0 clientProcessIdentity:(id)a1 sceneVendingPolicy:(long long)a2 traitsRole:(id)a3 jobLabel:(id)a4 level:(double)a5;
- (void)scenePresenterVisibilityDidChange:(id)a0;

@end
