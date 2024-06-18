@class NSArray, UIViewController;

@interface PUAirPlayRootViewController : UIViewController

@property (copy, nonatomic, setter=_setChildViewConstraints:) NSArray *_childViewConstraints;
@property (retain, nonatomic) UIViewController *childViewController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)setChildViewController:(id)a0 animated:(BOOL)a1;

@end
