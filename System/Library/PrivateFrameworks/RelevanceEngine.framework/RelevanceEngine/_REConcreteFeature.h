@class NSString;

@interface _REConcreteFeature : REFeature {
    NSString *_name;
    unsigned long long _featureType;
}

- (unsigned long long)featureType;
- (unsigned long long)hash;
- (id)name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_bitCount;
- (id)_rootFeatures;
- (id)initWithName:(id)a0 featureType:(unsigned long long)a1;

@end
