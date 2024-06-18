@class UIViewController;

@interface STIOSAlertPresenter : NSObject <STAlertPresenter>

@property (readonly) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)initWithPresentingViewController:(id)a0;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;

@end
