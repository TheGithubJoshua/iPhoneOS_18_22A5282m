@class UIStatusBar_Modern, DBEnvironmentConfiguration, DBStatusBarStateProvider;

@interface DBStatusBarViewController : UIViewController

@property (retain, nonatomic) DBStatusBarStateProvider *stateProvider;
@property (retain, nonatomic) UIStatusBar_Modern *statusBarView;
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;

- (void)_createStatusBar;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasActivePill;
- (id)initWithStateProvider:(id)a0 environmentConfiguration:(id)a1;
- (void)statusBarEdgeUpdated;

@end
