@class _UISearchControllerLimitedAccessView;

@interface _UISearchControllerLimitedUIShieldViewController : UIViewController

@property (retain, nonatomic) _UISearchControllerLimitedAccessView *limitedAccessView;
@property (copy, nonatomic) id /* block */ dismissAction;

- (void)loadView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_backButtonPressed:(id)a0;

@end
