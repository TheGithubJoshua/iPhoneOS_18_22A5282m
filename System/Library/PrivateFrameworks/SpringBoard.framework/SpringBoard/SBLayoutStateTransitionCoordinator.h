@class SBLayoutStateTransitionContext, NSString, NSPointerArray, SBWindowScene, _SBDefaultSceneEntityFrameProvider;
@protocol SBLayoutStateTransitionSceneEntityFrameProvider;

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate> {
    NSPointerArray *_observerPointerArray;
    _SBDefaultSceneEntityFrameProvider *_defaultSceneEntityFrameProvider;
}

@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (weak, nonatomic) id<SBLayoutStateTransitionSceneEntityFrameProvider> sceneEntityFrameProvider;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) SBLayoutStateTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (id)initWithWindowScene:(id)a0;
- (void)willEndTransition;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationTransitionContext:(id)a0 frameForApplicationSceneEntity:(id)a1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)a0;
- (void)addObserver:(id)a0;
- (void)endTransitionWithError:(id)a0;
- (void)beginTransitionForWorkspaceTransaction:(id)a0;

@end
