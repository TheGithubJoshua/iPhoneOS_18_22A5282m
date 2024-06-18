@class PKMerchantTokenLoadingView, PKPaymentWebService, PKMerchantToken;
@protocol PKMerchantTokenDetailViewControllerDelegate;

@interface PKMerchantTokenDetailViewController : PKSectionTableViewController {
    PKMerchantToken *_merchantToken;
    BOOL _showMerchantIcon;
    PKPaymentWebService *_webService;
    PKMerchantTokenLoadingView *_loadingView;
}

@property (weak, nonatomic) id<PKMerchantTokenDetailViewControllerDelegate> delegate;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewLayoutMarginsDidChange;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_setUpTableView;
- (void)_deleteMerchantToken;
- (id)_deletePaymentMethodCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_didSelectDeletePaymentMethod;
- (void)_disableNavigation;
- (void)_enableNavigation;
- (id)_headerCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_hideLoadingView;
- (id)_managePaymentMethodCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_setUpLoadingView;
- (void)_setUpViews;
- (void)_showLoadingView;
- (id)initWithMerchantToken:(id)a0;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
