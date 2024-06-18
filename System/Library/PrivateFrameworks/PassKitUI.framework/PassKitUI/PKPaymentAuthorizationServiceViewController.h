@class PKPaymentAuthorizationSummaryItemsView, UIBarButtonItem, UITableView, PKPaymentPreferencesViewController, PKAuthenticator, UIViewController, PKPeerPaymentAccount, UIView, NSLayoutConstraint, NSString, CNContact, PKContactFormatValidator, PKPaymentAuthorizationFooterView, NSMutableSet, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationTotalView, PKPaymentAuthorizationLayout, PKPaymentAuthorizationCouponCodeEntryViewController, PKPaymentAuthorizationPasswordButtonView;
@protocol PKPaymentAuthorizationPresenter, PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationServiceViewControllerDelegate;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate, AKSignInViewControllerDelegate, AKAppleIDAuthenticationInAppContextDelegate, PKPaymentAuthorizationServiceProtocol> {
    PKPaymentAuthorizationLayout *_layout;
    UIView *_contentView;
    UITableView *_detailTableView;
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;
    NSLayoutConstraint *_summaryHeightConstraint;
    PKPaymentAuthorizationTotalView *_totalView;
    PKPaymentAuthorizationFooterView *_footerView;
    PKPaymentAuthorizationPasswordButtonView *_passwordButtonView;
    NSLayoutConstraint *_passphraseBottomConstraint;
    BOOL _needsToAccommodateKeyboard;
    UIBarButtonItem *_cancelBarButtonItem;
    BOOL _cancelButtonDisabled;
    BOOL _scrollIndicatorShown;
    UIView *_passphraseSeparatorView;
    NSLayoutConstraint *_contentViewRightConstraint;
    PKPaymentPreferencesViewController *_shippingMethodPreferencesController;
    PKPaymentPreferencesViewController *_shippingAddressPreferencesController;
    PKPaymentPreferencesViewController *_shippingContactPreferencesController;
    PKPaymentPreferencesViewController *_paymentCardPreferencesController;
    PKPaymentPreferencesViewController *_bankAccountPreferencesController;
    PKPaymentAuthorizationCouponCodeEntryViewController *_couponCodeEntryViewController;
    BOOL _viewAppeared;
    BOOL _visible;
    BOOL _authenticating;
    BOOL _allowCompactProcessing;
    BOOL _allowBiometricPhysicalButtonInstruction;
    BOOL _useBiometricPhysicalButtonInstruction;
    BOOL _physicalButtonVisibleOnce;
    unsigned char _visibility;
    BOOL _keyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKeyboardFrame;
    unsigned short _layoutRecursionCounter;
    long long _userIntentStyle;
    long long _internalAuthenticationEvaluationState;
    BOOL _idleStateIsPasscode;
    unsigned int _faceIDCameraEdge;
    BOOL _showPoseOutOfRangeDownCoaching;
    long long _internalCoachingState;
    UIViewController *_passcodeViewController;
    UIViewController *_passphraseViewController;
    BOOL _hostApplicationResignedActive;
    BOOL _hostApplicationEnteredBackground;
    BOOL _treatingHostAsBackgrounded;
    BOOL _bypassAuthenticator;
    BOOL _isPad;
    BOOL _isAMPPayment;
    BOOL _isInstallment;
    BOOL _isPaymentSummaryPinned;
    BOOL _needsFinalCallback;
    long long _preferencesStyle;
    struct __IOHIDEventSystemClient { } *_hidSystemClient;
    unsigned long long _biometryAttempts;
    PKPeerPaymentAccount *_peerPaymentAccount;
    BOOL _peerPaymentBalanceIsInsufficient;
    NSMutableSet *_completionHandlers;
    CNContact *_lastUnserviceableAddress;
    double _authenticatorFingerOnTime;
    PKContactFormatValidator *_contactFormatValidator;
}

