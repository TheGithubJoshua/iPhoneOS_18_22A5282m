@class SBAppLayout;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
}

- (id)keyboardSuppressionMode;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)initWithActiveAppLayout:(id)a0;
- (void).cxx_destruct;

@end
