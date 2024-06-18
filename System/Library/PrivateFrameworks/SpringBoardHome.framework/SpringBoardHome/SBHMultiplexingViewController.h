@class SBHMultiplexingManager, NSString, NSHashTable, UIViewController;

@interface SBHMultiplexingViewController : UIViewController

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) SBHMultiplexingManager *multiplexingManager;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIViewController *multiplexedViewController;

- (void)removeObserver:(id)a0;
- (void)loadView;
- (void)activateWithViewController:(id)a0;
- (id)initWithLevel:(double)a0 identifier:(id)a1;
- (id)sbh_underlyingAvocadoHostViewControllers;
- (void)deactivate;
- (BOOL)sbh_isMultiplexingViewController;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setUpMultiplexedViewController;
- (void)addObserver:(id)a0;

@end
