@class UIViewController;

@interface TSKComposedViewController : TSKPopoverBasedViewController

@property (readonly, nonatomic) UIViewController *composedViewController;

- (id)initWithViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)title;
- (void)p_loadChildView;
- (id)i_contentViewController;
- (void)p_unloadChildView;

@end
