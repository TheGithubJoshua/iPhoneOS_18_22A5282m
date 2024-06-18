@class NSString, SBAppLayout;

@interface SBContinuousExposeAppToInlineAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_activeAppLayout;
    NSString *_appExposeBundleIdentifier;
    long long _direction;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (void).cxx_destruct;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (double)adjustedSpaceAccessoryViewScale:(double)a0 forAppLayout:(id)a1;
- (id)_inlineAppExposeAppLayouts;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 activeAppLayout:(id)a2 appExposeBundleIdentifier:(id)a3;

@end
