@class SBAppLayout;

@interface SBHighlightSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic, getter=isHoverEvent) BOOL hoverEvent;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)initWithLayoutRole:(long long)a0 inAppLayout:(id)a1 phase:(unsigned long long)a2 hover:(BOOL)a3;

@end
