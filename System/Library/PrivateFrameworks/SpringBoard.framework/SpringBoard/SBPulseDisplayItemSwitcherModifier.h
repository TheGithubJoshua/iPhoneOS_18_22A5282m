@class SBDisplayItem;

@interface SBPulseDisplayItemSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *displayItemToPulse;
@property (readonly, nonatomic) SBDisplayItem *displayItem;

- (id)handleTimerEvent:(id)a0;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayItem:(id)a0;
- (id)topMostLayoutElements;
- (id)handleTapAppLayoutHeaderEvent:(id)a0;

@end
