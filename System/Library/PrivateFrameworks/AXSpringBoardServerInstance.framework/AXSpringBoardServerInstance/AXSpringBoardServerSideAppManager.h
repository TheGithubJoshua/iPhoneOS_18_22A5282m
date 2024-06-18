@protocol AXSpringBoardServerSideAppManagerDelegate;

@interface AXSpringBoardServerSideAppManager : NSObject

@property (weak, nonatomic) id<AXSpringBoardServerSideAppManagerDelegate> delegate;
@property (nonatomic) unsigned long long dockIconActivationMode;

+ (id)sharedInstance;
+ (id)_mainDisplaySceneManager;

- (id)medusaApps;
- (void)launchApplication:(id)a0;
- (void)_performValidation;
- (BOOL)canLaunchAsFloatingApplicationForIconView:(id)a0;
- (void)launchApplicationWithFullConfiguration:(id)a0;
- (void)_performMedusaGesture:(unsigned long long)a0;
- (long long)_currentSpaceConfiguration;
- (id)init;
- (id)allowedMedusaGestures;
- (id)_sbWorkspaceMainWorkspace;
- (BOOL)isDisplayingApp;
- (void)launchFloatingApplication:(id)a0;
- (id)_appForLayoutRole:(long long)a0 layoutState:(id)a1;
- (void)_enumerateAppsAndLayoutRoles:(id /* block */)a0;
- (BOOL)_isDockIconView:(id)a0;
- (void)_addResizeGestureRecognizerGesturesIfAllowed:(id)a0;
- (id)_appWithIdentifier:(id)a0;
- (id)_firstFloatingAppLayout;
- (id)_sbPreviousWorkspaceEntityClass;
- (long long)_currentFloatingConfiguration;
- (id)_sbEmptyEntity;
- (void)_endDockIconActivationModeAfterTimeout;
- (BOOL)_hasFloatingApp;
- (id)sceneLayoutState;
- (id)appForLayoutRole:(long long)a0;
- (void).cxx_destruct;
- (id)_applicationController;
- (id)_bundleIdentifierForIconView:(id)a0;
- (void)_requestFloatingAppSwitcherVisible;
- (id)_activeApplicationBundleIdentifiers;
- (void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)a0;
- (id)_mainDisplaySceneManager;
- (BOOL)_hasPinnedApp;
- (void)_requestTransactionWithPrimaryEntity:(id)a0 sideEntity:(id)a1 floatingEntity:(id)a2 spaceConfiguration:(long long)a3 floatingConfiguration:(long long)a4;
- (BOOL)canLaunchAsPinnedApplicationForIconView:(id)a0;
- (id)_sbPreviousEntity;
- (BOOL)hasMultipleApps;
- (id)medusaAppBundleIdsToLayoutRoles;
- (id)_floatingAppRootViewController;
- (id)_sbSwitcherTransitionRequestClass;
- (BOOL)performMedusaGesture:(unsigned long long)a0;
- (void)launchPinnedApplication:(id)a0 onLeadingSide:(BOOL)a1;
- (void)_addFloatingApplicationGesturesIfAllowed:(id)a0;
- (BOOL)canActivateMedusaForDock;

@end
