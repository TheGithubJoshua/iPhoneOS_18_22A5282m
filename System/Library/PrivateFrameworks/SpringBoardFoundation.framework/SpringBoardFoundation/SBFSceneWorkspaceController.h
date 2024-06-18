@class NSString, FBSceneWorkspace;
@protocol SBFSceneWorkspaceControllerDelegate;

@interface SBFSceneWorkspaceController : NSObject <BSInvalidatable, BSDescriptionProviding> {
    FBSceneWorkspace *_sceneWorkspace;
}

@property (readonly, copy, nonatomic) NSString *sceneWorkspaceIdentifier;
@property (readonly, weak, nonatomic) id<SBFSceneWorkspaceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (BOOL)enumerateScenesWithBlock:(id /* block */)a0;
- (id)succinctDescription;
- (id)sceneFromIdentityToken:(id)a0;
- (void)createSceneForProcessIdentity:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
