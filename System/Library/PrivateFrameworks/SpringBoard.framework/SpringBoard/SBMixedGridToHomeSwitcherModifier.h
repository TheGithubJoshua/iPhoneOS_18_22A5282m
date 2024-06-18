@class SBMixedGridSwitcherModifier;

@interface SBMixedGridToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (id)_newMixedGridModifier;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 mixedGridModifier:(id)a2;

@end
