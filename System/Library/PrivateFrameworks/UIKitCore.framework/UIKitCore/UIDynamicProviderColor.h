@interface UIDynamicProviderColor : UIDynamicColor {
    id /* block */ _provider;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)replacementObjectForCoder:(id)a0;
- (id)initWithProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;

@end
