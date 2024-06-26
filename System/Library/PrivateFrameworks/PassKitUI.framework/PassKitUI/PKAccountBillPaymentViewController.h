@class NSDecimalNumber, NSDictionary, PKContinuousButton, UILabel, PKBillPaymentSuggestedAmountList, NSString, PKCreditAccountSummary, PKTransactionSource, PKAccountServiceAccountResolutionCofiguration, NSDateFormatter, NSArray, NSMutableDictionary, NSNumberFormatter, CLInUseAssertion, UIButton, PKBillPaymentSuggestedAmountController, PKAccountBillPaymentAmountDescriptionView, PKAccount, PKBillPaymentRingView, PKCompoundInterestCalculator, UIImageView, PKAddBankAccountInformationViewController, PKAccountServiceAccountResolutionController, _PKUIKVisibilityBackdropView, UIScrollView, PKAccountUserCollection, UITapGestureRecognizer, PKAccountBillPaymentController;
@protocol PKAccountBillPaymentObserver;

@interface PKAccountBillPaymentViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, PKBillPaymentRingViewDelegate, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKBillPaymentRingViewDataSource, PKAccountBillPaymentAmountDescriptionViewDelegate, UIScrollViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKAccountAutomaticPaymentsControllerDelegate, PKAccountBillPaymentConfirmationViewControllerDelegate> {
    unsigned long long _interstitialState;
    unsigned long long _featuredViewState;
    NSArray *_installmentPlans;
    PKAccountBillPaymentController *_billPaymentCoordinator;
    PKBillPaymentSuggestedAmountController *_suggestedAmountController;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    PKCompoundInterestCalculator *_interestCalculator;
    NSMutableDictionary *_cachedInterestResults;
    NSDateFormatter *_interestDateFormatter;
    NSNumberFormatter *_amountFormatter;
    NSDecimalNumber *_apr;
    NSMutableDictionary *_smallRingInterestAttributes;
    NSDictionary *_smallRingInterestDateAttributes;
    PKAccountServiceAccountResolutionCofiguration *_configuration;
    PKCreditAccountSummary *_previousAccountSummary;
    BOOL _hasAnimatedRing;
    BOOL _performingAction;
    BOOL _buttonsArePayButtons;
    BOOL _shouldEnablePayLaterButton;
    BOOL _viewIsEnabled;
    BOOL _payButtonsEnabled;
    BOOL _usesAccessibilityLayout;
    BOOL _usesLargestAccessibilityLayout;
    BOOL _showKeyboard;
    BOOL _keyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKeyboardFrame;
    BOOL _inLayoutSubviews;
    PKAccountBillPaymentAmountDescriptionView *_amountDescriptionView;
    PKBillPaymentRingView *_ringView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_tertiaryButton;
    PKContinuousButton *_primaryButton;
    PKContinuousButton *_secondaryButton;
    UILabel *_smallRingInterestLabel;
    _PKUIKVisibilityBackdropView *_backdropView;
    UIScrollView *_scrollView;
    UIImageView *_productHeroView;
    UITapGestureRecognizer *_ringViewTapRecognizer;
    PKAddBankAccountInformationViewController *_addBankAccountViewController;
    PKAccountServiceAccountResolutionController *_accountResolutionController;
    CLInUseAssertion *_CLInUse;
    unsigned char _visibility;
}

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (readonly, nonatomic) PKTransactionSource *transactionSource;
@property (weak, nonatomic) id<PKAccountBillPaymentObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundColor;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargins;
+ (void)_billPaymentViewControllerForAccount:(id)a0 accountUserCollection:(id)a1 transactionSource:(id)a2 configuration:(id)a3 withCompletion:(id /* block */)a4;
+ (id)alertControllerForDisplayableError:(id)a0;
+ (id)alertControllerForDisplayableError:(id)a0 handler:(id /* block */)a1;
+ (void)billPaymentViewControllerForAccount:(id)a0 accountUserCollection:(id)a1 transactionSource:(id)a2 configuration:(id)a3 withCompletion:(id /* block */)a4;
+ (BOOL)canPayBillForAccount:(id)a0 displayableError:(id *)a1;
+ (id)displayableErrorForAccount:(id)a0 reason:(unsigned long long)a1;
+ (double)ringTopMargin;
+ (struct CGSize { double x0; double x1; })smallRingSizeWithAccessibilityLayout:(BOOL)a0;
+ (double)smallRingTopMargin;

