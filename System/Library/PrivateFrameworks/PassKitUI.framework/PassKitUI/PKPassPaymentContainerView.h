@class UIViewController, PKContactlessInterfaceSession, NSNumber, PKPaymentTransaction, PKDataReleaseViewController, PKMerchant, NFDCKAssertion, NSMutableArray, NSString, PKPaymentService, NSArray, PKTransitBalanceModel, PKAssertion, PKPassTileGroupView, PKPeerPaymentService, UITextView, UIButton, NSObject, PKPaymentTransactionView, UIView, NSData, PKPaymentBarcodeViewController, PKAuthenticator, PKLinkedApplication, PKPassPaymentApplicationView, LAUIPhysicalButtonView, PKPassLibrary, PKPassPaymentPayStateView, PKPassValueAddedServiceInfoView, PKPeerPaymentAccountResolutionController, PKContactResolver;
@protocol PKPaymentDashboardCellActionHandleable, UICoordinateSpace, OS_dispatch_queue, OS_dispatch_source;

@interface PKPassPaymentContainerView : PKPassFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentApplicationViewDelegate, PKContactlessInterfaceSessionDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver, PKPassTileGroupViewDelegate, PKTransactionAuthenticationPasscodeViewControllerDelegate, PKLinkedApplicationObserver, UITextViewDelegate, PKDataReleaseViewControllerDelegate, PKCompactNavigationContainerControllerDelegate> {
    PKPaymentService *_paymentService;
    PKAuthenticator *_authenticator;
    PKPassPaymentPayStateView *_payStateView;
    PKContactlessInterfaceSession *_contactlessInterfaceSession;
    BOOL _contactlessInterfaceSessionSuspended;
    BOOL _contactlessInterfaceSessionShared;
    NSObject<OS_dispatch_queue> *_authorizationQueue;
    PKPeerPaymentService *_peerPaymentService;
    PKContactResolver *_transactionFooterContactResolver;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    id<UICoordinateSpace> _fixedScreenCoordinateSpace;
    LAUIPhysicalButtonView *_physicalButtonView;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellPrimary;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellSecondary;
    UIView<PKPaymentDashboardCellActionHandleable> *_dualValueCellPrimary;
    PKPassTileGroupView *_tileGroupView;
    UIView *_displayedPrimaryView;
    UIView *_displayedSecondaryView;
    unsigned long long _contentUpdateCounter;
    NSString *_ignoringUpdatesFromTransactionIdentifier;
    PKPassLibrary *_passLibrary;
    PKPassPaymentApplicationView *_applicationsView;
    PKPassValueAddedServiceInfoView *_valueAddedServiceInfoView;
    UIButton *_actionButton;
    NSString *_pendingPayStateTextOverride;
    unsigned long long _payStateTransitionCounter;
    long long _pendingPayState;
    BOOL _pendingPayStateAnimated;
    long long _pendingPayStateGlyphState;
    BOOL _pendingPayStateGlyphStateAnimated;
    BOOL _pendingPayStateGlyphStateQueued;
    long long _currentPayState;
    unsigned long long _authenticatorState;
    BOOL _authenticating;
    BOOL _userIntentRequired;
    long long _userIntentStyle;
    long long _authenticationEvaluationState;
    NSData *_authorizedExternalizedContext;
    BOOL _transitioning;
    NSMutableArray *_transitionCompletionHandlers;
    NSMutableArray *_pendingGlyphStateCompletionHandlers;
    BOOL _glyphStateDirty;
    BOOL _presentationWasForcedFromButton;
    BOOL _presentationWasForFieldDetect;
    BOOL _waitingForGlyphView;
    long long _transactionSubstate;
    BOOL _holdingTerminalSubstate;
    NSObject<OS_dispatch_source> *_transactionResolutionTimer;
    NSObject<OS_dispatch_source> *_transactionTerminalResponseTimer;
    BOOL _presentingPasscode;
    BOOL _requiresPasscodeDismissal;
    UIViewController *_passcodeVC;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
    unsigned int _deactivationReasons;
    BOOL _isVisible;
    BOOL _waitingForPasses;
    BOOL _VASInfoViewHidden;
    BOOL _VASInfoViewWillShow;
    BOOL _VASInfoViewSuppressedTransactionUpdate;
    double _lastFieldExitTime;
    BOOL _requireExpress;
    BOOL _pendingAutomaticAuthorization;
    NSNumber *_pendingPresentationContextState;
    double _lastTransactionTime;
    NSMutableArray *_valueAddedPasses;
    BOOL _didBecomeHiddenWhileAuthorized;
    PKTransitBalanceModel *_transitBalanceModel;
    NSArray *_tiles;
    NSString *_activeBarcodeIdentifier;
    NSData *_activeBarcodeCredential;
    PKAssertion *_userNotificationSupressionAssertion;
    NSObject<OS_dispatch_source> *_barcodeDisplayTimer;
    BOOL _transactionAuthenticationInProgress;
    BOOL _transactionAuthenticationUIActive;
    UIViewController *_activeTransactionAuthenticationViewController;
    PKPaymentTransactionView *_transactionAwardsView;
    PKPaymentTransaction *_transactionForDisplayedBarcode;
    UITextView *_bottomTextView;
    BOOL _bottomTextViewAnimating;
    BOOL _bottomTextViewNeedsUpdate;
    double _bottomTextViewDisplayedTimestamp;
    PKLinkedApplication *_linkedApplication;
    NSMutableArray *_linkedApplicationUpdateCompletionHandlers;
    BOOL _collectingBarcodeEventMetadata;
    PKPaymentBarcodeViewController *_barcodeViewController;
    PKDataReleaseViewController *_dataReleaseVC;
    long long _failureAction;
    long long _failureReason;
    PKMerchant *_merchantForCurrentTransaction;
    BOOL _sessionExchangeActive;
    NSData *_sessionExchangeToken;
    NSMutableArray *_sessionExchangeTaskQueue;
    NFDCKAssertion *_dckAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_initialUserIntentRequiredAssumptionForPass:(id)a0 context:(id)a1 paymentService:(id)a2 requirePhysicalButton:(BOOL)a3;
+ (BOOL)initialPhysicalButtonRequiredAssumptionForPass:(id)a0 context:(id)a1 paymentService:(id)a2;
+ (BOOL)initialUserIntentRequiredAssumptionForPass:(id)a0 context:(id)a1 paymentService:(id)a2;
+ (BOOL)shouldAutomaticallyAuthorizeForPass:(id)a0 withContext:(id)a1;
+ (BOOL)userIntentPotentiallyRequiredForPass:(id)a0 fieldDetect:(BOOL)a1;

- (void)_openURL:(id)a0;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)passWithUniqueIdentifier:(id)a0 didUpdateTiles:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)credential:(id)a0 forPaymentApplication:(id)a1 didUpdateRangingSuspensionReasons:(unsigned long long)a2;
- (void)dealloc;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (void)layoutSubviews;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (BOOL)_isBackgrounded;
- (id)initWithPass:(id)a0;
- (void)contactlessInterfaceSession:(id)a0 didEndPersistentCardEmulationWithContext:(id)a1;
- (void)contactlessInterfaceSession:(id)a0 didFinishTransactionWithContext:(id)a1;
- (void)contactlessInterfaceSession:(id)a0 didReceive18013Request:(id)a1 readerAuthInfo:(id)a2;
- (void)contactlessInterfaceSession:(id)a0 didReceiveExpressState:(unsigned long long)a1 expressTransactionEvent:(unsigned long long)a2;
- (void)contactlessInterfaceSession:(id)a0 didSuspendWithToken:(id)a1;
- (void)contactlessInterfaceSession:(id)a0 didTransitionFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)contactlessInterfaceSessionDidEnterField:(id)a0 withProperties:(id)a1;
- (void)contactlessInterfaceSessionDidExitField:(id)a0;
- (void)contactlessInterfaceSessionDidFail:(id)a0 forPaymentApplication:(id)a1 paymentPass:(id)a2 valueAddedServicePasses:(id)a3;
- (void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)a0;
- (void)contactlessInterfaceSessionDidFailTransaction:(id)a0 forPaymentApplication:(id)a1 paymentPass:(id)a2;
- (void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)a0;
- (void)contactlessInterfaceSessionDidReceiveUntrustedTerminal:(id)a0;
- (void)contactlessInterfaceSessionDidResume:(id)a0;
- (void)contactlessInterfaceSessionDidSelectPayment:(id)a0;
- (void)contactlessInterfaceSessionDidStartTransaction:(id)a0;
- (void)contactlessInterfaceSessionDidTerminate:(id)a0;
- (void)contactlessInterfaceSessionDidTerminate:(id)a0 withErrorCode:(unsigned long long)a1;
- (void)contactlessInterfaceSessionDidTimeout:(id)a0 forPaymentApplication:(id)a1 paymentPass:(id)a2 valueAddedServicePasses:(id)a3;
- (void)contactlessInterfaceSessionHasPendingServerRequest:(id)a0;
- (void)paymentServiceReceivedInterruption;
- (void)_didInvalidate;
- (void)_commitPendingPayStateAnimated:(BOOL)a0;
- (void)_executeNextSessionExchangeTask;
- (void)_handleContactlessInterfaceSessionDidEnterField:(id)a0 withProperties:(id)a1;
- (void)_passcodeFallbackButtonPressed:(id)a0;
- (void)_postDidDeauthorizeNotification;
- (void)_transitionToState:(long long)a0 withTextOverride:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_applyPayState:(long long)a0;
- (void)_endTransition:(BOOL)a0;
- (void)_processValueAddedServiceTransactionsForContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)_reportPassPresentedForPayment:(id)a0;
- (BOOL)_showPhysicalButtonForPayState:(long long)a0;
- (unsigned long long)_actionAfterTransaction;
- (void)_activateForPayment;
- (void)_activateForPaymentWithApplication:(id)a0;
- (void)_activatePaymentApplication:(id)a0 forPaymentPass:(id)a1 withCompletion:(id /* block */)a2;
- (void)_addPasscodeButtonPressed:(id)a0;
- (void)_addTransitionCompletionHandler:(id /* block */)a0;
- (void)_applyLatestContentToViews;
- (void)_applyPayState:(long long)a0 withTextOverride:(id)a1;
- (void)_applyPayState:(long long)a0 withTextOverride:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_applyPayState:(long long)a0 withTextOverride:(id)a1 completionHandler:(id /* block */)a2;
- (void)_applyPaymentIndefiniteSuccessState;
- (void)_applyPresentationPayState:(long long)a0;
- (void)_applyTerminalFailureState;
- (void)_applyTerminalTransactionSubstateWithSuccess:(BOOL)a0 reset:(BOOL)a1;
- (void)_applyTerminalTransactionSubstateWithSuccess:(BOOL)a0 reset:(BOOL)a1 errorOverride:(id)a2;
- (id)_attributedStringForBottomTextViewFromString:(id)a0;
- (BOOL)_authenticationAllowed;
- (void)_authorizeForTransactionWithAuthenticatorEvaluationResponse:(id)a0 authenticationIdentifier:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_beginBarcodeDisplayTimer;
- (void)_beginPaymentAuthorization;
- (void)_beginSessionExchange:(id /* block */)a0;
- (void)_beginTerminalResponseTimeout;
- (id)_buttonForState:(long long)a0;
- (void)_calculateTerminalStateWithRangingSuspensionReasons:(unsigned long long)a0;
- (BOOL)_canAuthenticateWithBiometrics;
- (BOOL)_canAuthenticateWithPasscode;
- (BOOL)_canDisplaySecondaryView;
- (void)_cancelAuthentication;
- (void)_cancelBarcodeDisplayTimer;
- (void)_cancelHoldingTerminalTransactionSubstateIfNecessary;
- (void)_cancelTerminalResponseTimeout;
- (void)_cancelTransactionAuthentication;
- (void)_clearSessionExchangeTasks;
- (void)_collectAndSubmitBarcodeEventMetadataWithAuthenticationType:(long long)a0;
- (void)_configureForPaymentWithPaymentPass:(id)a0 context:(id)a1;
- (void)_configureForStyle:(long long)a0 context:(id)a1;
- (void)_configureForValueAddedServiceWithPass:(id)a0 context:(id)a1;
- (void)_didAuthorizePaymentApplicationWithAuthenticationIdentifier:(unsigned long long)a0;
- (void)_dismissBarcodeViewControllerIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_dismissTransactionAuthenticationPasscodeViewController:(id)a0 withCompletion:(id /* block */)a1;
- (id)_emphasisButtonForState:(long long)a0;
- (void)_emphasizeStateIfPossible:(long long)a0 withTextOverride:(id)a1;
- (void)_emphasizeStateIfPossible:(long long)a0 withTextOverride:(id)a1 playSystemSound:(BOOL)a2;
- (void)_endContactlessPaymentSession;
- (void)_endPaymentAuthorizationWithWillUpdateState:(BOOL)a0;
- (void)_endSessionExchange;
- (void)_executePendingGlyphStateCompletionHandlers:(BOOL)a0;
- (void)_executeTransitionCompletionHandlers:(BOOL)a0;
- (void)_fetchBarcodeForPassUniqueIdentifier:(id)a0 shouldReregisterIfNecessary:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)_filledButtonWithTitle:(id)a0 action:(id)a1;
- (void)_finishHoldingTerminalTransactionSubstateAfterDelay:(double)a0;
- (void)_handleReceivedBarcodePaymentTransaction:(id)a0;
- (BOOL)_hasValueAddedServicePasses;
- (void)_insertPaymentTransactionForActiveBarcode;
- (BOOL)_isDeactivated;
- (BOOL)_isForegroundActive;
- (BOOL)_isPrimaryViewVisible;
- (BOOL)_isSecondaryViewVisible;
- (BOOL)_isVASInfoViewVisible;
- (id)_passcodeButtonTitle;
- (void)_performActivationStateUpdate:(id /* block */)a0;
- (void)_performApplicationRedirectForTransaction:(id)a0;
- (void)_performAuthentication;
- (void)_performAuthenticationForTransactionIfNecessary:(id)a0;
- (void)_performPaymentPINCollectionForTransaction:(id)a0;
- (void)_performTransactionSignatureSubmissionForTransaction:(id)a0;
- (void)_performUserConfirmationForTransaction:(id)a0;
- (void)_postDidAuthorizeNotification;
- (void)_presentPassWithUniqueIdentifier:(id)a0 additionalPassUniqueIdentifiers:(id)a1;
- (void)_presentPassWithUniqueIdentifier:(id)a0 additionalPassUniqueIdentifiers:(id)a1 payState:(long long)a2;
- (void)_processPaymentTransactionForContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)_promoteToAuthorizedStateIfPossible;
- (BOOL)_recognizingBiometrics;
- (void)_reregisterAuxiliaryCapabilityForPassUniqueIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)_resetActiveApplicationForPaymentPass:(id)a0 withCompletion:(id /* block */)a1;
- (void)_resetCardEmulationWithCompletion:(id /* block */)a0;
- (void)_resetToIdleState;
- (void)_resetToIdleStateAfterDelay:(double)a0;
- (void)_resetTransactionAuthenticationIfNecessary;
- (BOOL)_restartPaymentAuthorization;
- (void)_retrieveDecryptedBarcodeWithAuthorization:(id)a0 shouldFetchBarcodeIfNecessary:(BOOL)a1 completion:(id /* block */)a2;
- (void)_setGlyphState:(long long)a0 animated:(BOOL)a1;
- (void)_setGlyphState:(long long)a0 animated:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_setTransactionAuthenticationInProgress:(BOOL)a0;
- (void)_setTransactionAuthenticationUIActive:(BOOL)a0;
- (void)_setUserIntentRequired:(BOOL)a0;
- (void)_setUserIntentStyle:(long long)a0;
- (void)_setVASInfoViewHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_setValueAddedServicePasses:(id)a0;
- (BOOL)_shouldDisplayPrimaryView;
- (BOOL)_shouldDisplaySecondaryView;
- (BOOL)_shouldShowTerminalIsNotRequestingPaymentError;
- (void)_showEmphasisButtonForStateIfPossible:(long long)a0;
- (BOOL)_showGlyphForPayState:(long long)a0;
- (void)_showInstallAssociatedApplicationInstructionsIfNecessary;
- (void)_showTerminalIsNotRequestingPaymentError;
- (void)_showTerminalIsRequestingPaymentError;
- (void)_submitEncryptedPIN:(id)a0 forTransactionIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_submitSignatureForTransactionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_submitUserConfirmation:(BOOL)a0 forTransactionIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)_textOverrideForFatalError;
- (double)_topMargin;
- (void)_transactionAwardsViewTapped:(id)a0;
- (void)_transitionViewsFromPayState:(long long)a0 animated:(BOOL)a1;
- (void)_updateApplicationsView;
- (void)_updateAuthenticatorState;
- (void)_updateBottomTextView;
- (void)_updateCoachingInstruction;
- (void)_updateContentPrimaryView;
- (void)_updateContentSecondaryView;
- (void)_updateDigitalCarKeyAssertion;
- (void)_updatePhysicalButtonRequirement;
- (void)_updateVASInfoViewSuppressedTransactionIfNecessary;
- (void)authenticator:(id)a0 didTransitionToCoachingState:(long long)a1;
- (void)authenticator:(id)a0 didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })a1;
- (void)coachingStateDidChange;
- (void)compactNavigationContainerControllerReceivedExternalTap:(id)a0;
- (void)dataReleaseViewController:(id)a0 didAuthorizeWithExternalAuthorizationData:(id)a1 dataToRelease:(id)a2;
- (void)dataReleaseViewController:(id)a0 didFinishWithError:(id)a1;
- (void)dataReleaseViewController:(id)a0 didResolveToMerchant:(id)a1;
- (void)didBecomeHiddenAnimated:(BOOL)a0;
- (void)didBecomeVisibleAnimated:(BOOL)a0;
- (void)dismissPasscodeViewController;
- (void)foregroundActiveArbiter:(id)a0 didUpdateDeactivationReasons:(unsigned int)a1;
- (id)initWithPass:(id)a0 context:(id)a1 paymentSession:(id)a2 paymentService:(id)a3;
- (BOOL)isPassAuthorized;
- (void)linkedApplicationDidChangeState:(id)a0;
- (BOOL)passOnlySupportsPassiveEntry;
- (void)passTileGroupView:(id)a0 executeSEActionForPass:(id)a1 tile:(id)a2 withCompletion:(id /* block */)a3;
- (void)passcodeViewController:(id)a0 didGenerateEncryptedPasscode:(id)a1;
- (void)passcodeViewController:(id)a0 requestSessionExchangeTokenWithHandler:(id /* block */)a1;
- (void)passcodeViewControllerDidCancel:(id)a0;
- (void)passcodeViewControllerDidEndSessionExchange:(id)a0;
- (void)payStateView:(id)a0 revealingCheckmark:(BOOL)a1;
- (void)payStateViewDidUpdateLayout:(id)a0;
- (void)paymentApplicationView:(id)a0 didSelectApplication:(id)a1 completion:(id /* block */)a2;
- (void)presentPasscodeViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)showFullScreenBarcode;
- (void)willBecomeHiddenAnimated:(BOOL)a0;
- (void)willBecomeVisibleAnimated:(BOOL)a0;

@end