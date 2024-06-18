@class UIVisualEffectView, UIView;

@interface _UIPopoverLegacyChromeView : _UIPopoverStandardChromeView {
    UIView *_arrowBackgroundView;
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    BOOL _popoverBackgroundColorIsOpaque;
    BOOL _arrowVisible;
    BOOL _wasPinned;
}

@property (readonly, nonatomic) UIView *arrowView;
@property (readonly, nonatomic) UIView *leftCapView;
@property (readonly, nonatomic) UIView *rightCapView;
@property (readonly, nonatomic) BOOL hasComponentViews;

+ (double)arrowBase;
+ (double)arrowHeight;

- (long long)backgroundStyle;
- (void)setBackgroundStyle:(long long)a0;
- (void)_updateBackgroundStyle;
- (void)_removeEffectView;
- (id)backgroundEffect;
- (void)setArrowBackgroundColor:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (double)arrowOffset;
- (void)setArrowOffset:(double)a0;
- (void)setPopoverBackgroundColor:(id)a0;
- (void)_configureEffectView;
- (void)_loadNecessaryViews;
- (double)maxNonPinnedOffset;
- (void).cxx_destruct;
- (long long)_resolvedBackgroundStyle;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (double)_shadowOpacity;
- (double)minNonPinnedOffset;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)_shadowPath;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (double)_shadowRadius;
- (BOOL)isPinned;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsUpOrDown;
- (void)_resetComponentViews;
- (void)_updateChrome;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (BOOL)useShortMode;

@end
