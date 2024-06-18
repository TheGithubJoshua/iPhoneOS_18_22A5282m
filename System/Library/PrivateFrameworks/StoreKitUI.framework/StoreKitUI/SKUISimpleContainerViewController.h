@class UIViewController;

@interface SKUISimpleContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController *contentViewController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)loadView;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
