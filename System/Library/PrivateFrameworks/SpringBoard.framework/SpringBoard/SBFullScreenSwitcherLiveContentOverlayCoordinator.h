@class SBSwitcherController, NSString, SBSceneManager, NSMutableDictionary, SBSwitcherCoordinatedLayoutStateTransitionContext, SBWindowScene, NSMutableArray;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBFullScreenSwitcherLiveContentOverlayCoordinator : NSObject <SBFullScreenSwitcherSceneLiveContentOverlayDelegate, SBSwitcherLiveContentOverlayCoordinating>

@property (readonly, weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene;
@property (readonly, weak, nonatomic, getter=_sceneManager) SBSceneManager *sceneManager;
@property (copy, nonatomic) NSString *keyboardFocusSceneID;
@property (copy, nonatomic) NSString *sceneIDForTargetOfKeyboardShortcuts;
@property (copy, nonatomic) NSString *bundleIDForTargetOfKeyboardShortcuts;
@property (retain, nonatomic) NSMutableDictionary *appLayoutToLiveContentOverlayContext;
@property (retain, nonatomic) NSMutableArray *visibleAlwaysLiveAppLayouts;
@property (retain, nonatomic) SBSwitcherCoordinatedLayoutStateTransitionContext *currentCoordinatedLayoutStateTransitionContext;
@property (readonly, weak, nonatomic) SBSwitcherController *switcherController;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (void)cleanUpAfterCoordinatedLayoutStateTransitionWithContext:(id)a0;
- (void)prepareForCoordinatedLayoutStateTransitionWithContext:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1;
- (id)appLayoutForKeyboardFocusedScene;
- (void)willRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1 alongsideContainerView:(id)a2 animated:(BOOL)a3;
- (void)_updateAlwaysLiveSceneContentOverlays;
- (long long)_calculateSBSDisplayLayoutElementRoleForDisplayItem:(id)a0 inAppLayout:(id)a1;
- (void)fullScreenSwitcherSceneLiveContentOverlay:(id)a0 tappedStatusBar:(id)a1 tapActionType:(long long)a2;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (BOOL)wantsEdgeProtectForHomeGestureForAppLayout:(id)a0;
- (void)appLayoutWillBecomeVisible:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void)_addOverlay:(id)a0 forAppLayout:(id)a1 animated:(BOOL)a2;
- (BOOL)performSwitcherKeyboardShortcutAction:(long long)a0;
- (void)_updateFullScreenDisplayLayoutElementsForActiveAppLayouts:(id)a0 inAppLayout:(id)a1;
- (BOOL)_shouldAnimateAddingLiveContentOverlayForTransitionContext:(id)a0 leafAppLayout:(id)a1;
- (void)_removeOverlayForAppLayout:(id)a0 animated:(BOOL)a1;
- (void)_updatePortaledSceneLiveContentOverlays;
- (id)_newLiveContentOverlayForApplicationContext:(id)a0 layoutRole:(long long)a1 sbsDisplayLayoutRole:(long long)a2;
- (void)_presentTransientErrorMessageIfNeededForLayoutStateTransitionContext:(id)a0 medusaViewController:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_shouldShowSplitViewNotSupportedMessageForLayoutStateTransitionContext:(id)a0 medusaViewController:(id)a1;
- (void)itemContainerForAppLayout:(id)a0 willBeReusedForAppLayout:(id)a1;
- (BOOL)wantsHomeAffordanceAutoHideForAppLayout:(id)a0;
- (BOOL)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)a0;
- (id)initWithSwitcherController:(id)a0;
- (long long)_existingOverlayTypeForAppLayout:(id)a0;
- (void)appLayoutDidBecomeHidden:(id)a0;
- (void)_configureLiveContentOverlayView:(id)a0 forTransitionContext:(id)a1 layoutRole:(long long)a2 sbsDisplayLayoutRole:(long long)a3;
- (BOOL)_canTransitionToOverlayType:(long long)a0 forAppLayout:(id)a1;
- (BOOL)_shouldShowMultipleWindowsNotSupportedMessageForLayoutStateTransitionContext:(id)a0 medusaViewController:(id)a1;

@end
