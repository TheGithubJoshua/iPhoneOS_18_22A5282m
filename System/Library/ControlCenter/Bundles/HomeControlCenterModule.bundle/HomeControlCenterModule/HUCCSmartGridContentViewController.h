@class UIView, NSString, HUCCSmartContainerView, HUCCSmartGridViewController, UIViewPropertyAnimator, NSDictionary, HUCCDashboardContainerViewController, UIVisualEffectView, UILabel, HUCCSmartGridPropertyAnimator;
@protocol HUOpenURLHandling, HUCCSmartGridContentViewControllerDelegate, NSObject;

@interface HUCCSmartGridContentViewController : UIViewController <HUCCSmartGridViewControllerDelegate, HUCCDashboardContainerViewControllerDelegate, HUCCSmartGridPropertyAnimatorDelegate, CCUIContentModuleContentViewController>

@property (retain, nonatomic) HUCCSmartContainerView *view;
@property (retain, nonatomic) HUCCSmartGridViewController *smartGridViewController;
@property (retain, nonatomic) HUCCDashboardContainerViewController *dashboardContainerViewController;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isTransitioningToHomeControlService;
@property (retain, nonatomic) id<NSObject> activeAssertion;
@property (retain, nonatomic) HUCCSmartGridPropertyAnimator *transitionAnimator;
@property (retain, nonatomic) UIView *transitionIconView;
@property (retain, nonatomic) UIVisualEffectView *transitionGridCellHomeNameLabelEffectView;
@property (retain, nonatomic) UILabel *transitionGridCellHomeNameLabel;
@property (retain, nonatomic) UIVisualEffectView *transitionGridCellRoomNameLabelEffectView;
@property (retain, nonatomic) UILabel *transitionGridCellRoomNameLabel;
@property (retain, nonatomic) UIVisualEffectView *transitionNavigationHeaderHomeNameLabelEffectView;
@property (retain, nonatomic) UILabel *transitionNavigationHeaderHomeNameLabel;
@property (retain, nonatomic) UIVisualEffectView *transitionNavigationHeaderRoomNameLabelEffectView;
@property (retain, nonatomic) UILabel *transitionNavigationHeaderRoomNameLabel;
@property (retain, nonatomic) NSDictionary *transitionLargeTitleTextAttributes;
@property (retain, nonatomic) NSDictionary *transitionSubviewFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionCompressedViewFrame;
@property (nonatomic) double transitionDeviceCornerRadius;
@property (weak, nonatomic) id<HUCCSmartGridContentViewControllerDelegate> delegate;
@property (nonatomic) BOOL accessAllowedForCurrentLockState;
@property (retain, nonatomic) id<HUOpenURLHandling> URLHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)loadView;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)displayWillTurnOff;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (struct CCUIModuleLayoutSize { unsigned long long x0; unsigned long long x1; })moduleLayoutSizeForOrientation:(long long)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)requestDismissal;
- (void)quickControlsPresentationDidUpdate:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconViewInHomeGridCellFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconViewInNavigationHeaderViewFrame;
- (void)_openHomeApp;
- (void)propertyAnimatorDidStartAnimating:(id)a0;
- (void)remoteDashboard:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)requestAuthenticationIfLockedWithCompletionHandler:(id /* block */)a0;
- (void)_cleanupTransitionSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_homeNameLabelInHomeGridCellFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_homeNameLabelInNavigationHeaderViewFrame;
- (void)_prepareTransitionSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_roomNameLabelInHomeGridCellFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_roomNameLabelInNavigationHeaderViewFrame;
- (void)_setUpSmartGridContent;
- (BOOL)_shouldDisplayHomeControlService;
- (void)_showLockSecurityView:(BOOL)a0;
- (void)_tearDownSmartGridContent;
- (void)displayHome:(id)a0;
- (void)gridSizeMayHaveChanged;
- (BOOL)isDeviceUnlockedForGridViewController:(id)a0;
- (id)prepareForActionRequiringDeviceUnlockForGridViewController:(id)a0;

@end