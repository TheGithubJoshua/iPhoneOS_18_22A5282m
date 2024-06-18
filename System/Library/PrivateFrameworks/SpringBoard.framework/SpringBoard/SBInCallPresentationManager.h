@class SBHideSharePlayContentFromSharedScreenController, NSString, SBExpanseBannerAuthority, BSCompoundAssertion, SBInCallPresentationRequestServer, SBInCallPresentationSession, SBApplicationController, NSMutableDictionary, SBWindowSceneManager, NSMutableArray, SBInCallBannerAuthority, NSMutableSet;
@protocol SBInCallPresentationManagerDelegate;

@interface SBInCallPresentationManager : NSObject <SBInCallPresentationSessionDelegate, SBInCallPresentationRequestServerDelegate, FBSceneManagerObserver, SBSceneManagerObserver, SBFBacklightEnvironmentSceneProviding, SBApplicationHosting> {
    SBApplicationController *_applicationController;
    SBInCallPresentationRequestServer *_presentationRequestServer;
    SBInCallBannerAuthority *_inCallBannerAuthority;
    SBExpanseBannerAuthority *_expanseBannerAuthority;
    NSMutableDictionary *_clientIdentifierToPresentationSession;
    NSMutableArray *_pendingInvalidationSessions;
    NSMutableSet *_bundleIdentifiersOfObservedApplications;
    NSMutableSet *_observedSceneManagers;
    BSCompoundAssertion *_nonModalSuppressionAssertions;
}

@property (class, readonly, getter=isSpecializedAPISupported) BOOL specializedAPISupported;

@property (readonly, nonatomic) SBInCallPresentationSession *_lastPresentationSession;
@property (weak, nonatomic) id<SBInCallPresentationManagerDelegate> delegate;
@property (readonly, nonatomic) SBWindowSceneManager *windowSceneManager;
@property (readonly, nonatomic) SBHideSharePlayContentFromSharedScreenController *hideSharePlayContentFromSharedScreenController;
@property (readonly, nonatomic) BOOL supportsHandlingDeviceLock;
@property (readonly, nonatomic) BOOL disallowsLockHardwareButtonDoublePress;
@property (readonly, nonatomic) BOOL hasFullscreenActiveCallInSwitcher;
@property (readonly, nonatomic) BOOL supportsHandlingUILockForWindowedAccessoryAttach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_runZombieChecksForSceneHandle:(id)a0;
- (BOOL)canHostAnApp;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)inCallPresentationRequestServer:(id)a0 clientWithIdentifier:(id)a1 requestsPresentationWithConfiguration:(id)a2 completion:(id /* block */)a3;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (id)hostedAppSceneHandle;
- (void)reactivateInCallForReason:(long long)a0;
- (id)acquireNonModalSuppressionAssertionForReason:(id)a0;
- (BOOL)disablesSystemVolumeHUDForCategory:(id)a0;
- (long long)inCallClientPresentationSessionInterfaceOrientationForTransientOverlayPresentation:(id)a0;
- (void)handlePresentationForActivityContinuationIdentifier:(id)a0;
- (void)_dismissClientWithIdentifier:(id)a0 animated:(BOOL)a1 analyticsSource:(id)a2 reason:(id)a3 completion:(id /* block */)a4;
- (id)_newClientPresentationSessionWithSceneHandle:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inCallClientPresentationSessionResolvedPIPDodgingInsets:(id)a0;
- (void)sceneManager:(id)a0 didAddScene:(id)a1;
- (void)inCallPresentationRequestServer:(id)a0 clientWithIdentifierDidInvalidate:(id)a1;
- (BOOL)hasOverrideAppSceneEntityForLaunchingApplication:(id)a0;
- (void)handleAccessoryAttachWithCompletion:(id /* block */)a0;
- (BOOL)supportsBecomingVisibleWhenUnlockingFromSource:(int)a0 wakingDisplay:(BOOL)a1;
- (id)scenesForBacklightSession;
- (id)sessionForSceneIdentifier:(id)a0;
- (BOOL)inCallClientPresentationSession:(id)a0 canRestoreToPreviousEntity:(id)a1;
- (void)sceneManager:(id)a0 willMoveScene:(id)a1 toSceneManager:(id)a2;
- (void).cxx_destruct;
- (void)_runZombieChecksForScene:(id)a0;
- (void)_dismissAllPresentations;
- (void)inCallClientPresentationSession:(id)a0 callConnectedStatusChangedForPresentableViewController:(id)a1;
- (void)ensureSwitcherInclusionForRestoringFromPIPForSceneWithPersistenceIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)_applicationDidExit:(id)a0;
- (id)hostedAppSceneHandles;
- (void)_dismissAllPresentationsForApplication:(id)a0;
- (BOOL)_shouldSuppressNonModalCalls;
- (BOOL)_hasPendingDismissalOfSceneHandleWithPersistenceIdentifier:(id)a0;
- (id)overrideAppSceneEntityForLaunchingApplication:(id)a0;
- (BOOL)canHandleOpenApplicationRequestForApplication:(id)a0;
- (BOOL)_isManagingSceneOrSceneHandleWithPersistenceIdentifier:(id)a0;
- (id)inCallClientPresentationSession:(id)a0 acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(id)a1;
- (id)initWithWindowSceneManager:(id)a0 applicationController:(id)a1 bannerManager:(id)a2;
- (void)inCallClientPresentationSessionSceneWasDestroyed:(id)a0;
- (void)_evaluateNonModalSuppressionAssertions;
- (void)handleOpenApplicationRequest:(id)a0 clientWorkspace:(id)a1 actions:(id)a2 origin:(id)a3 options:(id)a4 withResult:(id /* block */)a5;
- (long long)inCallClientPresentationSessionInterfaceOrientationForBannerPresentation:(id)a0;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)inCallClientPresentationSession:(id)a0 handleDestroySceneActionWithReason:(long long)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (BOOL)isHostingAnApp;
- (void)handleDeviceLockFromSource:(int)a0;
- (id)_sessionForSceneWithIdentifier:(id)a0;
- (void)conformsToSBApplicationHosting;
- (void)sceneManagerDidInvalidate:(id)a0;
- (id)_hostedPresentationSessions;

@end
