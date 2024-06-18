@class AMSUILoadingView;

@interface AMSUICommonLoadingViewController : AMSUICommonViewController

@property (retain, nonatomic) AMSUILoadingView *loadingView;

- (void)_setup;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
