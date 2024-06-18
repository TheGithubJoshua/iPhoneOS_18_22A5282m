@interface SBItemResizeGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) long long selectedLayoutRole;
@property (nonatomic) unsigned long long selectedEdge;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;

@end
