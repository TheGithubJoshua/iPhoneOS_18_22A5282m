@class PKSavingsAccountAssessmentManager, NSString, NSArray, PKFindBankAccountInformationFooterView, NSMutableDictionary, PKTableHeaderView, UIButton, PKBankAccountInformation, PKAccount;
@protocol PKAddBankAccountInformationViewControllerDelegate;

@interface PKAddBankAccountInformationViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {
    PKTableHeaderView *_tableHeader;
    PKFindBankAccountInformationFooterView *_footerView;
    UIButton *_deleteBankInformationButton;
    unsigned long long _state;
    PKBankAccountInformation *_bankInformation;
    NSArray *_cellText;
    NSArray *_cellPlaceholderText;
    NSMutableDictionary *_cells;
    NSString *_accountCountryCode;
    NSMutableDictionary *_userEnteredValues;
    BOOL _isEditingBankInformation;
    BOOL _hasInteractedWithCell;
    BOOL _prefilledFromKeychain;
    NSMutableDictionary *_cellHasPastedContent;
    PKAccount *_featureAccount;
    PKSavingsAccountAssessmentManager *_assessmentManager;
}

@property (nonatomic) BOOL offerKeychainPreFill;
@property (weak, nonatomic) id<PKAddBankAccountInformationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(unsigned long long)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (id)init;
- (void)next:(id)a0;
- (void)loadView;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillLayoutSubviews;
- (void)cancel:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)_footerView;
- (id)_headerTitle;
- (void)textFieldDidClear:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (id)_headerSubTitle;
- (void)_updateHeaderAndNavigationItems;
- (void)_addPaymentFundingSourceWithCompletion:(id /* block */)a0;
- (BOOL)_allCellsHavePastedContent;
- (id)_bankInformationTextForRow:(unsigned long long)a0;
- (id)_cellHasPastedContent;
- (BOOL)_cellValuesAreValid;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)a0;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)a0 minDigits:(unsigned long long)a1 maxDigits:(unsigned long long)a2;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)a0 numberOfDigits:(unsigned long long)a1;
- (void)_deleteBankInformation;
- (void)_hideHeaderActivitySpinner;
- (BOOL)_isAccountNumberCellValid;
- (BOOL)_isCellValidAtRow:(unsigned long long)a0;
- (BOOL)_isRoutingNumberCellValid;
- (unsigned long long)_maxTextLengthForRow:(unsigned long long)a0;
- (unsigned long long)_minTextLengthForRow:(unsigned long long)a0;
- (double)_minimumRequiredWidthForCellText:(id)a0 withFont:(id)a1;
- (id)_placeholderTextForRow:(unsigned long long)a0;
- (void)_reloadTableSection;
- (unsigned long long)_rowWithTextField:(id)a0;
- (void)_setCellHasPastedContent:(BOOL)a0 forRow:(unsigned long long)a1;
- (void)_setIdleTimerDisabled:(BOOL)a0 title:(id)a1 subtitle:(id)a2;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (void)_setNavigationBarItemsHidden:(BOOL)a0;
- (void)_setTableFooterView;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(BOOL)a0 title:(id)a1 subtitle:(id)a2;
- (void)_setText:(id)a0 forForCellAtRow:(unsigned long long)a1;
- (void)_showHeaderActivitySpinner;
- (void)_showHowToFindAccountInformationViewController:(id)a0;
- (id)_textForRow:(unsigned long long)a0;
- (void)_updateBankAccountInformationWithValues:(id)a0 completion:(id /* block */)a1;
- (id)_userEnteredTextForCellAtRow:(unsigned long long)a0;
- (id)initWithDelegate:(id)a0 bankInformation:(id)a1 accountCountryCode:(id)a2;
- (id)initWithDelegate:(id)a0 bankInformation:(id)a1 accountCountryCode:(id)a2 featureAccount:(id)a3;
- (id)initWithState:(unsigned long long)a0 delegate:(id)a1 bankInformation:(id)a2 accountCountryCode:(id)a3 featureAccount:(id)a4;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)setHeaderViewTitle:(id)a0 subtitle:(id)a1;

@end