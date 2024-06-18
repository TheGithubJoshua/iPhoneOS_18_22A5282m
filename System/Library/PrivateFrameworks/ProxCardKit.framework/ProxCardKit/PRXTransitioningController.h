@class NSString;
@protocol PRXPullDismissalProvider;

@interface PRXTransitioningController : NSObject <UIViewControllerTransitioningDelegate>

@property (readonly, weak, nonatomic) id<PRXPullDismissalProvider> pullDismissalProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)initWithPullDismissalProvider:(id)a0;

@end
