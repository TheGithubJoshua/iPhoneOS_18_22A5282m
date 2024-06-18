@class NSString, UIVisualEffectView, UIViewController;

@interface HUPocketedContainerViewController : UIViewController <HUPreloadableViewController>

@property (retain, nonatomic) UIVisualEffectView *pocketBackgroundView;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIViewController *pocketViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (id)_tearDownPocket;
- (void)_installContentViewController;
- (id)_installPocket;
- (id)hu_preloadContent;
- (id)initWithContentViewController:(id)a0 pocketViewController:(id)a1;

@end
