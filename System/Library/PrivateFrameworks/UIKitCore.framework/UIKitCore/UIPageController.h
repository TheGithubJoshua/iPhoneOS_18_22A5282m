@class UIScrollView, UIPageControl, UIView, NSMutableArray, UIViewController;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController {
    NSMutableArray *_viewControllers;
    UIView *_wrapperViews[3];
    int _notificationState[3];
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    int _pageSpacing;
    long long _visibleIndex;
    long long _pageCount;
    struct { unsigned char delegateViewControllerAtIndex : 1; unsigned char delegateWillBeginPaging : 1; unsigned char delegateDidEndPaging : 1; unsigned char displaysPageControl : 1; unsigned char wraps : 1; } _pageControllerFlags;
}

@property (nonatomic) id<UIPageControllerDelegate> delegate;
@property (nonatomic) double pageSpacing;
@property (nonatomic) BOOL displaysPageControl;
@property (readonly, retain, nonatomic) UIViewController *visibleViewController;
@property (nonatomic) long long pageCount;
@property (nonatomic) long long visibleIndex;
@property (nonatomic) BOOL wraps;

- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)_getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)_scrollView;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_needToLoadNext;
- (void)_adjustScrollViewContentInsets;
- (BOOL)_allowsAutorotation;
- (void)_createPageControl;
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)a0;
- (BOOL)_hasNextViewController;
- (BOOL)_hasPreviousViewController;
- (BOOL)_hasVisibleViewController;
- (BOOL)_isSupportedInterfaceOrientation:(long long)a0;
- (BOOL)_isViewControllerBeingUnloaded:(id)a0 atIndex:(long long)a1;
- (id)_loadNextViewController;
- (id)_loadPreviousViewController;
- (id)_loadVisibleViewControllerAndNotify:(BOOL)a0;
- (BOOL)_needToLoadPrevious;
- (BOOL)_needToLoadVisible;
- (id)_nextViewController;
- (int)_nextViewControllerNotificationState;
- (void)_notifyNextViewController:(int)a0 animated:(BOOL)a1;
- (void)_notifyPreviousViewController:(int)a0 animated:(BOOL)a1;
- (void)_notifyViewController:(id)a0 ofState:(int)a1 previousState:(int)a2 animated:(BOOL)a3;
- (void)_notifyVisibleViewController:(int)a0 animated:(BOOL)a1;
- (void)_pageChanged:(id)a0;
- (id)_pageControllerScrollView;
- (id)_previousViewController;
- (int)_previousViewControllerNotificationState;
- (void)_replaceViewControllerAtIndex:(long long)a0 withViewController:(id)a1;
- (void)_scrollView:(id)a0 boundsDidChangeToSize:(struct CGSize { double x0; double x1; })a1;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewDidScroll:(id)a0 forceUpdate:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scrollViewFrame;
- (void)_scrollViewWillBeginPaging;
- (void)_setNextViewController:(id)a0;
- (void)_setNextViewControllerNotificationState:(int)a0;
- (void)_setPreviousViewController:(id)a0;
- (void)_setPreviousViewControllerNotificationState:(int)a0;
- (void)_setVisibleViewController:(id)a0;
- (void)_setVisibleViewControllerNotificationState:(int)a0;
- (BOOL)_shouldUseOnePartRotation;
- (id)_visibleViewController;
- (int)_visibleViewControllerNotificationState;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)a0;
- (long long)indexOfViewController:(id)a0;
- (void)reloadViewControllerAtIndex:(long long)a0;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)setVisibleIndex:(long long)a0 animated:(BOOL)a1;
- (void)setVisibleIndex:(long long)a0 preservingLoadedViewControllers:(BOOL)a1 animated:(BOOL)a2;
- (void)viewDidUnload;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)a0 duration:(double)a1;

@end
