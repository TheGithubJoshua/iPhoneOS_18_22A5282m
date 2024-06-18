@protocol NCModalNavigationControllerDelegate;

@interface NCModalNavigationController : UINavigationController

@property (weak, nonatomic) id<NCModalNavigationControllerDelegate> presenterDelegate;

- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
