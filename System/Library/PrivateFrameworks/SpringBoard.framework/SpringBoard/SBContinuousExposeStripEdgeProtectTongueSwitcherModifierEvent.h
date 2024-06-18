@interface SBContinuousExposeStripEdgeProtectTongueSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic, getter=isTonguePresented) BOOL tonguePresented;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)initWithTonguePresented:(BOOL)a0;

@end
