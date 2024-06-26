@interface _UIBlurEffectAverageImpl : _UIBlurEffectImpl {
    double _scale;
}

+ (id)sharedInstance;

- (id)initWithScale:(double)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)appendDescriptionTo:(id)a0;

@end
