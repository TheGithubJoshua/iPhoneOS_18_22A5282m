@class UIView, NSString, NSArray, SBSystemPointerInteractionManager, SBAppSwitcherSettings, SBSeparatorView, SBFTouchPassThroughView, SBFluidSwitcherItemContainerHeaderView, UIBezierPath, SBAppSwitcherPageShadowView;
@protocol SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate;

@interface SBFluidSwitcherSpaceUnderlayAccessoryView : SBFTouchPassThroughClippingView <SBFluidSwitcherItemContainerHeaderViewDelegate, SBSystemPointerInteractionDelegate> {
    SBFTouchPassThroughView *_contentView;
    SBAppSwitcherSettings *_settings;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
    SBFluidSwitcherItemContainerHeaderView *_headerView;
    BOOL _headerNeedsNonAnimatedLayout;
    UIView *_backgroundView;
    SBAppSwitcherPageShadowView *_shadowView;
    SBSeparatorView *_resizeGrabber;
    BOOL _resizeGrabberNeedsNonAnimatedLayout;
}

@property (readonly, weak, nonatomic) id<SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate> delegate;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) double contentScale;
@property (nonatomic) double keyboardHeight;
@property (readonly, nonatomic) double headerOpacity;
@property (nonatomic) double titleOpacity;
@property (readonly, copy, nonatomic) NSArray *titleItems;
@property (nonatomic) double backgroundOpacity;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowOffset;
@property (nonatomic) long long shadowStyle;
@property (retain, nonatomic) UIBezierPath *shadowPath;
@property (nonatomic) double resizeGrabberOpacity;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } resizeGrabberBounds;
@property (nonatomic) struct CGPoint { double x; double y; } resizeGrabberCenter;
@property (nonatomic) double contentViewScale;
@property (nonatomic) struct CGPoint { double x; double y; } contentViewOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateContentView;
- (BOOL)shouldBeginPointerInteractionRequest:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 forView:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateBackgroundView;
- (id)styleForRegion:(id)a0 forView:(id)a1;
- (void)_updateHeaderAnimated:(BOOL)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateResizeGrabberVisibility;
- (void)_updateResizeGrabber;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pointerInteractionHitTestInsetsForView:(id)a0;
- (void)setTitleItems:(id)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)initWithDelegate:(id)a0 systemPointerInteractionManager:(id)a1;
- (void)_updateShadowVisibility;
- (void)itemContainerHeaderView:(id)a0 didSelectTitleItem:(id)a1;
- (void)dealloc;
- (void)setHeaderOpacity:(double)a0 updateMode:(long long)a1 settings:(id)a2 completion:(id /* block */)a3;
- (void)_updateBackgroundViewVisibility;
- (void)layoutSubviews;
- (void)_configureDebugBorder;
- (void)_updateShadowView;

@end
