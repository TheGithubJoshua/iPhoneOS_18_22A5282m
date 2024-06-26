@class NSString, UIScrollView, UIView, OFUICircularPagingViewController;
@protocol OFUICircularPagingViewDelegate;

@interface OFUICircularPagingView : OFUIView <UIScrollViewDelegate> {
    double _gapBetweenPages;
    UIScrollView *_scrollView;
    UIView *_previousPagingView;
    UIView *_currentPagingView;
    UIView *_nextPagingView;
    BOOL _rotationInProgress;
    BOOL _scrollViewIsMoving;
}

@property (nonatomic) OFUICircularPagingViewController *circularPagingViewController;
@property (nonatomic) id<OFUICircularPagingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRotate;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)a0;
- (void)_updateLayout;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForScrollView;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForPageAtIndex:(unsigned long long)a0;
- (id)pagingViewAtIndex:(unsigned long long)a0;
- (void)willAnimateRotation;

@end
