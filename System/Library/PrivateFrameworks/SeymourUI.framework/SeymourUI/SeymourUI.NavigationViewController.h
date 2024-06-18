@interface SeymourUI.NavigationViewController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ menuGestureRecognizer;
    void /* unknown type, empty encoding */ onShouldBeginRecognizing;
    void /* unknown type, empty encoding */ onMenuTapped;
    void /* unknown type, empty encoding */ viewControllerAppearanceCompletion;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (void)menuButtonTapped;

@end
