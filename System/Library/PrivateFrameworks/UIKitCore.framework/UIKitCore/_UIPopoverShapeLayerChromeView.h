@class UIVisualEffectView, _UIPopoverShapeLayerMaskView;

@interface _UIPopoverShapeLayerChromeView : _UIPopoverStandardChromeView {
    UIVisualEffectView *_blurView;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    BOOL _popoverBackgroundColorIsOpaque;
    BOOL _arrowVisible;
    BOOL _shapeLayerPathNeedsUpdate;
    _UIPopoverShapeLayerMaskView *_shapeLayerMaskView;
}

+ (double)arrowBase;
+ (double)arrowHeight;
+ (double)cornerRadius;

- (long long)backgroundStyle;
- (void)setBackgroundStyle:(long long)a0;
- (void)_updateBackgroundStyle;
- (void)_removeEffectView;
- (void)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 leadingEdge:(BOOL)a3 isVertical:(BOOL)a4;
- (id)backgroundEffect;
- (void)setArrowDirection:(unsigned long long)a0;
- (void)_updateShapeLayerPath;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)setArrowOffset:(double)a0;
- (void)_configureEffectView;
- (void)_loadNecessaryViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addArrowCurveToPath:(id)a0 direction:(unsigned long long)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4;
- (void)_generateBottomArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (double)maxNonPinnedOffset;
- (void)_generateRightArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (void)_generateLeftArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (void).cxx_destruct;
- (long long)_resolvedBackgroundStyle;
- (void)didMoveToWindow;
- (double)_shadowOpacity;
- (double)minNonPinnedOffset;
- (void)_generateTopArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (id)_shadowPath;
- (void)layoutSubviews;
- (double)_shadowRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)_updateShapeLayerPathIfNeeded;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
