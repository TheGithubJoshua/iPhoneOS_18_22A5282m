@class NSDictionary, NSHashTable, NSMutableArray, NSString, NSMutableSet, UIApplicationSceneDeactivationAssertion, SiriContinuitySource, SBWindowSceneStatusBarSettingsAssertion, SBStatusBarPartVisibilityAssertion, SBApplicationUserQuitMonitorServer, NSMutableDictionary, SBSwitcherModelRemovalResults, NSArray, BSSimpleAssertion, NSCountedSet, SBAppSwitcherModel, BSAbsoluteMachTimer, SBKeyboardHomeAffordanceAssertion, NSObject, SBAppLayout, SBSDisplayLayoutElement, SBSwitcherCoordinatedLayoutStateTransitionContext, SBFluidSwitcherGestureWorkspaceTransaction, SBWorkspaceKeyboardFocusController, SBFHomeGrabberSettings, SBFluidSwitcherSheetMetricsCache, SBAppSwitcherSettings, SBSwitcherDemoCommandsServer, SBSwitcherDemoFilteringController, FBScene, NSMapTable, SBAppSwitcherServiceSet;
@protocol OS_dispatch_queue, BSDefaultObserver, BSInvalidatable;

@interface SBMainSwitcherControllerCoordinator : NSObject <SBApplicationSupportServiceRequestPersistenceIdentifierProvider, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBAppInteractionEventSourceObserving, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBSwitcherViewControllerDelegate, SBButtonEventsHandler> {
    NSMapTable *_switcherControllersByWindowScene;
    NSMapTable *_lastMeaningfullyDifferentLayoutStatesByWindowScene;
    NSMapTable *_layoutStateTransitionCoordinatorsByWindowScene;
    NSMapTable *_currentWindowingModeCompatibleAppLayoutsByWindowScene;
    NSArray *_appLayouts;
    SBAppSwitcherServiceSet *_switcherServices;
    NSMutableDictionary *_appLayoutToAcquiredTransientOverlayViewController;
    NSMutableDictionary *_appLayoutToEligibleTransientOverlayViewController;
    NSCountedSet *_draggingAppLayouts;
    NSMutableSet *_windowDragSceneIdentifiers;
    SBFluidSwitcherGestureWorkspaceTransaction *_activeGestureTransaction;
    BOOL _liveContentOverlayUpdatesSuspended;
    SBAppLayout *_activeAppLayoutWhenActivatingMainSwitcher;
    SBSwitcherModelRemovalResults *_activeTransitionModelRemovalResults;
    NSDictionary *_activeTransitionModelRemovalAppLayoutToRemovalContext;
    SBSwitcherCoordinatedLayoutStateTransitionContext *_currentCoordinatedLayoutStateTransitionContext;
    SBAppSwitcherSettings *_settings;
    SBFluidSwitcherSheetMetricsCache *_sheetMetricsCache;
    NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
    NSMutableSet *_liveDisplayItemsBeingTerminated;
    BOOL _ignoreModelUpdates;
    id<BSInvalidatable> _deferRotationForAppSwitcherAssertion;
    id<BSInvalidatable> _lockKeyboardFocusAssertion;
    id<BSInvalidatable> _wallpaperScaleAssertion;
    SBAppLayout *_testItemForInsertion;
    unsigned long long _testItemInsertionIndex;
    SBAppSwitcherModel *_mainSwitcherModel;
    SBSwitcherDemoCommandsServer *_demoCommandsServer;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSArray *_demoFilteringHiddenAppLayouts;
    SBApplicationUserQuitMonitorServer *_userQuitMonitorServer;
    SiriContinuitySource *_siriSource;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id<BSInvalidatable> _keyboardFocusObserver;
    UIApplicationSceneDeactivationAssertion *_deactivatingScenesResignActiveAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_mainStatusBarAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_floatingStatusBarAssertion;
    SBStatusBarPartVisibilityAssertion *_containerStatusBarContentAssertion;
    BSSimpleAssertion *_preventSupplementalSnapshotsAssertion;
    BSAbsoluteMachTimer *_preventSupplementalSnapshotsInvalidationTimer;
    NSMutableSet *_asynchronousRenderingAssertions;
    NSHashTable *_asynchronousRenderingCachedSurfacesReasons;
    BSAbsoluteMachTimer *_disableCachingAsynchronousRenderingSurfacesTimer;
    NSMutableDictionary *_recentSwipeUpToKillTimestampsForAppLayouts;
    BOOL _isKeyboardShowing;
    FBScene *_medusaKeyboardScene;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    NSMutableSet *_activeBetaLaunchHandles;
    NSObject<OS_dispatch_queue> *_storeAppLaunchUIActivationQueue;
    SBSDisplayLayoutElement *_homeScreenDisplayLayoutElement;
    NSMapTable *_homeScreenDisplayLayoutElementAssertionsBySwitcherController;
    NSMapTable *_displayLayoutTransitionsBySwitcherController;
    id<BSDefaultObserver> _chamoisWindowingUIEverEnabledObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<BSInvalidatable> suspendWallpaperAnimationAssertion;
@property (readonly, copy, nonatomic) NSArray *coordinatedSwitcherControllers;
@property (readonly, nonatomic, getter=isAnySwitcherVisible) BOOL anySwitcherVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_shim_activeSwitcherController;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void)transactionDidComplete:(id)a0;
- (id)animationControllerForTransitionRequest:(id)a0;
- (BOOL)_shouldReverseLayoutDirection;
- (void)keyboardFocusController:(id)a0 externalSceneDidAcquireFocus:(id)a1;
- (void)eventSource:(id)a0 userTouchedApplication:(id)a1;
- (BOOL)switcherContentControllerIsFloatingApplicationSupported:(id)a0;
- (void)cleanUpAfterCoordinatedLayoutStateTransitionWithContext:(id)a0;
- (void)fluidSwitcherGestureManager:(id)a0 didPlatterizeWindowDragWithSceneIdentifier:(id)a1;
- (void)updateWindowVisibilityForSwitcherContentController:(id)a0;
- (void)prepareForCoordinatedLayoutStateTransitionWithContext:(id)a0;
- (void)_removeDisplayItem:(id)a0 forReason:(long long)a1 preferredAppLayoutForRemovalAnimationIfAny:(id)a2;
- (void)_performSceneDestructionForModelRemovalResults:(id)a0;
- (id)transitionEventForLayoutState:(id)a0 identifier:(id)a1 phase:(unsigned long long)a2 animated:(BOOL)a3;
- (id)currentCoordinatedLayoutStateTransitionContext;
- (void)fluidSwitcherGestureManager:(id)a0 tapReceivedForGrabberTongueAtEdge:(unsigned long long)a1;
- (void)setLiveContentOverlayUpdatesSuspended:(BOOL)a0;
- (void)_beginDisplayLayoutTransitionForSwitcherController:(id)a0 reason:(id)a1;
- (BOOL)dismissMainSwitcherNoninteractivelyAnimated:(BOOL)a0;
- (BOOL)fluidSwitcherGestureManagerSupportsFloatingApplication:(id)a0;
- (id)createWorkspaceTransientOverlayForAppLayout:(id)a0;
- (id)switcherContentController:(id)a0 transitionEventForLayoutState:(id)a1 identifier:(id)a2 phase:(unsigned long long)a3 animated:(BOOL)a4;
- (void)fluidSwitcherGestureManager:(id)a0 didEndGesture:(id)a1;
- (void)fluidSwitcherGestureManager:(id)a0 willEndDraggingWindowWithSceneIdentifier:(id)a1;
- (void)_insertAppLayouts:(id)a0 atIndexes:(id)a1 contentViewController:(id)a2 modelMutationBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fluidSwitcherGestureManager:(id)a0 clickReceivedForHomeGrabberView:(id)a1;
- (void)addAcquiredTransientOverlayViewController:(id)a0 forAppLayout:(id)a1 windowScene:(id)a2;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)canPerformKeyboardShortcutAction:(long long)a0 forBundleIdentifier:(id)a1 windowScene:(id)a2;
- (id)switcherControllerForDisplayItem:(id)a0;
- (void)switcherContentController:(id)a0 setContainerStatusBarHidden:(BOOL)a1 partsHidden:(unsigned long long)a2 animationDuration:(double)a3;
- (void)_endDisplayLayoutTransitionForSwitcherController:(id)a0;
- (void)_noteUIWillLock;
- (void)_presentStoreKitSheetIfNeededWithAppInfo:(id)a0 processHandle:(id)a1;
- (void)_removeAppLayout:(id)a0 forReason:(long long)a1;
- (BOOL)handleVoiceCommandButtonPress;
- (id)convertAppLayout:(id)a0 fromSwitcherController:(id)a1 toSwitcherController:(id)a2;
- (void)switcherContentController:(id)a0 setWallpaperStyle:(long long)a1;
- (void)switcherControllerWillUpdateWindowManagementStyle:(id)a0;
- (void)_insertAppLayout:(id)a0 atIndex:(unsigned long long)a1 contentViewController:(id)a2 modelMutationBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)windowSceneDidConnect:(id)a0;
- (BOOL)shouldPerformPreTransitionInsertionOfAppLayout:(id)a0 forTransitionWithContext:(id)a1;
- (id)mainSwitcherWindow;
- (BOOL)hasTransientOverlayAppLayoutsForWindowScene:(id)a0;
- (void)_buildAppLayoutCache;
- (void)removeAppLayoutForDisplayItem:(id)a0 shouldDestroyScene:(BOOL)a1;
- (void)windowSceneDidDisconnect:(id)a0;
- (long long)switcherInterfaceOrientationForContentController:(id)a0;
- (id)activeGestureTransaction;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)_dismissSwitcherNoninteractivelyToAppLayout:(id)a0 dismissFloatingSwitcher:(BOOL)a1 animated:(BOOL)a2;
- (void)_switcherServiceAdded:(id)a0;
- (void)_configureRequest:(id)a0 forSwitcherTransitionRequest:(id)a1 withEventLabel:(id)a2;
- (void)switcherContentController:(id)a0 setHomeScreenDimmingAlpha:(double)a1 withAnimationMode:(long long)a2 completion:(id /* block */)a3;
- (BOOL)handleHomeButtonPress;
- (BOOL)_isPerformingModelTransitionForReplacementAppLayout:(id)a0;
- (id)_activeDisplaySwitcherController;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleLockButtonPress;
- (id)_init;
- (BOOL)switcherContentController:(id)a0 displayItemSupportsCenterRole:(id)a1;
- (id)viewControllerForTransientOverlayAppLayout:(id)a0;
- (BOOL)switcherContentControllerControlsHomeScreenContents:(id)a0;
- (void)_warmAppInfoForAppsInList;
- (void)fluidSwitcherGestureManager:(id)a0 didUpdateGesture:(id)a1;
- (void)appSwitcherModel:(id)a0 didRemoveAppLayoutForFallingOffList:(id)a1;
- (BOOL)handleVolumeUpButtonPress;
- (void)switcherContentController:(id)a0 deletedDisplayItem:(id)a1 inAppLayout:(id)a2 forReason:(long long)a3;
- (void)_chamoisWindowingUIEverEnabledDefaultChangeHandler;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (id)_embeddedDisplaySwitcherController;
- (void)_updateAssertion:(id)a0;
- (BOOL)handleVolumeDownButtonPress;
- (void)_notifySwitcherControllersAppLayoutsDidChange;
- (BOOL)dismissAllSwitchersNoninteractivelyAnimated:(BOOL)a0;
- (id)draggingAppLayouts;
- (id)switcherControllerForAppLayout:(id)a0;
- (void)addAppLayoutForDisplayItem:(id)a0 windowScene:(id)a1 completion:(id /* block */)a2;
- (id)_entityForDisplayItem:(id)a0 displayIdentity:(id)a1;
- (BOOL)switcherContentControllerIsKeyboardHomeAffordanceAssertionCurrentlyBeingTaken:(id)a0;
- (void)_continuityAppSuggestionChanged:(id)a0;
- (void)fluidSwitcherGestureManager:(id)a0 didBeginGesture:(id)a1;
- (void)performKeyboardShortcutAction:(long long)a0 forBundleIdentifier:(id)a1 windowScene:(id)a2;
- (void)_observerLayoutStateTransitionCoordinatorForWindowSceneIfNeeded:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (BOOL)hasAppLayoutForDisplayItem:(id)a0;
- (void)switcherContentController:(id)a0 setWallpaperScale:(double)a1 withAnimationMode:(long long)a2 completion:(id /* block */)a3;
- (id)_switcherControllerForTransitionRequest:(id)a0;
- (id)_modelRemovalRequestForDisplayItemResolutionResults:(id)a0;
- (void)_keyboardWillShow:(id)a0;
- (BOOL)_contentControllerIsEmbeddedDisplayContentController:(id)a0;
- (void)addAppLayoutForTransientOverlayViewController:(id)a0 windowScene:(id)a1;
- (void)switcherControllerDidUpdateWindowManagementStyle:(id)a0;
- (void)updateUserInteractionEnabledForSwitcherContentController:(id)a0;
- (void)noteKeyboardIsNotForMedusa;
- (id /* block */)_activateSwitcherValidatorWithEventLabel:(id)a0 animated:(BOOL)a1 windowScene:(id)a2;
- (BOOL)_shouldMorphFromPIPForTransitionContext:(id)a0 outForLayoutRole:(out long long *)a1;
- (BOOL)switcherContentController:(id)a0 shouldMorphFromPIPForTransitionContext:(id)a1;
- (id)_transientOverlayPresentationManager;
- (void)switcherContentController:(id)a0 setHomeScreenBackdropBlurMaterialRecipeName:(id)a1 withAnimationMode:(long long)a2 completion:(id /* block */)a3;
- (void)switcherContentController:(id)a0 setHomeScreenBackdropBlurProgress:(double)a1 withAnimationMode:(long long)a2 completion:(id /* block */)a3;
- (id)acquireAllowHiddenAppAssertionForBundleIdentifier:(id)a0 reason:(id)a1;
- (id)_persistenceIdentifiersForBundleIdentifier:(id)a0 onlyIncludeLaunchableIdentifiers:(BOOL)a1;
- (long long)overrideInterfaceOrientationMechanicsForSwitcherViewController:(id)a0;
- (id)_switcherControllerForContentViewController:(id)a0;
- (void)setActiveGestureTransaction:(id)a0;
- (id)_centerWindowSheetMetricsCache;
- (id)switcherContentController:(id)a0 transitionEventForContext:(id)a1 identifier:(id)a2 phase:(unsigned long long)a3 animated:(BOOL)a4;
- (void)enumerateSwitcherControllersWithBlock:(id /* block */)a0;
- (id)switcherContentController:(id)a0 hiddenAppLayoutsForBundleIdentifier:(id)a1;
- (void)handleApplicationSceneEntityDestructionIntent:(id)a0 forEntities:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })switcherContentController:(id)a0 transformForCardUnderSheetForBoundsSize:(struct CGSize { double x0; double x1; })a1;
- (id)appLayoutsForSwitcherController:(id)a0;
- (id)transitionEventForContext:(id)a0 identifier:(id)a1 phase:(unsigned long long)a2 animated:(BOOL)a3;
- (void)_acquireAssertion:(id)a0;
- (void)fluidSwitcherGestureManager:(id)a0 didBeginDraggingWindowWithSceneIdentifier:(id)a1;
- (void)_setInterfaceOrientationFromUserResizingIfSupported:(long long)a0 forSceneHandle:(id)a1;
- (void)failMultitaskingGesturesForReason:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switcherContentController:(id)a0 frameForFloatingAppLayoutInInterfaceOrientation:(long long)a1 floatingConfiguration:(long long)a2;
- (BOOL)switcherContentController:(id)a0 shouldMorphToPIPForTransitionContext:(id)a1;
- (id)appLayoutForWorkspaceTransientOverlay:(id)a0 windowScene:(id)a1;
- (void)_setAsynchronousRenderingEnabled:(BOOL)a0 withMinificationFilter:(BOOL)a1 forLayerTarget:(id)a2 presentationManager:(id)a3;
- (id)_switcherControllerForDisplayItem:(id)a0;
- (id)_nonHiddenAppLayoutsForDisplayItem:(id)a0;
- (void)_updateHomeScreenDisplayLayoutElementForLayoutState:(id)a0 switcherController:(id)a1;
- (void)addCenterRoleAppLayoutForDisplayItem:(id)a0 windowScene:(id)a1 completion:(id /* block */)a2;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (id)recentAppLayouts;
- (void)_rebuildAppListCache;
- (id /* block */)_activateSwitcherValidatorWithEventLabel:(id)a0 animated:(BOOL)a1;
- (void)betaLaunchHandle:(id)a0 activateIfNeededEndedWithResult:(BOOL)a1;
- (long long)sbActiveInterfaceOrientation;
- (void)switcherContentController:(id)a0 setHomeScreenScale:(double)a1 withAnimationMode:(long long)a2 completion:(id /* block */)a3;
- (BOOL)_shouldTakeKeyboardHomeAffordanceAssertion;
- (id)activeTransientOverlayPresentedAppLayoutForWindowScene:(id)a0;
- (id)animationControllerForTransitionRequest:(id)a0 ancillaryTransitionRequests:(id)a1;
- (BOOL)toggleMainSwitcherNoninteractivelyWithSource:(long long)a0 animated:(BOOL)a1 windowScene:(id)a2;
- (void)_handleFocusedIconSwitcherShortcutAction:(long long)a0 bundleIdentifier:(id)a1 windowScene:(id)a2;
- (void).cxx_destruct;
- (BOOL)isAcquiredTransientOverlayViewController:(id)a0 windowScene:(id)a1;
- (id /* block */)_dismissSwitcherValidatorToAppLayout:(id)a0 dismissFloatingSwitcher:(BOOL)a1 withEventLabel:(id)a2 animated:(BOOL)a3 windowScene:(id)a4;
- (id)switcherContentController:(id)a0 visibleDisplayItemsForBundleIdentifier:(id)a1;
- (id)_appLayoutContainingDisplayItem:(id)a0;
- (BOOL)deleteAppLayoutForDisplayItem:(id)a0;
- (BOOL)_supportsFloatingApplication;
- (void)switcherContentController:(id)a0 layoutStateTransitionDidEndWithTransitionContext:(id)a1;
- (void)switcherContentController:(id)a0 requestNewWindowForBundleIdentifier:(id)a1;
- (void)_evaluateAsynchronousRenderingEnablement;
- (void)_reqlinquishAssertion:(id)a0;
- (id)_resultsForDisplayItemRemovalResolutionRequest:(id)a0 preferredAppLayoutForRemovalAnimationIfAny:(id)a1;
- (BOOL)_shouldPrioritizeSortOrderForAppLayout:(id)a0;
- (id)_recentAppLayoutsController;
- (void)_purgeHiddenAppLayoutsForUILock;
- (BOOL)_shouldTakeStatusBarAssertionForSwitcherController:(id)a0;
- (BOOL)switcherContentController:(id)a0 shouldResignActiveForStartOfTransition:(id)a1;
- (void)viewDidLoadForSwitcherViewController:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)switcherContentController:(id)a0 reopenHiddenAppLayoutsWithBundleIdentifier:(id)a1;
- (void)_deleteAppLayoutsMatchingBundleIdentifier:(id)a0;
- (id)switcherContentController:(id)a0 visibleAppLayoutsForBundleIdentifier:(id)a1;
- (void)_requestAutomaticUpdateAuthorizationIfNecessaryWithAppInfo:(id)a0 processHandle:(id)a1;
- (id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)a0;
- (BOOL)switcherContentController:(id)a0 supportsTitleItemsForAppLayout:(id)a1;
- (id)_switcherControllerPassingTest:(id /* block */)a0;
- (void)_cancelPIPForDisplayItem:(id)a0;
- (BOOL)activateMainSwitcherNoninteractivelyWithSource:(long long)a0 animated:(BOOL)a1;
- (void)switcherContentController:(id)a0 setInterfaceOrientationFromUserResizing:(long long)a1 forDisplayItem:(id)a2;
- (void)_updateBestAppSuggestion;
- (void)removeAppLayoutTransientOverlayViewController:(id)a0 windowScene:(id)a1;
- (void)_applicationDidExit:(id)a0;
- (BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)a0;
- (id)_medusaKeyboardSceneHandle;
- (void)_insertCardForDisplayIdentifier:(id)a0 atIndex:(unsigned long long)a1;
- (void)_releaseKeyboardFocus;
- (void)_focusNewlyAddedApplicationIfNeededTransitioningFromLayoutState:(id)a0 toLayoutState:(id)a1 windowScene:(id)a2;
- (BOOL)_shouldAddAppLayoutToFront:(id)a0;
- (void)_loadContentViewControllerIfNecessaryForWindowScene:(id)a0;
- (id)switcherControllerForWindowScene:(id)a0;
- (id /* block */)_toggleSwitcherTransitionValidatorAnimated:(BOOL)a0 windowScene:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)cancelAnyPeekToHomescreenFromSource:(long long)a0;
- (void)_lockKeyboardFocusForSwitcherController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switcherContentController:(id)a0 frameForItemWithRole:(long long)a1 inMainAppLayout:(id)a2 interfaceOrientation:(long long)a3;
- (void)enumerateTransientOverlayViewControllersUsingBlock:(id /* block */)a0 windowScene:(id)a1;
- (void)noteKeyboardIsForMedusaWithOwningScene:(id)a0;
- (void)_removeDisplayItem:(id)a0 forReason:(long long)a1;
- (id)appSwitcherModel:(id)a0 willReplaceAppLayout:(id)a1 proposedReplacementAppLayout:(id)a2;
- (BOOL)_shouldZoomFromSystemApertureForTransitionContext:(id)a0;
- (void)switcherContentController:(id)a0 setPointerInteractionsEnabled:(BOOL)a1;
- (void)_removeAcquiredTransientOverlayViewController:(id)a0 windowScene:(id)a1;
- (void)eventSource:(id)a0 userDeletedWebBookmark:(id)a1;
- (id)appSwitcherModel:(id)a0 willAddAppLayout:(id)a1 replacingAppLayouts:(id)a2 removingAppLayouts:(id)a3;
- (void)dealloc;
- (void)_rebuildCurrentWindowingModeCompatibleAppLayoutsIfNecessary;
- (BOOL)switcherContentController:(id)a0 supportsKillingOfAppLayout:(id)a1;
- (void)_modifyModelWithDropContext:(id)a0;
- (id)appLayoutsForSwitcherContentController:(id)a0;
- (id)matchingIconViewForIconView:(id)a0;
- (void)switcherContentController:(id)a0 performTransitionWithRequest:(id)a1 gestureInitiated:(BOOL)a2;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (void)_addAppLayoutToFront:(id)a0;
- (void)_activateNeighboringAppLayoutRequiringActiveAppLayout:(BOOL)a0 appLayoutEnvironment:(long long)a1 inForwardDirection:(BOOL)a2 windowScene:(id)a3 eventLabel:(id)a4;
- (void)_removeCardForDisplayIdentifier:(id)a0;
- (void)switcherContentController:(id)a0 setHomeScreenAlpha:(double)a1 withAnimationMode:(long long)a2 completion:(id /* block */)a3;
- (void)_enumerateSwitcherControllersWithBlock:(id /* block */)a0;
- (BOOL)_hasAppLayoutContainingDisplayItem:(id)a0;
- (void)programmaticSwitchAppGestureMoveToRight;
- (void)_temp_92893062_observeLayoutStateTransitionCoordinatorForWindowScene:(id)a0;
- (void)switcherDemoFilteringControllerDidChangeHiddenApplicationBundleIDs:(id)a0;
- (id)_entityForDisplayItem:(id)a0 switcherController:(id)a1;
- (void)performTransitionWithContext:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2 windowScene:(id)a3;
- (BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)a0;
- (void)_updateKeyboardHomeAffordanceAssertion;
- (long long)homeScreenInterfaceOrientationForContentController:(id)a0;
- (void)_addAppLayoutToFront:(id)a0 removeAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switcherContentController:(id)a0 frameForCenterItemWithConfiguration:(long long)a1 interfaceOrientation:(long long)a2;
- (void)_setStatusBarPartsHidden:(unsigned long long)a0 animated:(BOOL)a1 windowScene:(id)a2;
- (void)switcherContentController:(id)a0 activatedBestAppSuggestion:(id)a1;
- (void)_doUglySiriActivationThingsIfNecessary:(id)a0;
- (void)cancelActiveGestureForSwitcherContentController:(id)a0;
- (BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)a0;
- (void)_switcherServiceRemoved:(id)a0;
- (void)_switcherModelChanged:(id)a0;
- (id)_switcherControllerForSwitcherViewController:(id)a0;
- (void)switcherContentController:(id)a0 setCacheAsynchronousRenderingSurfaces:(BOOL)a1;
- (id)_switcherModelRemovalResultsForRequest:(id)a0 forReason:(long long)a1;
- (void)_setContainerStatusBarHidden:(BOOL)a0 animationDuration:(double)a1 usingAssertion:(id *)a2 reason:(id)a3 windowScene:(id)a4;
- (BOOL)_keyboardIsSuppressedForMedusaKeyboardScene;
- (void)switcherContentController:(id)a0 bringAppLayoutToFront:(id)a1;
- (id)_entityForDisplayItem:(id)a0 sceneHandleProvider:(id)a1 displayIdentity:(id)a2;
- (id)_appLayoutFromPrimaryLayoutItem:(id)a0 sideLayoutElement:(id)a1 configuration:(long long)a2;
- (BOOL)hasAppLayoutForTransientOverlayViewController:(id)a0 windowScene:(id)a1;
- (id)switcherContentController:(id)a0 deviceApplicationSceneHandleForDisplayItem:(id)a1;
- (void)_activateBetaLaunchHandlesIfNeededWithAppInfo:(id)a0 processHandle:(id)a1;
- (BOOL)liveContentOverlayUpdatesSuspended;
- (void)programmaticSwitchAppGestureMoveToLeft;
- (void)_loadContentViewControllerIfNecessaryForAllWindowScenes;
- (void)switcherContentController:(id)a0 setHomeScreenBackdropBlurType:(long long)a1;
- (void)_asyncOnStoreAppLaunchUIActivationQueue:(id /* block */)a0;
- (BOOL)_shouldMorphToPIPForTransitionContext:(id)a0 outForLayoutRole:(out long long *)a1;
- (void)viewWillAppearForSwitcherViewController:(id)a0;

@end
