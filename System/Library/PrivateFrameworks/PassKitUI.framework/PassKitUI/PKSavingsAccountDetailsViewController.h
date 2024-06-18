@class UIImageView, PKAnimatedNavigationBarTitleView, _PKAccountSavingsDetailsViewController;

@interface PKSavingsAccountDetailsViewController : UIViewController {
    _PKAccountSavingsDetailsViewController *_viewController;
    PKAnimatedNavigationBarTitleView *_titleIconView;
    UIImageView *_titleIcon;
}

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
