@class LAContext, NSArray, NSString, PKExpressPassController, NSMutableDictionary, NSMutableArray, PKPassSnapshotter;
@protocol PKPaymentDataProvider;

@interface PKExpressPassesViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPaymentPreferenceCardCellAccessoryViewDelegate> {
    NSMutableArray *_transitPasses;
    NSMutableArray *_selectedTransitPassIndices;
    PKExpressPassController *_expressPassController;
    NSMutableArray *_paymentPasses;
    NSArray *_allPasses;
    id<PKPaymentDataProvider> _paymentDataProvider;
    long long _style;
    NSMutableDictionary *_passUniqueIDToCell;
    NSMutableDictionary *_passUniqueIDToTransitBalanceModels;
    long long _selectedPaymentPassIndex;
    NSString *_selectedPaymentPassDisclosureString;
    BOOL _selectedPaymentPassIsInPendingState;
    BOOL _supressHandlingPassUpdates;
    unsigned int _supressHandlingPassUpdateCounter;
    BOOL _isUserInteractionsEnabled;
    BOOL _userAutomaticExpressModeText;
    BOOL _useOldAppearance;
    PKPassSnapshotter *_passSnapshotter;
    LAContext *_LAContext;
}

@property (retain, nonatomic) NSArray *passes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (double)_heightForRowAtIndexPath:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_beginReporting;
- (void)_reportExpressModeEnableFailed:(id)a0;
- (void)_acquireUserAuthForPass:(id)a0 withCompletion:(id /* block */)a1;
- (id)_additionalContextStringForPass:(id)a0;
- (unsigned int)_beginPassUpdateSuppression;
- (void)_configureAccessoryViewForPaymentCardCell:(id)a0 row:(long long)a1;
- (id)_conflictingPassesForPass:(id)a0 useCaseWithPasses:(id)a1;
- (void)_disableExpressModeForPass:(id)a0 withCompletion:(id /* block */)a1;
- (void)_enableExpressModeForPass:(id)a0 withCompletion:(id /* block */)a1;
- (void)_endPassUpdateSuppressionWithToken:(unsigned int)a0 delay:(double)a1;
- (void)_endReporting;
- (void)_fetchBalancesAndTransitPassPropertiesForPass:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateUserAuth;
- (BOOL)_isTransitExpressRowEnabledForIndex:(unsigned long long)a0;
- (id)_passWithUniqueIdentifier:(id)a0;
- (id)_paymentCardCellForRow:(long long)a0;
- (id)_paymentPassForIndex:(unsigned long long)a0;
- (id)_preferenceCardCellForIdentifier:(id)a0;
- (void)_promptUserAboutConflicts:(id)a0 forPass:(id)a1 completion:(id /* block */)a2;
- (void)_reloadLocalPassStores;
- (void)_reportExpressModeDisable:(id)a0;
- (void)_reportExpressModeEnable:(id)a0;
- (void)_reportExpressModeEvent:(id)a0 forPass:(id)a1;
- (id)_reportingSubject;
- (long long)_sectionForPass:(id)a0;
- (void)_sendExpressPassDidChangeNotification;
- (void)_setUserInteractionsEnabled:(BOOL)a0;
- (BOOL)_shouldShowSelectionDisclosureForPass:(id)a0;
- (id)_transformState:(id)a0;
- (id)_transitCardCellForRow:(long long)a0;
- (id)_transitPassForIndex:(unsigned long long)a0;
- (void)_transitUpdateWithState:(id)a0;
- (void)_updateBalancesWithServerBalances:(id)a0 transitPassProperties:(id)a1 forPass:(id)a2;
- (void)_updateBalancesWithServerBalances:(id)a0 transitPassProperties:(id)a1 forPassWithUniqueIdentifier:(id)a2;
- (void)_updateExpressState:(id)a0;
- (void)_updatePaymentCardCellWithIndex:(long long)a0 statusString:(id)a1;
- (void)_updateUIWithExpressState;
- (void)_upgradeExpressModeForPass:(id)a0 withCompletion:(id /* block */)a1;
- (void)_userChangedExpressSettingForPaymentPassAtIndexPath:(id)a0;
- (void)_userChangedExpressTransitToNone;
- (void)_userSetExpressTransitCardToEnabled:(BOOL)a0 cell:(id)a1;
- (id)initWithPaymentDataProvider:(id)a0 controller:(id)a1 style:(long long)a2;
- (void)paymentPreferenceCardCell:(id)a0 didChangeSwitchState:(BOOL)a1;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end