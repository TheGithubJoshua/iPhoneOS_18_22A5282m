@class UITapGestureRecognizer, NSString, PKCompactNavigationContainedNavigationController, UIView, PKCompactNavigationContainedNavigationWrapperViewController, UIViewController;
@protocol PKCompactNavigationContainerControllerDelegate, UICoordinateSpace;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver> {
    BOOL _centeredCard;
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
    BOOL _requiresMasking;
    UIView *_maskingContainerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _maximumModalPresentationFrame;
    PKCompactNavigationContainedNavigationWrapperViewController *_presentationContextVC;
    struct { struct CGSize { double width; double height; } preferredContentSize; double minimumNavigationHeight; BOOL isRoot; } _topVCInfo;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _statusBarFrame;
    unsigned short _layoutGroupCounter;
    unsigned short _contentSizeUpdateDeferralCounter;
    BOOL _deferredContentSizeUpdate;
    BOOL _deferredContentSizeUpdateIsAnimated;
    BOOL _deferredContentSizeUpdateIsForced;
    UIViewController *_topVC;
    BOOL _topVCIsExpectedClass;
    BOOL _topVCIsInInitialLayout;
    UIViewController *_pendingTopVC;
    unsigned long long _pendingTopVCIdentifier;
    unsigned long long _updateChildViewControllerSizeCounter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned char _visibility;
    BOOL _keyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKeyboardFrame;
}

@property (nonatomic, getter=isPresentingNavigationController) BOOL presentingNavigationController;
@property (nonatomic) BOOL didMoveToWindowDirtiesLayout;
@property (readonly, nonatomic) PKCompactNavigationContainedNavigationController *containedNavigationController;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exclusionRect;
@property (readonly, nonatomic) id<UICoordinateSpace> exclusionCoordinateSpace;
@property (weak, nonatomic) id<PKCompactNavigationContainerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dimmingColor;

- (id)init;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)loadView;
- (void)keyboardWillHide:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)preferredUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)childViewControllerForStatusBarStyle;
- (id)_backgroundColor;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (id)initWithNavigationController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)keyboardWillChange:(id)a0;
- (void)tapGestureRecognized:(id)a0;
- (void)_endLayoutGroup;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (void)_beginLayoutGroup;
- (struct { struct CGSize { double x0; double x1; } x0; double x1; BOOL x2; })_infoForViewController:(id)a0;
- (struct CGSize { double x0; double x1; })_navigationControllerSizeForChildViewControllerInfo:(struct { struct CGSize { double x0; double x1; } x0; double x1; BOOL x2; })a0 withCurrentInfo:(struct { struct CGSize { double x0; double x1; } x0; double x1; BOOL x2; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetNavigationControllerFrameForInfo:(struct { struct CGSize { double x0; double x1; } x0; double x1; BOOL x2; })a0;
- (void)_updateForKeyboardIfNecessary;
- (void)_updateStatusBarFrame;
- (void)_updateTopViewController:(id)a0 animated:(BOOL)a1;
- (void)_updateTopViewControllerAsync:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })childViewControllerPreferredContentSizeForSize:(struct CGSize { double x0; double x1; })a0 isRoot:(BOOL)a1;
- (struct CGSize { double x0; double x1; })childViewControllerSizeForNavigationControllerSize:(struct CGSize { double x0; double x1; })a0;
- (void)contentContainer:(id)a0 preferredContentSizeDidChangeForChildContentContainer:(id)a1;
- (id)initWithNavigationController:(id)a0 style:(unsigned long long)a1;
- (void)insertBackgroundLevelView:(id)a0;
- (struct CGSize { double x0; double x1; })modalPresentationSize;
- (struct CGSize { double x0; double x1; })navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize { double x0; double x1; })a0 isRoot:(BOOL)a1;
- (void)observedView:(id)a0 didMoveToWindow:(id)a1;
- (void)setExclusionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCoordinateSpace:(id)a1;
- (void)updateChildViewControllerSizeAnimated:(BOOL)a0;
- (void)updateChildViewControllerSizeAnimated:(BOOL)a0 forceUpdate:(BOOL)a1;

@end