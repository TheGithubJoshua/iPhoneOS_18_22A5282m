@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;

- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)stopSpinner;

@end
