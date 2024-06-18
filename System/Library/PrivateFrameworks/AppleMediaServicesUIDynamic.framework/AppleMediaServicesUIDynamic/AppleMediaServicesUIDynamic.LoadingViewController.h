@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.LoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
