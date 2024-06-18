@class NSString, SBAppExposeGridSwitcherModifier;

@interface SBAppExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSString *_bundleIdentifier;
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
}

- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (double)plusButtonAlpha;
- (id)transitionDidEnd;
- (BOOL)_isEffectivelyHome;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (id)_newAppExposeModifier;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 bundleIdentifier:(id)a2 appExposeModifier:(id)a3;

@end
