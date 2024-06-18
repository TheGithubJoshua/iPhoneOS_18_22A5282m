@class NSString, UIViewController;

@interface CKKeyboardContentViewController : UIInputViewController

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIViewController *viewController;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0 identifier:(id)a1;

@end
