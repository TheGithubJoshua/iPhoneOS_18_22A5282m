@interface VNEntityIdentificationModelAlgorithmVIPv3 : VNEntityIdentificationModelAlgorithm

@property long long indexType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (Class)trainedModelClass;

@end
