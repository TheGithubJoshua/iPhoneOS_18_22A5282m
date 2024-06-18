@class SBPIPContentViewLayoutMetrics, SBPIPContentViewLayoutContext, SBPIPDefaults;

@interface SBPIPContentViewLayoutSettings : NSObject {
    SBPIPContentViewLayoutContext *_context;
    SBPIPContentViewLayoutMetrics *_platformMetrics;
    SBPIPDefaults *_pipDefaults;
}

+ (id)pipDefaults;

- (void)setMaximumSizeSpanForPreferredSizeTuning:(double)a0;
- (double)defaultCornerRadius;
- (void).cxx_destruct;
- (void)setMinimumSizeSpanBetweenPreferredSizes:(double)a0;
- (double)contentViewPadding;
- (id)platformMetrics;
- (struct CGSize { double x0; double x1; })_contentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0 currentSize:(double)a1;
- (struct CGSize { double x0; double x1; })_maximumContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0 maximumReferenceSize:(double)a1;
- (struct CGSize { double x0; double x1; })_minimumContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0 minimumReferenceSize:(double)a1;
- (double)contentViewPaddingWhileStashed;
- (unsigned long long)currentContentViewPosition;
- (struct CGSize { double x0; double x1; })currentContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })defaultContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPlatformMetrics:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })maximumPossibleContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })maximumPreferredContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })minimumPossibleContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })minimumPreferredContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })minimumStashedTabSize;
- (void)setContentViewPosition:(unsigned long long)a0;
- (void)setContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)updatePlatformMetrics:(id)a0;

@end