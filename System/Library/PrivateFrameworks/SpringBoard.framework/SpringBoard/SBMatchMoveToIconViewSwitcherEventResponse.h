@class SBAppLayout;

@interface SBMatchMoveToIconViewSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAppLayout:(id)a0 active:(BOOL)a1;
- (void).cxx_destruct;
- (long long)type;

@end
