@class TVRKeyboardView, NSString, TVRAlertView, UIView, TVRCKeyboardAttributes;
@protocol TVRAlertControllerDelegate;

@interface TVRAlertController : UIViewController <TVRAlertViewDelegate, TVRKeyboardViewDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) TVRAlertView *alertView;
@property (retain, nonatomic) TVRKeyboardView *keyboardView;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousKeyboardFrame;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) TVRCKeyboardAttributes *keyboardAttributes;
@property (weak, nonatomic) id<TVRAlertControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_cancel;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)_keyboardChanged:(id)a0;
- (id)_contentViewBasedOnType;
- (void)_layoutForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_observeKeyboardNotifications;
- (void)alertView:(id)a0 didUpdateText:(id)a1;
- (void)alertViewDidCancel:(id)a0;
- (void)enableDictationButton:(BOOL)a0;
- (id)initForTextPasswordType:(id)a0;
- (id)initWithKeyboardAttributes:(id)a0;
- (id)initWithTitle:(id)a0 PINEntryAttributes:(id)a1;
- (id)initWithTitle:(id)a0 keyboardAttributes:(id)a1;
- (id)initWithTitle:(id)a0 passcodeSize:(long long)a1;
- (void)keyboardView:(id)a0 didUpdateText:(id)a1;
- (void)keyboardView:(id)a0 generatedTextInputPayload:(id)a1;
- (void)keyboardViewDidCancel:(id)a0;
- (void)keyboardViewDidHitReturnKey:(id)a0;
- (void)keyboardViewPressedDictationButton:(id)a0;
- (void)keyboardViewReleasedDictationButton:(id)a0;

@end