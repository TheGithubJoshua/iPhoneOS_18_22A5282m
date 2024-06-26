@class NSArray;

@interface MLCTransposeLayer : MLCLayer

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, copy, nonatomic) NSArray *dimensions;

+ (id)layerWithDimensions:(id)a0;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)initWithDimensions:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (BOOL)isStaticBatchSize;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (unsigned long long)resultSizeFromSourceSizes:(id)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
