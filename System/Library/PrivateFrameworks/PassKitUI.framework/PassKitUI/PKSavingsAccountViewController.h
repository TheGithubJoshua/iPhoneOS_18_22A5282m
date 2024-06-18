@class PKDashboardMoreMenuFactory, _PKAccountSavingsViewController;

@interface PKSavingsAccountViewController : UIViewController {
    _PKAccountSavingsViewController *_viewController;
    PKDashboardMoreMenuFactory *_moreMenuFactory;
}

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;

@end
