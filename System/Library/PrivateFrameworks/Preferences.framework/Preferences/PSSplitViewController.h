@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController

@property (retain, nonatomic) PSRootController *containerNavigationController;
@property (weak, nonatomic) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;

- (void)setViewControllers:(id)a0;
- (id)categoryController;
- (void)popRecursivelyToRootController;
- (id)childViewControllerForStatusBarStyle;
- (void)showInitialViewController:(id)a0;
- (void).cxx_destruct;
- (void)setupControllerForToolbar:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
