@class UIImage, UIPageControl;

@interface _UIPageControlVisualProvider : NSObject {
    UIPageControl *_pageControl;
    long long _displayedPage;
}

@property (readonly, nonatomic) long long displayedPage;
@property (nonatomic) long long interactionState;
@property (retain, nonatomic) UIImage *preferredIndicatorImage;
@property (retain, nonatomic) UIImage *preferredActiveIndicatorImage;
@property (nonatomic) double indicatorOpacity;

- (void)invalidateIndicators;
- (void)didUpdateNumberOfPages;
- (id)customActiveIndicatorImageForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)updateDisplayedPageToCurrentPage;
- (void)didUpdateLayoutDirection;
- (void)didEndTrackingWithTouch:(id)a0;
- (void)didUpdateInteractionTypeAvailability;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indicatorFrameForPage:(long long)a0;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (void)didUpdatePageIndicatorTintColor;
- (void)didUpdateBackgroundEffect;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)teardownPageControl;
- (void)pruneArchivedSubviews:(id)a0;
- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (BOOL)shouldDisableTouchTracking;
- (void)setCustomIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)didUpdateCustomLayoutValues;
- (id)customIndicatorImageForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateBackgroundStyle;
- (void)layoutSubviews;
- (id)initWithPageControl:(id)a0;
- (void)prepare;
- (void)setCustomActiveIndicatorImage:(id)a0 forPage:(long long)a1;

@end
