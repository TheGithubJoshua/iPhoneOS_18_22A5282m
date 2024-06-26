@protocol PXStoryScrollContentLayoutDelegate;

@interface PXStoryScrollContentLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { BOOL scrollOffsetDidChange; } _delegateRespondsTo;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollableOutsets;
@property (nonatomic) struct CGPoint { double x; double y; } scrollOffset;
@property (weak, nonatomic) id<PXStoryScrollContentLayoutDelegate> delegate;

- (id)init;
- (void)_updateContentSize;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;
- (void)_invalidateContentSize;
- (void)visibleRectDidChange;
- (void)update;
- (struct CGPoint { double x0; double x1; })_scrollOffsetForVisibleRectOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_scrollOffsetFromVisibleRect;
- (void)_setScrollOffset:(struct CGPoint { double x0; double x1; })a0 updateScrollPosition:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_visibleRectOriginForScrollOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })scrollOffsetForScrollViewContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })scrollViewContentOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0;

@end
