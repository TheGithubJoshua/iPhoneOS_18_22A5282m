@interface _UIVibrancyEffectImpl : NSObject

+ (id)implementationFromCoder:(id)a0;

- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)setEffect:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)vibrancyStyle;
- (void)appendDescriptionTo:(id)a0;
- (BOOL)invertAutomaticStyle;
- (long long)style;
- (id)implementationReplacingTintColor:(id)a0;

@end
