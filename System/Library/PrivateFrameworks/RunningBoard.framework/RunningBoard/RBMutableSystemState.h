@interface RBMutableSystemState : RBSystemState

- (void)addPreventIdleSleepIdentifier:(id)a0;
- (id)init;
- (void)addTag:(id)a0;
- (void)setPreventIdleSleep:(BOOL)a0;
- (void)addAllowLaunchPredicate:(id)a0;
- (void)prewarmIdentity:(id)a0 withInterval:(double)a1;
- (void)removeAllPreventIdleSleepIdentifiers;
- (void)unionState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPreventLaunchPredicate:(id)a0;
- (void)setPreventLaunch:(BOOL)a0;
- (void)upgradeCondition:(id)a0 toValue:(long long)a1;
- (void)removePreventIdleSleepIdentifier:(id)a0;

@end
