@interface _REDoubleFeatureValue : REFeatureValue {
    double _value;
}

+ (id)featureValueWithDouble:(double)a0;

- (double)doubleValue;
- (id)initWithValue:(double)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)type;
- (unsigned long long)_integralFeatureValue;

@end
