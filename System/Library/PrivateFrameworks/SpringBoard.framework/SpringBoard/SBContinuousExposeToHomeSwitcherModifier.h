@class SBAppSwitcherContinuousExposeSwitcherModifier;

@interface SBContinuousExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppSwitcherContinuousExposeSwitcherModifier *_continuousExposeModifier;
}

- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (BOOL)_isEffectivelyHome;
- (void).cxx_destruct;
- (long long)homeScreenBackdropBlurType;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)_newContinuousExposeModifier;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 continuousExposeModifier:(id)a2;

@end
