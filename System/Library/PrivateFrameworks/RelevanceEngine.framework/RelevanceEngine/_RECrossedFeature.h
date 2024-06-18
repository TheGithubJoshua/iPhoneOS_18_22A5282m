@class NSArray, NSString, REFeatureSet;

@interface _RECrossedFeature : REFeature {
    NSString *_name;
    unsigned long long _featureType;
    unsigned long long _bitCount;
    REFeatureSet *_dependentFeatures;
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSArray *features;

- (id)initWithFeatures:(id)a0;
- (unsigned long long)featureType;
- (unsigned long long)hash;
- (id)name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_bitCount;
- (void)_computeHash;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)a0 withFeature:(id)a1;
- (id)_rootFeatures;
- (void)_updateFeaturesArray;

@end
