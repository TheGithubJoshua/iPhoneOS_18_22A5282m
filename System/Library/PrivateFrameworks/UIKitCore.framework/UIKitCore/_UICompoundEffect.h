@class NSArray;

@interface _UICompoundEffect : UIVisualEffect {
    NSArray *_effects;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)_allEffects;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (unsigned long long)hash;
- (long long)_expectedUsage;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)_enumerateEffects:(id /* block */)a0;
- (id)initWithEffects:(id)a0;

@end
