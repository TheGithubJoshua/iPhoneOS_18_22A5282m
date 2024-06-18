@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {
    _UIViewAnimationAttributes *_attributes;
}

- (double)delay;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (double)duration;
- (id)factoryWithTimingFunction:(id)a0;

@end
