@class SBDisplayItem, NSString, SBAppLayout, SBContinuousExposeWindowDragDestinationSwitcherModifier, UIViewFloatAnimatableProperty;

@interface SBContinuousExposeWindowDragSwitcherModifier : SBGestureSwitcherModifier <SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate> {
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGPoint { double x; double y; } _initialAnchorPoint;
    BOOL _gestureWasCanceled;
    struct CGSize { double width; double height; } _sizeOfSelectedDisplayItem;
    BOOL _dragBeganInOurSwitcher;
    BOOL _dragBeganInOtherSwitcher;
    BOOL _dragBeganInAnyStrip;
    BOOL _dragBeganOnAnyStage;
    UIViewFloatAnimatableProperty *_anchorPointRampingProperty;
    SBContinuousExposeWindowDragDestinationSwitcherModifier *_destinationModifier;
}

@property (readonly, nonatomic) SBAppLayout *initialAppLayout;
@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem;
@property (readonly, nonatomic) SBAppLayout *proposedAppLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appLayoutOnStage;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)handleTransitionEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)appLayoutContainingAppLayout:(id)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)handleEvent:(id)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_appLayoutContainingDisplayItem:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (double)continuousExposeStripProgress;
- (id)visibleAppLayouts;
- (BOOL)wantsSceneResizesHostedContextForAppLayout:(id)a0;
- (id)topMostLayoutElements;
- (struct SBSwitcherGradientWallpaperAttributes { double x0; double x1; })wallpaperGradientAttributesForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (BOOL)_anyItemExceedsWidthThresholdToHideStrip;
- (BOOL)_anyProposedAppLayoutContainsSelectedDisplayItem;
- (id)_baseLayoutSettings;
- (void)_beginAnimatingAnchorPointRampingPropertyWithMode:(long long)a0 settings:(id)a1;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0 initialAppLayout:(id)a1 selectedDisplayItem:(id)a2;
- (struct CGPoint { double x0; double x1; })preferredCenterForSelectedItemInDestinationModifier:(id)a0;

@end
