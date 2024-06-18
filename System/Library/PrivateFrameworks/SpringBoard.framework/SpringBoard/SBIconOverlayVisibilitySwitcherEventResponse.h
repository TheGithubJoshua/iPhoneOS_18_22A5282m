@class SBAppLayout;

@interface SBIconOverlayVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0 visible:(BOOL)a1;
- (long long)type;

@end
