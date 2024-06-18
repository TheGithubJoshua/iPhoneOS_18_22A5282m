@class BSUICAPackageView, LAUIPearlGlyphView, UIView, _UILegibilitySettings, NSSet, SBUIFaceIDCoachingView, SBUIFaceIDCameraGlyphView, UIColor;

@interface SBUIProudLockIconView : UIView {
    UIView *_iconContainerView;
    BSUICAPackageView *_lockView;
    NSSet *_imageLayers;
    NSSet *_shadowImageLayers;
    NSSet *_shadowFilterLayers;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
    id _pearlGlyphViewSharedResources;
    SBUIFaceIDCoachingView *_lazy_faceIDCoachingView;
    BOOL _performingIncomingLayout;
    BOOL _changingAllowsAlongsideCoaching;
    BOOL _allowsAlongsideCoaching;
    BOOL _overridesSizing;
    struct CGSize { double width; double height; } _overrideSize;
    struct CGPoint { double x; double y; } _overrideOffset;
    double _overrideExtent;
}

@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;
@property (nonatomic) long long state;
@property (readonly, nonatomic) SBUIFaceIDCameraGlyphView *cameraCoveredView;

- (void)setState:(long long)a0 animated:(BOOL)a1;
- (double)_lockToCoachingSpacing;
- (void)_resetCameraGlyphView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForActiveView:(id)a0 forState:(long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_outgoingTransformForView:(id)a0 fromState:(long long)a1;
- (id)_layoutAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_smallLockSize;
- (void)_resetPearlGlyphView;
- (id)_defaultAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_incomingTransformForActiveView:(id)a0 forState:(long long)a1;
- (double)_scaleAmountForZoom;
- (void).cxx_destruct;
- (void)setOverrideSize:(struct CGSize { double x0; double x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1 extent:(double)a2;
- (id)_faceIDCoachingView;
- (struct CGSize { double x0; double x1; })_smallLockSizeForTextSize:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_zoomedTransform;
- (void)setState:(long long)a0 animated:(BOOL)a1 options:(long long)a2 completion:(id /* block */)a3;
- (void)_configureShadowFromLegibilitySettings:(id)a0;
- (void)_transitionToState:(long long)a0 animated:(BOOL)a1 options:(long long)a2 completion:(id /* block */)a3;
- (id)_transformAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3 forIncomingViews:(BOOL)a4;
- (double)_alphaForActiveViewForState:(long long)a0;
- (id)_activeViewsForState:(long long)a0;
- (void)_resetfaceIDCoachingView;
- (id)_pearlGlyphView;
- (void)setAllowsAlongsideCoaching:(BOOL)a0;
- (BOOL)allowsAlongsideCoaching;
- (void)layoutSubviews;
- (id)_alphaAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3 forIncomingViews:(BOOL)a4;
- (void)setState:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })_practicalProudLockSize;
- (id)fileNameForCurrentDevice;
- (void)_forEachLayerInHierarchy:(id)a0 perform:(id /* block */)a1;

@end
