@class FBSceneManager, NSString, FBSSceneSettings, FBScene, FBSSceneDefinition, FBSSceneTransitionContext, FBSSceneSpecification, FBWaitForSceneDestructionTransaction, FBSSceneParameters;
@protocol FBSynchronizedTransactionDelegate;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneObserver, FBSynchronizedTransaction> {
    FBSceneManager *_sceneManager;
    FBSSceneDefinition *_definition;
    FBSSceneParameters *_parameters;
    FBWaitForSceneDestructionTransaction *_destructionTransaction;
    unsigned long long _transactionID;
    BOOL _readyToCommit;
    BOOL _didCommit;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneSpecification *specification;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (readonly, nonatomic) BOOL destroyed;
@property (nonatomic) BOOL waitsForSceneCommit;
@property (readonly, nonatomic) FBSSceneSettings *newSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (void)_childTransactionDidComplete:(id)a0;
- (void)removeObserver:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 process:(id)a1 parameters:(id)a2 transitionContext:(id)a3;
- (BOOL)isReadyForSynchronizedCommit;
- (BOOL)_canBeInterrupted;
- (id)specification;
- (void)_didComplete;
- (void)_commitSceneOrWait;
- (id)_customizedDescriptionProperties;
- (void)performSynchronizedCommit;
- (id)settings;
- (void)_begin;
- (void)_noteDidCreate;
- (void)_noteWillUpdate;
- (id)scene;
- (id)_initWithSceneDefinition:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)_performCommit;
- (id)initWithSceneToUpdate:(id)a0 newSettings:(id)a1 transitionContext:(id)a2;
- (void).cxx_destruct;
- (id)newSettings;
- (void)_updateScene;
- (id)initWithSceneDefinition:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)_noteDidCommit:(BOOL)a0;
- (void)dealloc;
- (void)_noteWillCommit;
- (void)addObserver:(id)a0;
- (void)_commitSceneUpdate:(id /* block */)a0;
- (void)_createScene;

@end
