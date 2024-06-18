@class NSString, UIPresentationController, UIView, UIDimmingView;
@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {
    UIPresentationController *_searchPresentationController;
    UIView *_searchBarContainerView;
    UIDimmingView *_dimmingView;
    BOOL _isFormSheetPresentation;
}

@property (nonatomic) BOOL presentationWasAnimated;
@property (nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (retain, nonatomic) id<UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchBarContainerView;
- (BOOL)shouldAccountForStatusBar;
- (BOOL)_currentTransitionIsRotating;
- (id)dimmingView;
- (BOOL)searchBarToBecomeTopAttached;
- (double)statusBarAdjustment;
- (id)_searchControllerPresenting;
- (void)dimmingViewWasTapped:(id)a0;
- (double)resultsControllerContentOffset;
- (double)_statusBarHeightChangeDueToRotation;
- (BOOL)presentationIsPopoverToOverFullScreenAdaptation;
- (id)initWithSearchPresentationController:(id)a0;
- (void)ensureAppropriatelySizedSearchBar:(id)a0;
- (void)removeContainerViewFromSuperview;
- (id)_searchBarContainerSuperview;
- (struct CGSize { double x0; double x1; })updateSearchBarContainerFrame;
- (BOOL)searchBarWillResizeForScopeBar;
- (id)locateNavigationController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerFrame;
- (BOOL)_statusBarPreferredHidden;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })optimalFrameForSearchBar:(id)a0;
- (BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)a0;

@end
