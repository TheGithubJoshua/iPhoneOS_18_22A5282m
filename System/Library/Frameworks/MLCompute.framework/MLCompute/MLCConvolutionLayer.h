@class MLCTensorParameter, MLCTensor, MLCConvolutionDescriptor;

@interface MLCConvolutionLayer : MLCLayer

@property (readonly, nonatomic) int accumulatorPrecisionOption;
@property (readonly, copy, nonatomic) MLCConvolutionDescriptor *descriptor;
@property (readonly, retain, nonatomic) MLCTensor *weights;
@property (readonly, retain, nonatomic) MLCTensor *biases;
@property (readonly, retain, nonatomic) MLCTensorParameter *weightsParameter;
@property (readonly, retain, nonatomic) MLCTensorParameter *biasesParameter;

+ (id)layerWithWeights:(id)a0 biases:(id)a1 descriptor:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)parametersCount;
- (BOOL)allocateDataForOptimizer:(id)a0;
- (void)allocateGradientsForParameters;
- (unsigned long long)allocatedDataSizeForTraining:(BOOL)a0 optimizer:(id)a1;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithWeights:(id)a0 biases:(id)a1 descriptor:(id)a2;
- (void)linkAssociatedTensors;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;

@end
