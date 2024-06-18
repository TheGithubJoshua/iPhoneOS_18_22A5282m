@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) double height;

- (void)willMoveToSuperview:(id)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateCornerMask;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (double)heightInPixels;

@end
