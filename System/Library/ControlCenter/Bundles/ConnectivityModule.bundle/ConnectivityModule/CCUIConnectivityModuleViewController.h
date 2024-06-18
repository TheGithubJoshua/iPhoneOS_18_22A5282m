@class NSArray, CCUIConnectivityButtonViewController, UIViewPropertyAnimator, NSString, UIScrollView;

@interface CCUIConnectivityModuleViewController : UIViewController <CCUIContentModuleContentViewController> {
    UIScrollView *_buttonContainerScrollView;
}

@property (retain, nonatomic) CCUIConnectivityButtonViewController *airplaneButton;
@property (retain, nonatomic) CCUIConnectivityButtonViewController *cellularDataButton;
@property (retain, nonatomic) CCUIConnectivityButtonViewController *wifiButton;
@property (retain, nonatomic) CCUIConnectivityButtonViewController *bluetoothButton;
@property (retain, nonatomic) CCUIConnectivityButtonViewController *airDropButton;
@property (retain, nonatomic) CCUIConnectivityButtonViewController *hotspotButton;
@property (retain, nonatomic) NSArray *buttonViewControllers;
@property (retain, nonatomic) NSArray *portraitButtonViewControllers;
@property (retain, nonatomic) NSArray *landscapeButtonViewControllers;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canDismissPresentedContent;
- (void)_setupPortraitButtons;
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_setupLandscapeButtons;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setContentModuleContext:(id)a0;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_isPortrait;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (struct CGSize { double x0; double x1; })_compressedButtonSize;
- (BOOL)_canShowWhileLocked;
- (id)_makeButtonWithClass:(Class)a0;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (double)_desiredExpandedHeight;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)_numRowsWhenExpanded;

@end
