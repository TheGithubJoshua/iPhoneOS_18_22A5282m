@class LSApplicationIdentity, NSString, SBWorkspaceApplicationSceneTransitionContext, SBPrivacyPreflightController, FBSMutableSceneParameters, SBWorkspaceTransitionRequest, SBApplicationSceneEntity, UIApplicationSceneSettings, UIApplicationSceneTransitionContext;
@protocol SBApplicationSceneUpdateTransactionDelegate;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {
    LSApplicationIdentity *_applicationIdentity;
    SBWorkspaceTransitionRequest *_request;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    FBSMutableSceneParameters *_sceneParameters;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    BOOL _suspendedActivation;
    SBPrivacyPreflightController *_privacyPreflightController;
    BOOL _requiresPreflight;
    id<SBApplicationSceneUpdateTransactionDelegate> _delegate;
}

@property (readonly, nonatomic) SBApplicationSceneEntity *applicationSceneEntity;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) UIApplicationSceneSettings *sceneSettings;
@property (nonatomic) BOOL shouldSendActivationResult;

- (void)_willFailWithReason:(id)a0;
- (void)_didComplete;
- (void)_willBegin;
- (id)_customizedDescriptionProperties;
- (id)_createUpdateTransactionForPreflightCompletion;
- (id)initWithApplicationSceneEntity:(id)a0 transitionRequest:(id)a1 delegate:(id)a2;
- (id)initWithApplicationSceneEntity:(id)a0 transitionRequest:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isReadyToLaunch;
- (void)_sceneResizeLayoutDidFinish:(id)a0;
- (void)_performSynchronizedCommit:(id)a0;
- (void)_sendActivationResultWithError:(id)a0;

@end
