@class SBActiveAppLayoutFloatingSwitcherModifier;

@interface SBStashedFloatingSwitcherModifier : SBSwitcherModifier {
    SBActiveAppLayoutFloatingSwitcherModifier *_activeModifier;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (id)handleTapSlideOverTongueEvent:(id)a0;
- (id)initWithFloatingConfiguration:(long long)a0 environmentMode:(long long)a1;

@end
