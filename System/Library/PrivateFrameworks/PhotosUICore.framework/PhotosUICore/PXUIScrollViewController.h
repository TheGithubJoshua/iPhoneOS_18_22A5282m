@class UIScrollView, NSString, _PXUIScrollView;
@protocol PXUIScrollViewControllerFocusItemProvider;

@interface PXUIScrollViewController : PXScrollViewController <PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider, UIScrollViewDelegate> {
    _PXUIScrollView *_scrollView;
    BOOL _isScrollViewDecelerating;
}

@property (nonatomic, setter=setScrollingToTop:) BOOL isScrollingToTop;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<PXUIScrollViewControllerFocusItemProvider> focusItemProvider;
@property (nonatomic) BOOL ignoresSafeAreaInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decelerationRateDidChange;
- (BOOL)hasWindow;
- (BOOL)clipsToBounds;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidBeginFocusFastScrolling:(id)a0;
- (void)stopScrollingAndZoomingAnimations;
- (void)scrollView:(id)a0 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)a1;
- (BOOL)isDragging;
- (void)setScrollViewNeedsLayout;
- (void)setClipsToBounds:(BOOL)a0;
- (void)scrollViewLayoutIfNeeded;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)setRespectsContentZOrder:(BOOL)a0;
- (struct CGSize { double x0; double x1; })scrollViewReferenceSize;
- (id)focusItemsForScrollView:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewTargetRect;
- (void)_checkScrollViewDeceleration;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewConstrainedVisibleRect;
- (BOOL)isTracking;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubviewToScrollView:(id)a0;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewContentBounds;
- (void).cxx_destruct;
- (id)contentCoordinateSpace;
- (BOOL)respectsContentZOrder;
- (BOOL)showsHorizontalScrollIndicator;
- (void)setDeferContentOffsetUpdates:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewActiveRect;
- (void)scrollViewDidLayoutSubviews:(id)a0;
- (void)scrollViewDidEndFocusFastScrolling:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (void)_scheduleScrollViewDecelerationCheck;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)deferContentOffsetUpdates;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)isScrolledAtEdge:(unsigned int)a0 tolerance:(double)a1;
- (void)addFloatingSublayer:(id)a0 forAxis:(long long)a1;
- (void)addSubview:(id)a0;
- (void)setScrollViewContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)showsVerticalScrollIndicator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewVisibleRect;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })scrollViewContentSize;
- (BOOL)isDecelerating;
- (void)contentInsetAdjustmentBehaviorDidChange;
- (void)setShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidingContentInsetEdges:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollViewWillLayoutSubviews:(id)a0;
- (void)applyScrollInfo:(id)a0;
- (void)addGestureRecognizer:(id)a0;
- (void)setVisibleOrigin:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewVisibleRectOutsideBounds;

@end
