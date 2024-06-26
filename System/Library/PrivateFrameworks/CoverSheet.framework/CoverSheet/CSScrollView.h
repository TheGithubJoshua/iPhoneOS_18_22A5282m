@protocol CSScrollViewDelegate;

@interface CSScrollView : SBFPagedScrollView

@property (weak, nonatomic) id<CSScrollViewDelegate> delegate;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;

@end