- (id)_title;
- (void)loadView;
- (void)keyboardWillHide:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_accountDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_cancelButtonTapped:(id)a0;
- (void)_setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)_setAccount:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateSubtitle;
- (void)keyboardWillChange:(id)a0;
- (id)_paymentAmount;
- (void)accountBillPaymentController:(id)a0 hasChangedState:(unsigned long long)a1 error:(id)a2 updatedAccount:(id)a3;
- (id)presentationSceneIdentifierForAccountBillPaymentController:(id)a0;
- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(id)a0 style:(long long)a1 paymentService:(id)a2;
- (void)_reportEventForPassIfNecessary:(id)a0;
- (void)_updateForShowKeyboardAnimated:(BOOL)a0;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (id)_addBankAccountInformationViewController;
- (void)_configureProductHeroView;
- (void)_contactSupportButtonTapped:(id)a0;
- (void)_dismissViewControllerWithSuccess:(BOOL)a0;
- (id)_interestForAmount:(id)a0;
- (BOOL)_interestLabelIsOutsideSmallRing;
- (id)_interestPostDate;
- (id)_interestStringForAmount:(id)a0;
- (void)_interstitialButtonTapped:(id)a0;
- (void)_layoutFooterWithState:(struct { double x0; double x1; struct CGSize { double x0; double x1; } x2; double x3; double x4; BOOL x5; })a0;
- (struct CGSize { double x0; double x1; })_layoutScrollViewWithContentWidth:(double)a0;
- (void)_payLaterButtonTapped:(id)a0;
- (void)_payNowButtonTapped:(id)a0;
- (void)_performBillPaymentWithAmount:(id)a0 billPaymentSuggestedAmountDataEvent:(id)a1;
- (void)_presentAddBankAccount;
- (void)_presentAlertControllerForError:(id)a0;
- (id)_roundedInterestForAmount:(id)a0;
- (void)_setPayButtonsEnabled:(BOOL)a0;
- (void)_setShowKeyboard:(BOOL)a0;
- (void)_setupAmountDescriptionViewForInterstitial;
- (void)_showKeyboardButtonTapped:(id)a0;
- (void)_showOrHideKeypad;
- (void)_tappedSmallRingView:(id)a0;
- (void)_updateInterestString;
- (void)_updateNavigationTitle;
- (void)_updatePayNowButtonTitleWithAmount:(id)a0;
- (void)accountAutomaticPaymentsController:(id)a0 didSchedulePayment:(id)a1;
- (void)accountAutomaticPaymentsControllerDidSelectSetupCompletionDone:(id)a0 viewController:(id)a1;
- (void)accountServiceAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)addBankAccountInformationViewController:(id)a0 didAddFundingSource:(id)a1;
- (void)addBankAccountInformationViewControllerDidFinish:(id)a0;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;
- (void)billPaymentAmountDescriptionView:(id)a0 hasChangedAmount:(id)a1 isValidAmount:(BOOL)a2;
- (void)billPaymentAmountDescriptionViewHasTappedLearnMore:(id)a0;
- (id)billPaymentConfirmationInterestForPaymentAmount:(id)a0;
- (id)billPaymentConfirmationInterestStringForPaymentAmount:(id)a0;
- (void)billPaymentRingView:(id)a0 amountChanged:(id)a1;
- (id)billPaymentRingView:(id)a0 bottomCurvedTextForSuggestedAmount:(id)a1;
- (id)billPaymentRingView:(id)a0 interestTextForAmount:(id)a1;
- (void)billPaymentRingView:(id)a0 selectedSuggestedAmount:(id)a1 selectedSuggestedAmountIsTarget:(BOOL)a2 userInitiatedChange:(BOOL)a3;
- (id)billPaymentRingView:(id)a0 topCurvedTextForSuggestedAmount:(id)a1;
- (id)billPaymentRingViewZeroInterestText:(id)a0;
- (id)disabledBottomCurvedTextForBillPaymentRingView:(id)a0;
- (id)disabledTopCurvedTextForBillPaymentRingView:(id)a0;
- (id)initWithAccount:(id)a0 accountUserCollection:(id)a1 transactionSource:(id)a2 suggestedAmountController:(id)a3 configuration:(id)a4 interstitalState:(unsigned long long)a5;
- (id)initWithSuggestedAmountController:(id)a0 account:(id)a1 accountUserCollection:(id)a2 transactionSource:(id)a3 configuration:(id)a4 interstitialState:(unsigned long long)a5;
- (id)initWithSuggestedAmountController:(id)a0 transactionSource:(id)a1;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;

@end