@property (readonly, weak, nonatomic) id<PKPaymentAuthorizationPresenter> presenter;
@property (retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine;
@property (retain, nonatomic) PKAuthenticator *authenticator;
@property (readonly, nonatomic) long long physicalButtonState;
@property (readonly, nonatomic) long long physicalButtonAnimationStyle;
@property (readonly, nonatomic) NSString *physicalButtonInstruction;
@property (readonly, nonatomic) long long coachingState;
@property (weak, nonatomic) id<PKPaymentAuthorizationServiceViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> host;
@property (readonly, nonatomic) BOOL blockingHardwareCancels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)keyboardWillHide:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updatePreferredContentSize;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setVisible:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)keyboardWillShow:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)keyboardWillChange:(id)a0;
- (void)signInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (BOOL)signInViewController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3;
- (void)_executeCompletionHandlers;
- (id)_unavailablePasses;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)a0;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)a0;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)a0 signatureRequest:(id)a1;
- (void)handleDismissWithCompletion:(id /* block */)a0;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(BOOL)a0;
- (BOOL)paymentAuthorizationStateMachine:(id)a0 didTransitionFromState:(unsigned long long)a1 toState:(unsigned long long)a2 withParam:(id)a3;
- (void)_createSubviews;
- (BOOL)_passwordRequired;
- (void)_setVisibility:(unsigned char)a0;
- (long long)_totalViewStyle;
- (Class)_viewPresenterClassForDataItem:(id)a0;
- (void)setFooterState:(long long)a0 string:(id)a1 animated:(BOOL)a2;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (void)dismissPassphraseViewController;
- (BOOL)_abandonActiveEnrollmentAttempts;
- (void)_abandonPSD2StyleAMPBuy;
- (id)_addCardEntry;
- (void)_addPassphraseViewControllerToHierarchy:(id)a0 withCompletion:(id /* block */)a1;
- (long long)_authenticatorPolicy;
- (id)_availabilityStringForPass:(id)a0;
- (id)_availablePasses;
- (id)_compactNavigationController;
- (void)_didCancel:(BOOL)a0;
- (void)_didFailWithError:(id)a0;
- (void)_didFailWithFatalError:(id)a0;
- (void)_didSucceedWithAuthorizationStateParam:(id)a0;
- (id)_evaluationRequestWithHasInitialAuthenticatorState:(BOOL)a0 initialAuthenticatorState:(unsigned long long)a1;
- (void)_handleModelUpdate;
- (void)_invalidPaymentDataWithParam:(id)a0;
- (BOOL)_passcodeAllowed;
- (void)_payWithPasswordPressed:(id)a0;
- (void)_processClientCallback:(id)a0;
- (long long)_progressStateForAuthenticationWithBiometricFailure:(BOOL)a0;
- (void)_removePassphraseViewFromHierarchyWithCompletionHandler:(id /* block */)a0;
- (void)_removeSimulatorHIDListener;
- (void)_resumeAuthenticationWithPreviousError:(id)a0 animated:(BOOL)a1;
- (void)_selectOptionsForDataItem:(id)a0;
- (void)_sendDidEncounterAuthorizationEventIfNecessary:(unsigned long long)a0;
- (void)_setAuthenticating:(BOOL)a0;
- (void)_setNavigationItemLeftItemForAMP;
- (BOOL)_setNavigationItemLeftItemFromNavigationTitle;
- (void)_setPasscodeViewController:(id)a0;
- (void)_setPassphraseViewController:(id)a0;
- (void)_setupBankAccounts;
- (void)_setupCouponCodeEntry;
- (void)_setupPaymentPassAndBillingAddress;
- (void)_setupShippingAddress;
- (void)_setupShippingContact;
- (void)_setupShippingMethods;
- (void)_setupWithPaymentRequest:(id)a0 relevantPassUniqueID:(id)a1 fromAppWithLocalizedName:(id)a2 applicationIdentifier:(id)a3 bundleIdentifier:(id)a4 teamIdentifier:(id)a5;
- (BOOL)_shouldShowSeparatorForRowAtIndexPath:(id)a0;
- (BOOL)_shouldShowUsePeerPaymentBalanceToggle;
- (void)_showScrollIndicatorIfNeeded;
- (void)_showUnserviceableAddressAlertForErrors:(id)a0;
- (void)_startEvaluationWithHasInitialAuthenticatorState:(BOOL)a0 initialAuthenticatorState:(unsigned long long)a1;
- (void)_startSimulatorHIDListener;
- (void)_suspendAuthentication;
- (void)_suspendAuthenticationAndForceReset:(BOOL)a0;
- (Class)_tableViewClassForDataItem:(id)a0;
- (void)_updateAvailableCardsPreferences;
- (void)_updateBackgroundedState:(BOOL)a0;
- (void)_updateBankAccounts;
- (void)_updateCancelButtonEnabledForState:(unsigned long long)a0 param:(id)a1;
- (void)_updateCoachingState;
- (void)_updateCouponCodeEntry;
- (void)_updateFooterStateIfAuthenticatingWithBiometricFailure:(BOOL)a0;
- (void)_updatePendingTransaction:(id)a0 withAuthorizationStateParam:(id)a1;
- (void)_updatePhysicalButtonInstructionAndNotify:(BOOL)a0;
- (void)_updatePhysicalButtonState;
- (void)_updatePreferencesWithErrors:(id)a0;
- (void)_updateShippingMethods;
- (void)_updateUserIntentStyle;
- (void)authenticator:(id)a0 didTransitionToCoachingState:(long long)a1;
- (void)authenticator:(id)a0 didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })a1;
- (void)authorizationDidAuthorizeCashDisbursementWithResult:(id)a0;
- (void)authorizationFooterViewDidChangeConstraints:(id)a0;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)a0;
- (void)authorizationFooterViewWillChangeConstraints:(id)a0;
- (void)biometricAttemptFailed;
- (void)cancelPressed:(id)a0;
- (void)contextWillBeginPresentingSecondaryUI:(id)a0;
- (id)dataItemForPaymentAuthorizationCouponCodeEntryViewController:(id)a0;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewControllerWithCompletion:(id /* block */)a0;
- (id)handlePaymentRequest:(id)a0 fromAppWithLocalizedName:(id)a1 andApplicationIdentifier:(id)a2;
- (id)handlePaymentRequest:(id)a0 relevantPassUniqueID:(id)a1 fromAppWithLocalizedName:(id)a2 applicationIdentifier:(id)a3 bundleIdentifier:(id)a4 teamIdentifier:(id)a5;
- (id)initWithLayout:(id)a0 presenter:(id)a1;
- (void)paymentAuthorizationCouponCodeEntryViewController:(id)a0 didChangeCouponCode:(id)a1;
- (void)paymentAuthorizationCouponCodeEntryViewControllerDidFinish:(id)a0;
- (void)presentPasscodeViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)presentPassphraseViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)resumeAndUpdateContentSize;
- (long long)selectedPaymentApplicationIndexFromCardEntries:(id)a0;
- (void)setFooterState:(long long)a0 string:(id)a1 animated:(BOOL)a2 withCompletion:(id /* block */)a3;

@end