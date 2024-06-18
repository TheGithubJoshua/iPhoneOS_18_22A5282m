@class UIViewController, NSLayoutConstraint;

@interface MUFixedHeightAwareViewController : UIViewController {
    NSLayoutConstraint *_heightConstraint;
    UIViewController *_childVC;
}

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)_setupChildVC;

@end
