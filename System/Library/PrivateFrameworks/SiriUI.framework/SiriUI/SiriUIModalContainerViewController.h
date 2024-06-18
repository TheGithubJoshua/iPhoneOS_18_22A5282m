@class UIViewController;
@protocol SiriUIModalContainerViewControllerDelegate;

@interface SiriUIModalContainerViewController : UIViewController

@property (readonly, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) id<SiriUIModalContainerViewControllerDelegate> delegate;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)childViewControllerForStatusBarStyle;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)_canShowWhileLocked;
- (id)childViewControllerForStatusBarHidden;
- (id)initWithContentViewController:(id)a0;

@end
