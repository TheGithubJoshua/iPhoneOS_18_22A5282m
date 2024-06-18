@interface GCGenericDeviceDataConstantExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) double value;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)a0 error:(out id *)a1;

@end
