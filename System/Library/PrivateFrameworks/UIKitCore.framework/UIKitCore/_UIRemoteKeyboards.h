@class NSMapTable, _UIAssertionController, UIScreen, UIWindowScene, NSMutableArray, UIView, _UIKeyboardChangedInformation, NSString, NSHashTable, NSMutableSet, _UIRemoteKeyboardsEventObserver, NSArray, NSXPCConnection, UIRemoteKeyboardWindow, FBSScene;
@protocol _UIKeyboardArbitration;

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardsEventObserverDelegate, _UIAssertionControllerSubject, _UIKeyboardArbiterClient> {
    NSHashTable *_windowControllers;
    int _ignoreLayoutSubviews;
    FBSScene *_requiredScene;
    double _requiredLevel;
    NSMutableArray *_activePIDs;
    UIView *_keyboardSnapshot;
    BOOL _expectingInitialState;
    int _hostedCount;
    BOOL _hadFocusBeforeOverlay;
    BOOL _deactivatedByControlCenter;
    BOOL _deactivatedBySystemAnimation;
    BOOL _resignActiveByControlCenter;
    BOOL _enqueuedWillEnterForegroundActions;
    UIWindowScene *_suppressedScene;
    BOOL _expectedSuppression;
    int _externalSuppression;
    int _recursionCheck;
    NSMutableSet *_pendingKeyboardGrabs;
    BOOL _takingSnapshot;
    BOOL _windowEnabled;
    UIScreen *_lastScreen;
    BOOL _disablingKeyboard;
    double _iavHeight;
    NSMapTable *_minimumKeyboardHeights;
    _UIRemoteKeyboardsEventObserver *_eventObserver;
    long long _keyboardSource;
    NSString *_keyboardSceneIdentifierEnteringForeground;
    _UIAssertionController *_assertionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSXPCConnection *connection;
@property (retain) _UIKeyboardChangedInformation *currentState;
@property (retain) _UIKeyboardChangedInformation *backupState;
@property BOOL currentKeyboard;
@property (readonly) NSArray *currentHostedPIDs;
@property (readonly) FBSScene *requiredScene;
@property (copy, nonatomic) NSString *focusedSceneIdentityStringOrIdentifier;
@property BOOL didSignalKeyboardChangedForCurrentKeyboard;
@property (getter=isUpdatingKeyWindow) BOOL updatingKeyWindow;
@property (readonly) UIRemoteKeyboardWindow *keyboardWindow;
@property (readonly) BOOL oldPathForSnapshot;
@property (nonatomic) BOOL handlingRemoteEvent;
@property BOOL handlingViewServiceEvent;
@property (readonly) BOOL sceneIsFullScreen;
@property (nonatomic) long long lastEventSource;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyboardFrameIncludingRemoteIAV;
@property (readonly, nonatomic) BOOL isFloating;
@property (readonly) id<_UIKeyboardArbitration> proxy;
@property BOOL disableBecomeFirstResponder;
@property (nonatomic) BOOL enableMultiscreenHack;
@property (readonly) BOOL remoteKeyboardUndocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL keyboardVisible;
@property (readonly) BOOL keyboardActive;
@property (readonly) BOOL updatingHeight;
@property (readonly, nonatomic) double iavHeight;
@property (nonatomic) double localAppIAVHeight;
@property (nonatomic) BOOL shouldFence;
@property (nonatomic) BOOL snapshotting;

+ (id)sharedRemoteKeyboards;
+ (BOOL)enabled;
+ (id)keyboardWindowSceneForScreen:(id)a0 create:(BOOL)a1;
+ (id)serviceName;
+ (BOOL)useSystemService;
+ (BOOL)wantsUnassociatedWindowSceneForKeyboardWindow;
+ (id)createArbiterConnection;

- (void)preserveKeyboardWithId:(id)a0;
- (void)applicationResumedEventsOnly:(id)a0;
- (void)forceKeyboardAway;
- (void)restoreKeyboardWithId:(id)a0;
- (void)userSelectedApp:(id)a0 onCompletion:(id /* block */)a1;
- (void)completeTransition:(id)a0 withInfo:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (BOOL)isOnScreenRotating;
- (void)_postInputSourceDidChangeNotificationForResponder:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)clearKeyboardSceneIdentifierEnteringForeground:(id)a0;
- (id)init;
- (void)applicationWillResignActive:(id)a0;
- (void)signalToProxyKeyboardChanged:(id)a0 onCompletion:(id /* block */)a1;
- (void)completeMoveKeyboardForWindow:(id)a0;
- (void)queue_keyboardChanged:(id)a0 onComplete:(id /* block */)a1;
- (unsigned long long)localSceneCount;
- (BOOL)_sceneFocusPermittedForApplication;
- (void)prepareToMoveKeyboard:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withIAV:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isIAVRelevant:(BOOL)a2 showing:(BOOL)a3 notifyRemote:(BOOL)a4 forScene:(id)a5;
- (void)setPlacement:(id)a0 quietly:(BOOL)a1 animated:(BOOL)a2 generateSplitNotification:(BOOL)a3;
- (void)_lostWindow:(id)a0;
- (void)applicationKeyWindowWillChange:(id)a0;
- (void)willLock:(id)a0;
- (BOOL)_sceneFocusUpdatePermittedForWindow:(id)a0;
- (void)queue_setLastEventSource:(long long)a0 withCompletion:(id /* block */)a1;
- (id)vendKeyboardSuppressionAssertionForReason:(id)a0;
- (BOOL)hasLocalMinimumKeyboardHeightForScene:(id)a0;
- (void)setDisableBecomeFirstResponder:(BOOL)a0 forSuppressionAssertion:(BOOL)a1;
- (void)queue_getDebugInfoWithCompletion:(id /* block */)a0;
- (void)updateTransition:(id)a0 withInfo:(id)a1;
- (void)setWindowEnabled:(BOOL)a0 force:(BOOL)a1;
- (void)controllerDidLayoutSubviews:(id)a0;
- (BOOL)shouldAllowInputViewsRestoredForId:(id)a0;
- (BOOL)wantsToShowKeyboardForViewServiceHostWindow:(id)a0;
- (void)sceneDidDisconnect:(id)a0;
- (BOOL)refreshWithLocalMinimumKeyboardHeight:(double)a0 forScene:(id)a1;
- (void)queue_activeProcessResignWithCompletion:(id /* block */)a0;
- (BOOL)didHandleKeyboardChange:(id)a0 shouldConsiderSnapshottingKeyboard:(BOOL)a1 isLocalEvent:(BOOL)a2;
- (void)performOnLocalDistributedControllers:(id /* block */)a0;
- (void)startTransition:(id)a0 withInfo:(id)a1;
- (BOOL)needsToShowKeyboardForWindow:(id)a0;
- (void)applicationDidSuspend:(id)a0;
- (BOOL)remoteKeyboardUndocked:(BOOL)a0;
- (void)performOnDistributedControllers:(id /* block */)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)resetSnapshotWithWindowCheck:(BOOL)a0;
- (BOOL)allowedToEnableKeyboardWindow;
- (BOOL)hasAnyHostedViews;
- (void)updateEventSource:(long long)a0 options:(unsigned long long)a1 responder:(id)a2;
- (void)queue_keyboardUIDidChange:(id)a0 onComplete:(id /* block */)a1;
- (void)setKeyboardSceneIdentifierEnteringForegroundForScene:(id)a0;
- (void)checkConnection;
- (void)cleanSuppression;
- (void)userSelectedProcessIdentifier:(int)a0 withSceneIdentity:(id)a1 onCompletion:(id /* block */)a2;
- (void)_updateEventSource:(long long)a0 options:(unsigned long long)a1 responder:(id)a2;
- (void)queue_keyboardChangedWithCompletion:(id /* block */)a0;
- (void)checkState;
- (id)_activeScreen;
- (void)peekApplicationEvent:(id)a0;
- (void)queue_setKeyboardDisabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (double)intersectionHeightForWindowScene:(id)a0;
- (void)applicationWillResume:(id)a0;
- (void).cxx_destruct;
- (void)queue_keyboardSuppressed:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)applicationDidRemoveDeactivationReason:(id)a0;
- (void)addHostedWindowView:(id)a0 fromPID:(int)a1 forScene:(id)a2;
- (void)startConnection;
- (id)vendKeyboardSuppressionAssertionForReason:(id)a0 type:(unsigned long long)a1;
- (id)inputWindowRootViewController;
- (BOOL)allowedToShowKeyboard;
- (void)setRequiredScene:(id)a0;
- (void)_performOnDistributedControllersExceptSelf:(id /* block */)a0;
- (Class)keyboardWindowClass;
- (BOOL)currentStateHasEqualRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andIAVPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)applicationWillAddDeactivationReason:(id)a0;
- (void)restorePreservedInputViewsIfNecessary;
- (void)setWindowEnabled:(BOOL)a0;
- (void)stopConnection;
- (BOOL)needsToShowKeyboardForViewServiceHostWindow:(id)a0;
- (void)ignoreLayoutNotifications:(id /* block */)a0;
- (id)viewHostForWindow:(id)a0;
- (void)queue_keyboardIAVChanged:(double)a0 onComplete:(id /* block */)a1;
- (void)setWindowLevel:(double)a0 sceneLevel:(double)a1 forResponder:(id)a2;
- (void)setSuppressingKeyboard:(BOOL)a0 forScene:(id)a1;
- (void)queue_keyboardTransition:(id)a0 event:(unsigned long long)a1 withInfo:(id)a2 onComplete:(id /* block */)a3;
- (void)sceneUpdated;
- (void)dealloc;
- (void)applicationKeyWindowDidChange:(id)a0;
- (void)updateLastScreen:(id)a0;
- (void)finishWithHostedWindow;
- (void)queue_failedConnection:(id)a0;
- (void)queue_sceneBecameFocused:(id)a0 withCompletion:(id /* block */)a1;
- (void)performOnControllers:(id /* block */)a0;
- (double)intersectionHeightForWindowScene:(id)a0 isLocalMinimumHeightOut:(BOOL *)a1 ignoreHorizontalOffset:(BOOL)a2;
- (id)prepareForHostedWindowWithScene:(id)a0;
- (void)assertionActivationStateChangedToState:(BOOL)a0 forType:(unsigned long long)a1;
- (BOOL)assertionActivationStateForType:(unsigned long long)a0;
- (void)keyboardChangedCompleted;
- (BOOL)wantsToShowKeyboardForWindow:(id)a0;
- (void)updateEventSource:(long long)a0 options:(unsigned long long)a1;
- (void)unregisterController:(id)a0;
- (void)registerController:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void)updateCurrentState:(id)a0;
- (void)_updateEventSource:(long long)a0 options:(unsigned long long)a1;
- (void)reloadForSnapshotting;

@end
