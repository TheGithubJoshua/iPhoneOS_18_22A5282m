@class UIScrollView, NSString, ISUIVisibilityOffsetHelper;

@interface ISUIScrollViewVitalityController : ISScrollViewVitalityController <UIScrollViewDelegate> {
    ISUIVisibilityOffsetHelper *_visibilityOffsetHelper;
}

@property (weak, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPerformVitality;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)init;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)visibilityOffsetHelper;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)_reduceMotionDidChange:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;

@end
