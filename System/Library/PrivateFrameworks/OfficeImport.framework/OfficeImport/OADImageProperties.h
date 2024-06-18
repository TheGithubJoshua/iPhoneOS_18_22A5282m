@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties {
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)description;
- (id)imageFill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)hasImageFill;
- (void)setImageFill:(id)a0;

@end
