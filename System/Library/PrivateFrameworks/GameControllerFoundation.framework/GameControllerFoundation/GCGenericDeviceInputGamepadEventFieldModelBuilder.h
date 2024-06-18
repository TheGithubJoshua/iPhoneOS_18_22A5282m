@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceInputGamepadEventFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (nonatomic) long long extendedIndex;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sourceExpression;

- (id)init;
- (unsigned long long)hash;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void)initializeWithModel:(id)a0;

@end
