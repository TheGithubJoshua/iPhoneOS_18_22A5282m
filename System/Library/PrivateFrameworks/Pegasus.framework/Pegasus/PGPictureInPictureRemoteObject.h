@class PGInterruptionAssistant, NSObject, FBScene, PGProcessAssertion, PGPlaybackState, NSString, NSTimer, PGPictureInPictureViewController, NSArray, NSXPCConnection, PGPictureInPictureApplication, NSUUID;
@protocol PGPictureInPictureAnalyticsDelegate, BSInvalidatable, OS_dispatch_queue, PGPictureInPictureRemoteObjectDelegate;

@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate, BSDescriptionProviding, PGCommandHandler> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _queue_outstandingRotationAnimationsCount;
    long long _controlsStyle;
    PGProcessAssertion *_processAssertion;
    PGProcessAssertion *_startBackgroundPIPAssertion;
    PGProcessAssertion *_interruptionBeganFinishTaskAssertion;
    PGProcessAssertion *_cancelPictureInPictureFinishTaskAssertion;
    NSUUID *_finishTaskInvalidationUUID;
    NSTimer *_timerForInvalidatingIfStopOrCancelFails;
    NSUUID *_analyticsSourceUUID;
    BOOL _pictureInPictureStartedAutomatically;
    BOOL _isPictureInPicturePossible;
    BOOL _hasPendingCancellationRequest;
    BOOL _hasPendingStopRequest;
    BOOL _pictureInPictureShouldStartWhenEnteringBackground;
    BOOL _shouldShowAlternateActionButtonImage;
    BOOL _shouldShowLoadingIndicator;
    NSArray *_menuItems;
    NSString *_activitySessionIdentifier;
    PGPlaybackState *_playbackState;
    PGInterruptionAssistant *_interruptionAssistant;
    BOOL _hasBegunTwoStageStop;
    BOOL _stashed;
    unsigned long long _resourcesUsageReductionReasons;
    unsigned long long _UILockedResourcesUsageReductionReasons;
    unsigned long long _externalResourcesUsageReductionReasons;
    NSTimer *_considerStashedPlaybackAsBackgroundAudioTimer;
    id<BSInvalidatable> _stateCaptureInvalidatable;
    FBScene *_sourceScene;
    NSString *_activitySessionIdentifierForLastActivePIPSession;
}

@property (retain, nonatomic) PGPictureInPictureRemoteObject *tetheredRemoteObject;
@property (retain, nonatomic) PGPictureInPictureRemoteObject *tetheringRemoteObject;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) PGPictureInPictureApplication *pictureInPictureApplication;
@property (readonly, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController;
@property (readonly, nonatomic) long long contentType;
@property (weak, nonatomic) id<PGPictureInPictureRemoteObjectDelegate> delegate;
@property (weak, nonatomic) id<PGPictureInPictureAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) BOOL shouldStartPictureInPictureEnteringBackground;
@property (readonly, nonatomic) BOOL canStopPictureInPicture;
@property (readonly, nonatomic) BOOL canCancelPictureInPicture;
@property (readonly, nonatomic) BOOL canEndTwoStageStopPictureInPicture;
@property (readonly, nonatomic) BOOL isStartingStoppingOrCancellingPictureInPicture;
@property (readonly, nonatomic) BOOL isStoppingOrCancellingPictureInPicture;
@property (readonly, nonatomic) long long currentState;
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic, getter=isVideoCall) BOOL videoCall;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (readonly, nonatomic) NSString *sourceSceneSessionPersistentIdentifier;
@property (readonly, copy, nonatomic) NSString *activitySessionIdentifier;
@property (readonly, nonatomic) BOOL canStartBackgroundPIPForCurrentActivitySessionIdentifier;
@property (copy, nonatomic) NSString *exemptAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)tetherRemoteObject:(id)a0 toRemoteObject:(id)a1 mode:(long long)a2;

