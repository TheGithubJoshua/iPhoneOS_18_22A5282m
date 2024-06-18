@class SBAppLayout;

@interface SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
    unsigned long long _gestureEdge;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    unsigned long long _iconGridSizeClass;
    BOOL _overshootScaleForWidgetZoomDown;
}

- (id)handleTransitionEvent:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_settingsByInterpolatingBetween:(id)a0 and:(id)a1 progress:(double)a2;
- (id)_layoutSettings;
- (id)_scaleSettings;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
- (id)_positionSettings;
- (id)initWithAppLayout:(id)a0 gestureEdge:(unsigned long long)a1 liftOffVelocity:(struct CGPoint { double x0; double x1; })a2;

@end
