@class NSHashTable, BSCornerRadiusConfiguration, NSArray, SBApplicationBlurContentView, UIView, SBIcon, NSString, SBFView, SBIconView, SBPortalView;

@interface SBAppPlatterDragPreview : UIView <SBIconDragPreview, BSDescriptionProviding> {
    BOOL _isBlurredPlatterReady;
    BOOL _hasAnimatedToBlurredPlatter;
    unsigned long long _platterViewAlphaAnimationCount;
    NSHashTable *_cleanupDelayAssertions;
    BOOL _iconIsHighlighted;
    BOOL _iconInitiallyShowingCloseBox;
    BOOL _delayingCleanup;
    UIView *_sourceView;
    SBApplicationBlurContentView *_platterView;
    SBIconView *_referenceIconView;
    SBIconView *_iconView;
    UIView *_captureOnlyBackgroundView;
    UIView *_anchorPointAdjustmentContainerView;
    UIView *_iconContainerView;
    UIView *_cornerMaskingView;
    SBPortalView *_sourcePortalView;
    UIView *_unclippedSourceContainerView;
    SBFView *_diffuseShadowView;
    SBFView *_rimShadowView;
}

@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) UIView *sourceView;
@property (nonatomic) double sourceViewScale;
@property (readonly, nonatomic) SBApplicationBlurContentView *platterView;
@property (readonly, nonatomic, getter=isAnimatingPlatterViewAlpha) BOOL animatingPlatterViewAlpha;
@property (copy, nonatomic) id /* block */ platterViewAlphaAnimationCompletionBlock;
@property (nonatomic) struct CGSize { double width; double height; } platterSize;
@property (nonatomic) struct SBDragPreviewShadowParameters { double shadowOpacity; double shadowRadius; struct CGSize { double width; double height; } shadowOffset; } diffuseShadowParameters;
@property (nonatomic) struct SBDragPreviewShadowParameters { double shadowOpacity; double shadowRadius; struct CGSize { double width; double height; } shadowOffset; } rimShadowParameters;
@property (copy, nonatomic) NSArray *diffuseShadowFilters;
@property (copy, nonatomic) NSArray *rimShadowFilters;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) double rotation;
@property (nonatomic) unsigned long long dragState;
@property (nonatomic, getter=isFlocked) BOOL flocked;
@property (nonatomic) BOOL iconAllowsLabelArea;
@property (nonatomic) BOOL iconAllowsAccessory;
@property (nonatomic) BOOL iconCanShowCloseBox;
@property (nonatomic) double iconContentScale;
@property (nonatomic) BOOL iconIsEditing;
@property (retain, nonatomic) SBIcon *icon;
@property (copy, nonatomic) id /* block */ cleanUpHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_effectiveCornerRadius;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)setIconViewDelegate:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)_isDragging;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)layoutSubviews;
- (void)_updateShadowView;
- (void)_updateSubviewVisibility;
- (void)_configureIconViewWithReferenceIconView:(id)a0;
- (void)_removeDelayCleanupAssertion:(id)a0;
- (id)delayCleanUpForReason:(id)a0;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)a0;
- (void)dropDestinationAnimationCompleted;
- (void)handleCleanup;
- (void)setIconIsEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)updateDestinationIconLocation:(id)a0 allowsLabelArea:(BOOL)a1 animated:(BOOL)a2;
- (void)_matchMoveView:(id)a0 toContainerView:(id)a1;
- (double)_blurContentViewIconViewCenterYOffset;
- (id)_effectiveCornerRadiusConfiguration;
- (double)_effectiveIconAccessoryAlpha;
- (BOOL)_effectiveIconAllowsLabelArea;
- (BOOL)_effectiveIconCanShowCloseBox;
- (struct CGPoint { double x0; double x1; })_effectiveIconContainerCenter;
- (double)_effectiveIconContentScale;
- (BOOL)_effectiveIconIsHighlighted;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectiveIconViewFrame;
- (unsigned long long)_effectiveMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectivePlatterFrame;
- (void)_getIconAlpha:(double *)a0 platterAlpha:(double *)a1;
- (void)_setSourcePortalViewHidden:(BOOL)a0;
- (void)_updateContainerViewPositionForAnchorPoint;
- (void)_updateIconViewComponentVisibility;
- (void)_updateShowDebugIconBorderWithColor:(id)a0;
- (void)configurePlatterForSceneHandle:(id)a0 withTargetView:(id)a1 completion:(id /* block */)a2;
- (double)iconDragAlpha;
- (id)initWithReferenceIconView:(id)a0 sourceView:(id)a1;
- (id)initWithReferenceIconView:(id)a0 sourceView:(id)a1 sourceViewScale:(double)a2;
- (void)invalidateSourceView;
- (void)updateSourceView:(id)a0;

@end