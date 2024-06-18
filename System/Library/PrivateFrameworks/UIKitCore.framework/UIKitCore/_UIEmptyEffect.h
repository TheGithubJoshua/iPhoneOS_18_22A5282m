@interface _UIEmptyEffect : UIVisualEffect

+ (BOOL)supportsSecureCoding;

- (id)_allEffects;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateEffects:(id /* block */)a0;

@end
