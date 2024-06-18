@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceRumbleOutputFieldModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *valueExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end