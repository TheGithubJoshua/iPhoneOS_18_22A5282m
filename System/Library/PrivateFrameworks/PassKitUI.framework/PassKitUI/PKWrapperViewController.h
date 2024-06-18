@class UIViewController;

@interface PKWrapperViewController : UIViewController {
    long long _type;
}

@property (readonly, nonatomic) UIViewController *wrappedViewController;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)preferredUserInterfaceStyle;
- (id)childViewControllerForStatusBarStyle;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)_canShowWhileLocked;
- (id)childViewControllerForStatusBarHidden;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (unsigned long long)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (id)initWithWrappedViewController:(id)a0 type:(long long)a1;

@end
