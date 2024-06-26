@class NSXPCConnection, NSString, _UIKeyboardArbiter, BKSProcessAssertion, NSArray, BSServiceConnectionEndpointInjector, NSMutableSet, UIKBArbiterClientFocusContext, FBSCAContextSceneLayer;

@interface _UIKeyboardArbiterClientHandle : NSObject <_UIKeyboardArbitration> {
    BOOL _invalidated;
    _UIKeyboardArbiter *_owner;
    NSMutableSet *_hostedPids;
    BOOL _checkingShowability;
    int _childrenSuppressionCount;
    BOOL _keyboardOnScreen;
    BKSProcessAssertion *_remoteKeepAliveAssertion;
    unsigned long long _remoteKeepAliveAssertionCount;
    unsigned long long _remoteKeepAliveTimerCount;
    NSArray *_cachedContext;
    BSServiceConnectionEndpointInjector *_endpointGrantInjector;
}

@property (readonly) int processIdentifier;
@property (readonly, retain) NSString *bundleIdentifier;
@property (readonly) NSXPCConnection *connection;
@property BOOL running;
@property (readonly, retain) FBSCAContextSceneLayer *sceneLayer;
@property (readonly, retain) UIKBArbiterClientFocusContext *remoteFocusContext;
@property (readonly) BOOL active;
@property (readonly) unsigned long long wantedState;
@property (readonly) double level;
@property (readonly) double iavHeight;
@property (readonly) BOOL isKeyboardOnScreen;
@property int prevActiveIdentifier;
@property (readonly) BOOL wantsFence;
@property (readonly) BOOL deactivating;
@property (readonly) BOOL hasHostedPids;
@property (readonly) BOOL multipleScenes;
@property int suppressionCount;
@property (nonatomic) BOOL inputUIHost;
@property (nonatomic) BOOL hasDebugInformationEntitlement;
@property (nonatomic, getter=isAcquiringFocus) BOOL acquiringFocus;
@property (nonatomic) BOOL requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus;

+ (id)handlerWithArbiter:(id)a0 forConnection:(id)a1;

- (void)retrieveDebugInformation:(id /* block */)a0;
- (BOOL)isHandlerShowableWithHandler:(id)a0;
- (void)notifyIAVHeight:(double)a0;
- (BOOL)_shouldRejectSceneIdentityUpdateCorrectingClientIfNeeded:(id)a0 fromSelector:(SEL)a1;
- (void)setWantsFencing:(BOOL)a0;
- (void)focusApplicationWithProcessIdentifier:(int)a0 context:(id)a1 onCompletion:(id /* block */)a2;
- (void)setWindowHostingPID:(int)a0 active:(BOOL)a1;
- (void)uncacheWindowContext;
- (void)updateSuspensionCountForPids:(id)a0 active:(BOOL)a1;
- (void)notifyHostedPIDsOfSuppression:(BOOL)a0;
- (void)signalKeyboardUIDidChange:(id)a0 onCompletion:(id /* block */)a1;
- (void)applicationShouldFocusWithBundle:(id)a0 onCompletion:(id /* block */)a1;
- (void)_reevaluateRemoteFocusContext:(id)a0;
- (void)setClientFocusContext:(id)a0;
- (void)signalEventSourceChanged:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setKeyboardTotalDisable:(BOOL)a0 withFence:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyHostedPIDsOfSuppression:(BOOL)a0 active:(BOOL)a1;
- (void)checkActivation:(unsigned long long)a0;
- (void)focusApplicationWithProcessIdentifier:(int)a0 context:(id)a1 stealingKeyboard:(BOOL)a2 onCompletion:(id /* block */)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_isKeyboardOnScreen:(id)a0;
- (void)releaseProcessAssertion;
- (id)description;
- (void)didAttachLayer;
- (BOOL)isHostingPID:(int)a0;
- (void)_deactivateScene;
- (void)signalKeyboardChangeComplete;
- (void)transition:(id)a0 eventStage:(unsigned long long)a1 withInfo:(id)a2;
- (void)didDetachLayer;
- (void)retrieveMoreDebugInformationWithCompletion:(id /* block */)a0;
- (void)addHostedPids:(id)a0;
- (void)clearAcquiringFocusFlags;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)a0;
- (void)dealloc;
- (void)cacheWindowContext;
- (void)setWindowContextID:(unsigned int)a0 focusContext:(id)a1 windowState:(unsigned long long)a2 withLevel:(double)a3;
- (void)startArbitrationWithExpectedState:(id)a0 focusContext:(id)a1 hostingPIDs:(id)a2 usingFence:(BOOL)a3 withSuppression:(int)a4 onConnected:(id /* block */)a5;
- (void)setDeactivating:(BOOL)a0;
- (void)startArbitrationWithExpectedState:(id)a0 hostingPIDs:(id)a1 usingFence:(BOOL)a2 withSuppression:(int)a3 onConnected:(id /* block */)a4;
- (void)signalKeyboardChanged:(id)a0 onCompletion:(id /* block */)a1;
- (void)signalKeyboardClientChanged:(id)a0 onCompletion:(id /* block */)a1;

@end
