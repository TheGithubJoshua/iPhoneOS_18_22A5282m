@class RUIStyle, UIViewController;

@interface RUINavigationController : UINavigationController {
    unsigned long long _ruiSupportedInterfaceOrientations;
    BOOL _isDismissing;
}

@property (readonly, nonatomic) BOOL isDismissing;
@property (retain, nonatomic) RUIStyle *style;
@property (nonatomic) unsigned long long ruiModalPresentationStyle;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (copy, nonatomic) id /* block */ menuDismissalHandler;
@property (copy, nonatomic) id /* block */ viewDidDisappearHandler;

- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)setIsDismissing:(BOOL)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)_menuButtonPressed:(id)a0;

@end
