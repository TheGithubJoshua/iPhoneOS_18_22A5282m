@interface _REEmptyFeatureSet : REFeatureSet

- (id)init;
- (id)initWithFeatures:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allFeatures;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithFeature:(id)a0;
- (id)featureWithName:(id)a0;
- (BOOL)containsFeature:(id)a0;

@end
