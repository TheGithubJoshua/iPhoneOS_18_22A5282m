@class SBAppLayout, SBActiveAppLayoutFloatingSwitcherModifier, SBAppSwitcherSettings;

@interface SBSlideOverPeekSwitcherModifier : SBSwitcherModifier {
    SBAppSwitcherSettings *_switcherSettings;
    long long _peekConfiguration;
    SBAppLayout *_peekingAppLayout;
    long long _environmentMode;
    long long _fromFloatingConfiguration;
    SBActiveAppLayoutFloatingSwitcherModifier *_floorModifier;
}

- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (id)visibleHomeAffordanceLayoutElements;
- (BOOL)wantsDockBehaviorAssertion;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)dockWindowLevel;
- (unsigned long long)slideOverTongueDirection;
- (BOOL)wantsHomeScreenPointerInteractions;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)dockProgress;
- (double)homeScreenBackdropBlurProgress;
- (double)homeScreenDimmingAlpha;
- (id)handleTapAppLayoutEvent:(id)a0;
- (double)homeScreenScale;
- (void).cxx_destruct;
- (long long)dockUpdateMode;
- (long long)homeScreenBackdropBlurType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)homeScreenAlpha;
- (unsigned long long)dockWindowLevelPriority;
- (long long)wallpaperStyle;
- (id)initWithAppLayout:(id)a0 peekConfiguration:(long long)a1 environmentMode:(long long)a2 fromFloatingConfiguration:(long long)a3;

@end
