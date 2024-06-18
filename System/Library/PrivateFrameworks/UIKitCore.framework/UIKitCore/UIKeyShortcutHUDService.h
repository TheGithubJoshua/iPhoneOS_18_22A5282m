@class NSValue, _UIKeyShortcutHUDModifierKeyListener, NSObject, UIWindowScene, _UIKeyShortcutHUDClientSession, _UIKeyShortcutHUDDismissalResponse, NSString, NSTimer, UIPhysicalKeyboardEvent, NSArray, _UIOverlayService, _UIKeyShortcutHUDConfiguration;
@protocol OS_dispatch_source, UIKeyShortcutHUDMetricsProvider;

@interface UIKeyShortcutHUDService : NSObject <_UIOverlayServiceDelegate, _UIKeyShortcutHUDKeyListenerDelegate, UIKeyShortcutHUDMetricsProvider> {
    struct { unsigned char hasPresentationObserversRegistered : 1; unsigned char hasPendingPresentationRequest : 1; } _flags;
}

@property (class, readonly, nonatomic) UIKeyShortcutHUDService *_existingHUDService;
@property (class, readonly, nonatomic, getter=_isOOPFeatureEnabled) BOOL _oopFeatureEnabled;
@property (class, readonly, nonatomic) UIKeyShortcutHUDService *sharedHUDService;

@property (retain, nonatomic) _UIOverlayService *overlayService;
@property (retain, nonatomic) _UIKeyShortcutHUDClientSession *session;
@property (retain, nonatomic) NSTimer *scheduledHUDTimer;
@property (retain, nonatomic) _UIKeyShortcutHUDConfiguration *scheduledHUDConfiguration;
@property (weak, nonatomic) UIWindowScene *scheduledHUDKeyWindowScene;
@property (retain, nonatomic) _UIKeyShortcutHUDDismissalResponse *deferredResponse;
@property (retain, nonatomic) _UIKeyShortcutHUDClientSession *deferredResponseSession;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deferredResponseTimer;
@property (retain, nonatomic) NSArray *scheduledHUDHoverGestureRecognizers;
@property (retain, nonatomic) NSValue *scheduledHUDInitialPointerLocation;
@property (readonly, nonatomic) _UIKeyShortcutHUDModifierKeyListener *modifierKeyListener;
@property (readonly, nonatomic) long long hudPresentationState;
@property (retain, nonatomic) UIPhysicalKeyboardEvent *lastKeyboardEvent;
@property (retain, nonatomic) id<UIKeyShortcutHUDMetricsProvider> metricsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationWillResignActive:(id)a0;
- (void)_handleDeferredDismissalResponse:(id)a0;
- (id)init;
- (BOOL)_isHUDAllowedOverCurrentWindow;
- (void)presentHUD;
- (void)_discardScheduledHUDBookkeeping;
- (void)keyShortcutHUDDidDismissWithResponse:(id)a0 toOverlayService:(id)a1;
- (id)metricsForWindow:(id)a0;
- (BOOL)_isHUDAllowedToAppearForProcess;
- (void)_applicationDidBeginIgnoringInteractionEvents:(id)a0;
- (void)_registerForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
- (void)_unregisterForSystemHUDPresentationDarwinNotifications;
- (void)_cancelAllScheduledHUDPresentationsIfNeeded;
- (void)handleTouchEvent:(id)a0;
- (void)_handleKeyCommandFromResponse:(id)a0 withSession:(id)a1;
- (void)_unregisterForScheduledHUDCancellationDarwinNotifications;
- (void)_didTakeScreenshot:(id)a0;
- (BOOL)_isHUDAllowedForCurrentResponder;
- (void)_addPresentationObserversIfNeeded;
- (void)_requestHUDDismissal;
- (void)modifierKeyListenerDidPressNonModifierKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canSummonHUDWithModifierFlag:(long long)a0;
- (void)_handleSystemHUDPresentationDarwinNotification;
- (void)_handleScheduledHUDPointerHover:(id)a0;
- (void)_hardwareKeyboardAvailabilityChanged:(id)a0;
- (void)dismissOrCancelHUDPresentationIfNeeded;
- (void)requestHUDPresentationIntoSearchMode;
- (void)_sendSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
- (void)_sendSystemHUDPresentationDarwinNotificationIfNeeded;
- (BOOL)_isHUDAllowedToBeScheduledForPresentationState:(long long)a0;
- (void)overlayServiceDidInvalidate:(id)a0;
- (void)handleKeyboardEvent:(id)a0;
- (BOOL)_isHUDSupportedOnPlatform;
- (BOOL)_isHUDAllowedForConfiguration:(id)a0;
- (void)_requestHUDPresentationWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissAllNonSystemHUDs;
- (void)cancelScheduledHUDPresentationIfNeeded;
- (BOOL)_isHUDAllowedToBePresentedForPresentationState:(long long)a0;
- (void)modifierKeyListener:(id)a0 didUpdateModifierFlag:(long long)a1;
- (void)_removePresentationObserversIfNeeded;
- (void)dealloc;
- (void)_requestHUDPresentationWithUnpreparedConfiguration:(id)a0;
- (void)_registerForSystemHUDPresentationDarwinNotifications;
- (void)_registerForScheduledHUDCancellationDarwinNotifications;
- (void)preventUnintendedSystemHUDPresentationIfNeeded;
- (void)_handleSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
- (void)_requestHUDPresentationIfAllowedWithUnpreparedConfiguration:(id)a0;
- (void)_sceneDidLoseKeyboardFocus:(id)a0;
- (void)_handleCancelScheduledHUDPresentationDarwinNotification;
- (void)scheduleHUDPresentation;
- (void)_unregisterForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;

@end
