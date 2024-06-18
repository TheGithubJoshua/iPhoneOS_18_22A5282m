@class NSMutableSet, NSString, NSHashTable, UIView, UIPanGestureRecognizer, SBSearchScrollView;
@protocol SBHSearchPresenting, SBSearchGestureDelegate;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate, SBSearchScrollViewDelegate, BSDescriptionProviding> {
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    BOOL _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastOffset;
    NSMutableSet *_disabledReasons;
    BOOL _isDismissing;
    BOOL _ignoreScrollingEnded;
    BOOL _isDraggingAccordingToScrollView;
}

@property (class, readonly, nonatomic) double searchHeaderHeight;

@property (retain, nonatomic) id<SBHSearchPresenting> searchPresenter;
@property (weak, nonatomic) id<SBSearchGestureDelegate> delegate;
@property (retain, nonatomic) UIView *targetView;
@property (readonly, nonatomic, getter=isAnimatingResetOrReveal) BOOL animatingResetOrReveal;
@property (readonly, nonatomic, getter=isShowingSearch) BOOL showingSearch;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)updateForRotation;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)_maxGestureOffset;
- (id)initWithSearchPresenter:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)succinctDescription;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)searchScrollViewShouldRecognize:(id)a0;
- (double)_progressThreshold;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)revealAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)_isShowingSearch;
- (void)scrollViewDidScroll:(id)a0;
- (void)_notifyThaWeStartedShowingOrHiding;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)_updateForScrollingEnded;
- (void)resetAnimated:(BOOL)a0;
- (void)requireGestureRecognizerToFail:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_updateForFinalContentOffset;
- (void)_updateScrollingEnabled;
- (void)setDisabled:(BOOL)a0 forReason:(id)a1;
- (void)addObserver:(id)a0;
- (void)_notifyThatGestureEndedWithShowingIfNeeded:(BOOL)a0;

@end
