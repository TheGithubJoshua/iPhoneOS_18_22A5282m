@class SBAppLayout;

@interface SBCenterWindowToNewSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromFullScreenAppLayout;
    SBAppLayout *_toSpaceAppLayout;
    long long _layoutRoleBeingAdded;
}

- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (BOOL)_wasItemPreviouslyCenter:(id)a0;
- (BOOL)_wasItemPreviouslyFullScreen:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromFullScreenAppLayout:(id)a1 toSpaceAppLayout:(id)a2;

@end
