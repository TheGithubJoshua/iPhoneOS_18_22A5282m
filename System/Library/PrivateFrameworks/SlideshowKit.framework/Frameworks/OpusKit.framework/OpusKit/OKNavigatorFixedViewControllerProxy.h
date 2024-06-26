@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController

@property (retain, nonatomic) OKPageViewController *pageViewController;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)commonInit;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)prepareForDisplay;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)resolutionDidChange;
- (void)updatePageViewController;

@end
