@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry {
    double _initialAlpha;
    double _finalAlpha;
}

- (void)removeEffectFromView:(id)a0;
- (void)applyIdentityEffectToView:(id)a0;
- (id)description;
- (id)copyForTransitionToEffect:(id)a0;
- (void)applyRequestedEffectToView:(id)a0;
- (id)copyForTransitionOut;
- (void)addEffectToView:(id)a0;
- (id)initWithInitialAlpha:(double)a0 finalAlpha:(double)a1;

@end
