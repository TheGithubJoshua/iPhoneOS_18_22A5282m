@class MPMediaControlsConfiguration, NSString, UIView, MRUViewServiceRoutingViewController, MTMaterialView;

@interface MRUViewServiceContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, MRUViewServiceRoutingViewControllerDelegate, MRUViewServiceViewController>

@property (retain, nonatomic) MRUViewServiceRoutingViewController *routingViewController;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) MTMaterialView *materialView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) id /* block */ dismissalBlock;
@property (copy, nonatomic) id /* block */ customRowTappedBlock;

- (void)presentationControllerDidDismiss:(id)a0;
- (id)init;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)prepareForPopoverPresentation:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)viewServiceRoutingViewControllerDidDismiss:(id)a0 withCustomRowTapped:(id)a1;
- (BOOL)shouldPresentUsingPopover;
- (void)transitionToVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)updateMaterialForPresenting:(BOOL)a0;
- (void)viewServiceRoutingViewControllerDidChangeSize:(id)a0;
- (void)viewServiceRoutingViewControllerDidDismiss:(id)a0;

@end