- (id)init;
- (BOOL)_canTransitionToState:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)suspend;
- (void)cancel;
- (id)succinctDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)resume;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_setCurrentState:(long long)a0;
- (oneway void)setActivitySessionIdentifier:(id)a0;
- (void)_invalidateAllAssertions;
- (void)handleCommand:(id)a0;
- (oneway void)setupStopAnimated:(BOOL)a0 needsApplicationActivation:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isICSVideoCall;
- (void)_acquireOrInvalidateProcessAssertionIfNeeded;
- (BOOL)_currentStateAllowsProcessAssertion;
- (void)_finishCleanup;
- (void)_invalidateForFailureToStartStopOrCancel;
- (void)_invalidateInterruptionBeganFinishTaskAssertion;
- (id)_invalidationTimerWithTimeout:(double)a0;
- (id)_invalidationTimerWithTimeout:(double)a0 block:(id /* block */)a1;
- (BOOL)_isAppICS;
- (BOOL)_isAssociatedWithOtherObject:(id)a0;
- (BOOL)_isInActivitySession;
- (BOOL)_isUnderLock;
- (void)_notifyProxyOfStashedOrUnderLock:(BOOL)a0;
- (void)_queue_notifyProxyOfInterruptionBegan;
- (void)_queue_notifyProxyOfInterruptionEnded;
- (void)_setResolvedResourcesUsageReductionReasons:(unsigned long long)a0;
- (void)_setUILockedResourcesUsageReductionReasons:(unsigned long long)a0;
- (void)_stopTethering;
- (void)_updateActiveProxyAndViewControllerOfInterruptionIfNeeded;
- (void)_updatePreferredContentSize:(struct CGSize { double x0; double x1; })a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_wantsProcessAssertion;
- (void)beginTwoStageStopPictureInPictureByRestoringUserInterfaceWithCompletionHandler:(id /* block */)a0;
- (BOOL)canActivateUntetheredAlongsideOtherObject:(id)a0;
- (BOOL)canPreventOrSuspendRemoteObject:(id)a0;
- (BOOL)canStartMicroPIP;
- (BOOL)canTetherRemoteObjectAsMicroPIP:(id)a0;
- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(id /* block */)a0;
- (oneway void)cleanupWithCompletionHandler:(id /* block */)a0;
- (void)endTwoStageStopPictureInPictureWithCompletionBlock:(id /* block */)a0;
- (id)initWithConnection:(id)a0 interruptionAssistant:(id)a1;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)a0 preferredContentSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (BOOL)isAssociatedWithRemoteObject:(id)a0;
- (BOOL)isStartingPictureInPicture;
- (BOOL)matchesSceneSessionIdentifier:(id)a0;
- (void)pictureInPictureInterruptionBeganWithReason:(long long)a0 attribution:(id)a1;
- (void)pictureInPictureInterruptionEndedWithReason:(long long)a0 attribution:(id)a1;
- (void)pictureInPictureViewController:(id)a0 didReceiveCommand:(id)a1;
- (void)pictureInPictureViewController:(id)a0 didTransitionToStashed:(BOOL)a1;
- (void)pictureInPictureViewController:(id)a0 updateHostedWindowSize:(struct CGSize { double x0; double x1; })a1 animationType:(long long)a2 initialSpringVelocity:(double)a3;
- (void)pictureInPictureViewControllerDidRequestCancel:(id)a0;
- (void)pictureInPictureViewControllerDidRequestStop:(id)a0;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)a0;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)a0;
- (BOOL)pictureInPictureViewControllerShouldHideTetheredViewControllerAlongsideControls:(id)a0;
- (BOOL)pictureInPictureViewControllerWantsStashTabSuppression:(id)a0;
- (oneway void)rotateContentContainer:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)sendStartPictureInPictureTestAction;
- (void)setCurrentResourcesUsageReductionReasons:(unsigned long long)a0;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setSourceSceneSessionPersistentIdentifier:(id)a0;
- (oneway void)setupStartAnimated:(BOOL)a0 hostedWindowHostingHandle:(id)a1 sceneSessionPersistentIdentifier:(id)a2 preferredContentSize:(struct CGSize { double x0; double x1; })a3 initialInterfaceOrientation:(long long)a4 initialLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 completionHandler:(id /* block */)a6;
- (oneway void)startPictureInPictureAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)startPictureInPictureEnteringBackgroundAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)startPictureInPictureFromBackground;
- (oneway void)stopPictureInPictureAndRestoreUserInterface;
- (void)stopPictureInPictureAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (oneway void)stopPictureInPictureAnimated:(BOOL)a0 withFinalInterfaceOrientation:(long long)a1 finalLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completionHandler:(id /* block */)a3;
- (BOOL)supportsMicroPIP;
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCompletionHandler:(id /* block */)a1;
- (oneway void)updateMenuItems:(id)a0;
- (oneway void)updatePlaybackStateWithDiff:(id)a0;
- (oneway void)updatePreferredContentSize:(struct CGSize { double x0; double x1; })a0 withCompletionHandler:(id /* block */)a1;
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
