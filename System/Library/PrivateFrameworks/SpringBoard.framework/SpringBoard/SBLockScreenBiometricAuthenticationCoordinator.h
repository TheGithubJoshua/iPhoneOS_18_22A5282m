@class NSTimer, NSString, NSHashTable, _SBPendingMesaUnlockBehaviorUnlockRequest, SBUIBiometricResource, SBWalletPreArmController, SBWalletPrearmRecognizer, NSMutableOrderedSet, PKPassLibrary;
@protocol SBBiometricUnlockBehavior, BSInvalidatable, SBLockScreenBiometricAuthenticationCoordinatorDelegate;

@interface SBLockScreenBiometricAuthenticationCoordinator : NSObject <BSDescriptionProviding, SBUIBiometricResourceObserver, SBBiometricUnlockBehaviorDelegate, SBWalletPrearmRecognizerDelegate, PKPassLibraryDelegate, SBUIPasscodeBiometricMatchingAssertionFactory> {
    SBUIBiometricResource *_biometricResource;
    id<BSInvalidatable> _fingerDetectEnabledAssertion;
    SBWalletPreArmController *_walletPreArmController;
    BOOL _presentingWalletInterface;
    BOOL _didMatchBeforeWalletPrearmRecognizerTimeout;
    id<BSInvalidatable> _matchingWantedAssertion;
    unsigned long long _matchingWantedAssertionMode;
    NSTimer *_matchingAssertionInvalidationTimer;
    BOOL _matchedWithResult;
    _SBPendingMesaUnlockBehaviorUnlockRequest *_pendingUnlockRequest;
    NSMutableOrderedSet *_activePasscodeMatchAssertions;
    NSHashTable *_disabledAssertions;
    NSHashTable *_disabledUnlockAssertions;
    NSHashTable *_disabledAutoUnlockAssertions;
}

@property (readonly, nonatomic, getter=_walletPrearmRecognizer) SBWalletPrearmRecognizer *walletPrearmRecognizer;
@property (readonly, nonatomic, getter=_state) unsigned long long state;
@property (retain, nonatomic, getter=_getPassLibrary, setter=_setPassLibrary:) PKPassLibrary *passLibrary;
@property (retain, nonatomic, getter=_setAutoUnlockBehavior, setter=_setAutoUnlockBehavior:) id<SBBiometricUnlockBehavior> autoUnlockBehavior;
@property (weak, nonatomic) id<SBLockScreenBiometricAuthenticationCoordinatorDelegate> delegate;
@property (nonatomic) BOOL bioAuthenticatedWhileMenuButtonDown;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isWalletPreArmDisabled) BOOL walletPreArmDisabled;
@property (readonly, nonatomic, getter=isUnlockingDisabled) BOOL isUnlockingDisabled;
@property (readonly, nonatomic, getter=isAutoUnlockingDisabled) BOOL autoUnlockingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactlessInterfaceDidDismissFromSource:(long long)a0;
- (BOOL)_stateWantsMatching:(unsigned long long)a0 outMatchMode:(unsigned long long *)a1;
- (BOOL)biometricUnlockBehavior:(id)a0 requestsFeedback:(id)a1;
- (void)_addPasscodeMatchingAssertion:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)acquireDisableWalletPreArmAssertionForReason:(id)a0;
- (BOOL)biometricUnlockBehavior:(id)a0 requestsUnlock:(id)a1 withFeedback:(id)a2;
- (BOOL)_hasActivePasscodeViews;
- (void)_setState:(unsigned long long)a0 forReason:(id)a1;
- (void)_setupPreArmRecognizerIfPossibleForReason:(id)a0;
- (void)_invalidateWalletPreArmRecognizer;
- (id)acquireDisableCoordinatorAssertionForReason:(id)a0;
- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (id)succinctDescription;
- (void)_updateMatchingForState:(unsigned long long)a0 forReason:(id)a1;
- (void)biometricResource:(id)a0 matchingAllowedDidChange:(BOOL)a1;
- (void)_createFingerDetectAssertion;
- (void)walletPrearmRecognizer:(id)a0 didFailToRecognizeForReason:(unsigned long long)a1;
- (void)walletPrearmRecognizerDidRecognize:(id)a0;
- (void).cxx_destruct;
- (void)_resetStateForReason:(id)a0;
- (id)acquireDisableAutoUnlockAssertionForReason:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)_isWalletPreArmAllowed;
- (void)_handlePassKitDismissalIfNecessaryWithReason:(id)a0;
- (id)acquireDisableUnlockAssertionForReason:(id)a0;
- (void)_stateChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_removePasscodeMatchingAssertion:(id)a0;
- (void)_clearFingerDetectAssertion;
- (void)_noteMenuButtonSinglePress;
- (void)passLibraryReceivedInterruption;
- (BOOL)_isMatchingEffectivelyDisabled;
- (id)initWithBiometricResource:(id)a0 walletPreArmController:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)a0 reason:(id)a1;
- (void)_handleIdentityMatchSuccess:(BOOL)a0;
- (void)_noteMenuButtonDoublePress;
- (void)_clearPendingUnlockRequest;
- (void)_toggleAutoUnlockBehaviorEnabled:(BOOL)a0;
- (void)_pendUnlockRequest:(id)a0;
- (void)_walletPreArmDisabledDidChange:(id)a0;

@end
