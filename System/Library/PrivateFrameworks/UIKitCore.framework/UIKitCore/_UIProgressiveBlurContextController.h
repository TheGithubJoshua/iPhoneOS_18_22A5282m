@class NSString, UIViewController;

@interface _UIProgressiveBlurContextController : UIViewController <UIViewControllerTransitioningDelegate> {
    UIViewController *_presentedViewController;
}

@property (nonatomic) long long blurStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)initWithPresentedViewController:(id)a0;

@end
