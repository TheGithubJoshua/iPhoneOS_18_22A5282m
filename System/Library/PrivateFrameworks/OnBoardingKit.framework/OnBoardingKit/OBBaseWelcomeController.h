@interface OBBaseWelcomeController : UIViewController

@property (nonatomic) unsigned long long templateType;

+ (struct CGSize { double x0; double x1; })preferredContentSize;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })directionalLayoutMargins;
- (id)navigationItem;
- (void)_applyChromelessToBar:(long long)a0 navigationItem:(id)a1;
- (void)_presentationStyleValidationCheck;
- (double)autoScrollEdgeTransitionDistance;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insetsForTemplateType:(unsigned long long)a0;
- (long long)navigationBarScrollToEdgeBehavior;
- (void)updateDirectionalLayoutMargins;

@end
