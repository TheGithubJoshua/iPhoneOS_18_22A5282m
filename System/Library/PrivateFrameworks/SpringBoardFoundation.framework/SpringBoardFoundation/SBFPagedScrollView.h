@class NSArray;

@interface SBFPagedScrollView : BSUIScrollView {
    BOOL _changingScrollViewLayout;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visiblePageRange;
@property (copy, nonatomic) NSArray *pageViews;
@property (nonatomic) BOOL gestureEnabled;

- (void)_bs_didScrollWithContext:(struct { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; })a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForPageAtIndex:(unsigned long long)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)layoutPages;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)pageRelativeScrollOffset;
- (struct { struct { double x0; BOOL x1; } x0; struct { double x0; BOOL x1; } x1; })currentScrollInterval;
- (BOOL)resetContentOffsetToCurrentPage;
- (void)_layoutScrollView;
- (void)_bs_didEndScrolling;
- (void)_bs_willBeginScrolling;
- (void)_updateCurrentPageForScrollOffset;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 withAnimationSettings:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)unclippedPageRelativeScrollOffset;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_updateVisiblePages;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
