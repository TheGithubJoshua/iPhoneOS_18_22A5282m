@class SBAppLayout;

@interface SBFocusedAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_focusedAppLayout;
}

- (BOOL)shouldShowBackdropViewAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)visibleAppLayouts;
- (id)handleRemovalEvent:(id)a0;
- (id)handleUpdateFocusedAppLayoutEvent:(id)a0;
- (id)initWithFocusedAppLayout:(id)a0;

@end
