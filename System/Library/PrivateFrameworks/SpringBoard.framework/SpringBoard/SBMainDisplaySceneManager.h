@class SBDisplayReferenceModeMonitor, NSString, SBMainDisplayPolicyAggregator, FBSSceneClientSettingsDiffInspector, SBSuspendedUnderLockManager, SBFaceContactExpectationManager, NSMutableDictionary, SBMainDisplayLayoutState, UIApplicationSceneClientSettingsDiffInspector, NSMapTable;
@protocol SBIdleTimerCoordinating, BSInvalidatable;

@interface SBMainDisplaySceneManager : SBSceneManager <SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, BLSSceneDelegateWithActionHandlers, SBDisplayReferenceModeStatusObserver, SBLayoutStateSceneIdentityProviderDataSource, SBIdleTimerProviding> {
    SBMainDisplayPolicyAggregator *_policyAggregator;
    UIApplicationSceneClientSettingsDiffInspector *_internalClientSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_externalClientSettingsDiffInspector;
    long long _validInterfaceOrientation;
    unsigned long long _validInterfaceOrientationChangeCount;
    unsigned long long _processedValidInterfaceOrientationChangeCount;
    SBFaceContactExpectationManager *_faceContactExpectationManager;
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
    NSMutableDictionary *_sceneIdentifierToIgnoreSuspendedUnderLockAssertions;
    id<BSInvalidatable> stateCaptureInvalidatable;
    BOOL _isKeyboardDocked;
    SBDisplayReferenceModeMonitor *_displayReferenceModeMonitor;
    NSMapTable *_blsActionHandlersForScenes;
}

@property (readonly, nonatomic) SBMainDisplayPolicyAggregator *policyAggregator;
@property (readonly, nonatomic) SBMainDisplayLayoutState *currentLayoutState;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock;
@property (weak, nonatomic) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)removeObserver:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)removeActionHandler:(id)a0 forScene:(id)a1;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (void)_noteDidCommitUpdateForScene:(id)a0;
- (id)layoutStateManager;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventSuspendUnderLockForScene:(id)a1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (id)externalApplicationSceneHandles;
- (BOOL)_handleAction:(id)a0 forScene:(id)a1;
- (id)runningApplicationScenes:(id)a0;
- (id)_proposeIdleTimerBehaviorForReason:(id)a0;
- (BOOL)_isLockscreenHostingApp:(id)a0;
- (BOOL)_shouldTrackScenesForDeactivation;
- (BOOL)_isExternalForegroundScene:(id)a0;
- (id)sceneSnapshotRequestStrategyForSceneSnapshotRequestor:(id)a0;
- (void)_updateLevelAndBackgroundSettingsForScene:(id)a0 transitionContext:(id)a1;
- (void)addActionHandler:(id)a0 forScene:(id)a1;
- (id)existingSceneHandleForScene:(id)a0;
- (void)_scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)suspendedUnderLockManager:(id)a0 sceneHandleForScene:(id)a1;
- (void)displayReferenceModeStatusDidChangeForDisplayWithConfiguration:(id)a0 newStatus:(long long)a1;
- (void).cxx_destruct;
- (id)_appSceneClientSettingsDiffInspector;
- (void)_noteDidChangeToVisibility:(unsigned long long)a0 previouslyExisted:(BOOL)a1 forScene:(id)a2;
- (id)fetchOrCreateApplicationSceneHandleForRequest:(id)a0;
- (void)_scene:(id)a0 willUpdateWithSettings:(id)a1 transitionContext:(id)a2;
- (id)existingSceneHandleForSceneIdentity:(id)a0;
- (id)suspendedUnderLockManagerVisibleScenes:(id)a0;
- (void)_keyboardWillChangeFrame:(id)a0;
- (id)acquireIgnoreSuspendedUnderLockAssertionForSceneIdentifier:(id)a0 reason:(id)a1;
- (id)initWithReference:(id)a0 sceneIdentityProvider:(id)a1 presentationBinder:(id)a2 snapshotBehavior:(unsigned long long)a3;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventUnderLockForScene:(id)a1;
- (id)initWithReference:(id)a0 sceneIdentityProvider:(id)a1 presentationBinder:(id)a2;
- (BOOL)_shouldAutoHostScene:(id)a0;
- (void)dealloc;
- (id)externalForegroundApplicationSceneHandles;
- (id)existingSceneHandleForPersistenceIdentifier:(id)a0;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)a0;
- (void)_scene:(id)a0 interceptUpdateWithNewSettings:(id)a1;
- (BOOL)_shouldFenceTransitionForScene:(id)a0 updatedClientSettingsDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)_externalClientSettingsDiffInspector;
- (void)addObserver:(id)a0;
- (void)setSuspendedUnderLock:(BOOL)a0 alongsideWillChangeBlock:(id /* block */)a1 alongsideDidChangeBlock:(id /* block */)a2;
- (id)_internalClientSettingsDiffInspector;
- (id)_windowScene;

@end
