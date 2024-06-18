@class NSObject, TUPageViewControllerScrollView, NSString, NSMutableArray, UIViewController;
@protocol OS_dispatch_group, TUPageViewControllerDataSource, TUPageViewControllerDelegate;

@interface TUPageViewController : UIViewController <UIScrollViewDelegate, TUPageViewControllerScrollViewAccessibilityDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *idleDispatchGroup;
@property (retain, nonatomic) UIViewController *managedForViewController;
@property (retain, nonatomic) UIViewController *previousViewController;
@property (retain, nonatomic) UIViewController *nextViewController;
@property (retain, nonatomic) UIViewController *originalVisibleViewController;
@property (retain, nonatomic) UIViewController *appearingViewController;
@property (retain, nonatomic) UIViewController *disappearingViewController;
@property (nonatomic) BOOL cancelScrollViewDidScroll;
@property (readonly, nonatomic) BOOL isTransitioning;
@property (readonly, nonatomic) struct CGSize { double width; double height; } transitioningSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pageSize;
@property (readonly, nonatomic) BOOL scrollViewStartedScrolling;
@property (retain, nonatomic) NSMutableArray *replayViewTransitions;
@property (weak, nonatomic) id<TUPageViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<TUPageViewControllerDelegate> delegate;
@property (retain, nonatomic) UIViewController *visibleViewController;
@property (readonly, nonatomic) UIViewController *secondaryVisibleViewController;
@property (nonatomic) BOOL pagingEnabled;
@property (nonatomic) double pageGutter;
@property (readonly, nonatomic) TUPageViewControllerScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewLayoutMarginsDidChange;
- (id)childViewControllerForStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateContentSize;
- (void)repositionPages;
- (BOOL)_assistiveTechnologyIsRunning;
- (struct CGPoint { double x0; double x1; })centerForIndex:(unsigned long long)a0;
- (void)handleScrollEnd;
- (BOOL)isTransitioningToViewController;
- (void)_keyboardSwitchGoingRight:(BOOL)a0;
- (BOOL)_shouldIgnoreDidScrollWithScrollView:(id)a0;
- (void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(id)a0;
- (void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(id)a0;
- (void)addViewController:(id)a0 fromScroll:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateScrollViewFrameFromViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)callLastViewAppearanceMethods;
- (BOOL)canSwitchToNextViewController;
- (BOOL)canSwitchToPreviousViewController;
- (void)didReceiveBlueprintDidBeginItemDraggingEvent;
- (void)didReceiveBlueprintDidEndItemDraggingEvent;
- (void)handleScrollStart;
- (void)keyboardOrActionSwitchToNextViewController;
- (void)keyboardOrActionSwitchToPreviousViewController;
- (void)managePreviousAndNextViewController;
- (void)performWhenIdle:(id /* block */)a0;
- (void)reindexNextViewControllers;
- (void)reindexPreviousViewControllers;
- (void)reindexViewControllers;
- (void)removeViewController:(id)a0;
- (void)setSecondaryVisibleViewController:(id)a0;
- (void)switchToNextViewController;
- (void)switchToPreviousViewController;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateContentOffset;
- (void)updatePositionForViewController:(id)a0;
- (void)updateScrollView;

@end