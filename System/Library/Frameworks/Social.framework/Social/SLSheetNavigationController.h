@interface SLSheetNavigationController : UINavigationController

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)setDefaultNavigationBarStyle;
- (void)setSheetNavigationBarStyle;

@end
