@class UIStackView, NSString, UIInterfaceActionGroupView, SKUIContextActionsPresentationController, NSMutableArray, SKUIContextActionsConfiguration, UIVisualEffectView, UIGestureRecognizer;

@interface SKUIContextActionsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPopoverPresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) SKUIContextActionsConfiguration *configuration;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) UIInterfaceActionGroupView *contextActionView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIInterfaceActionGroupView *scrollableActionGroupView;
@property (nonatomic) struct CGPoint { double x; double y; } gestureRecognizerInitialLocation;
@property (nonatomic, getter=hasAppliedSystemRecognizer) BOOL appliedSystemRecognizer;
@property (retain, nonatomic) SKUIContextActionsPresentationController *transitionPresentationController;
@property (nonatomic, getter=isOrbPresentation) BOOL orbPresentation;
@property (retain, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognzier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)interfaceAction:(id)a0 invokeActionHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)viewTapped:(id)a0;
- (void)_applySystemRecognizer;
- (void)_reloadViewsConfiguration;
- (id)_transitionPresentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)systemProvidedGestureRecognzierTriggered:(id)a0;

@end
