@class NSArray, NSMutableDictionary, NSDictionary, MLCDevice, NSMutableArray, NSString;

@interface MLCGraph : NSObject

@property (nonatomic) BOOL readyForExecution;
@property (readonly, retain, nonatomic) NSArray *graphObjects;
@property (nonatomic) unsigned long long nextLayerID;
@property (retain, nonatomic) NSMutableArray *graphLayerList;
@property (retain, nonatomic) NSMutableArray *rootLevelTensorNodes;
@property (retain, nonatomic) NSMutableDictionary *layerParentMap;
@property (retain, nonatomic) NSMutableDictionary *layerChildMap;
@property (retain, nonatomic) NSDictionary *allInputs;
@property (retain, nonatomic) NSDictionary *allLossLabels;
@property (retain, nonatomic) NSDictionary *allLossLabelWeights;
@property (retain, nonatomic) NSDictionary *allOutputs;
@property (retain, nonatomic) NSMutableArray *lstmLayerIndexList;
@property (nonatomic) BOOL recompileAfterLinking;
@property (nonatomic) unsigned long long compilerOptions;
@property (nonatomic) BOOL staticBatchSizeInGraph;
@property (retain, nonatomic) MLCDevice *device;
@property (nonatomic) BOOL allocateDeviceMemoryForTensorsInGraph;
@property (retain, nonatomic) NSMutableArray *freeResourceList;
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) NSString *summarizedDOTDescription;

+ (id)graph;
+ (id)graphWithGraphObjects:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (BOOL)addInputs:(id)a0 lossLabels:(id)a1 lossLabelWeights:(id)a2;
- (id)nodeWithLayer:(id)a0 source:(id)a1;
- (id)nodeWithLayer:(id)a0 sources:(id)a1;
- (BOOL)addOutputs:(id)a0;
- (BOOL)addInputs:(id)a0 lossLabels:(id)a1;
- (id)nodeWithLayer:(id)a0 sources:(id)a1 disableUpdate:(BOOL)a2;
- (id)resultTensorsForLayer:(id)a0;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;
- (id)transposeWithDimensions:(id)a0 source:(id)a1;
- (void)updateLSTMLayersForVariableSequenceLengthInGraph:(id)a0 withInputData:(id)a1;
- (void)addGraphNodes:(id)a0 withControlTreeNode:(id)a1;
- (void)allocateDeviceMemoryForTensor:(id)a0 device:(id)a1;
- (BOOL)bindAndWriteData:(id)a0 forInputs:(id)a1 toDevice:(id)a2 batchSize:(unsigned long long)a3 synchronous:(BOOL)a4;
- (BOOL)bindAndWriteData:(id)a0 forInputs:(id)a1 toDevice:(id)a2 batchSize:(unsigned long long)a3 synchronous:(BOOL)a4 skipWrite:(BOOL)a5;
- (BOOL)bindAndWriteData:(id)a0 forInputs:(id)a1 toDevice:(id)a2 synchronous:(BOOL)a3;
- (void)checkAndResetTensorsAssociatedWithLayer:(id)a0 sources:(id)a1;
- (BOOL)checkPageAlignmentAndSizeForOutputs:(id)a0;
- (BOOL)checksBeforeAddLayerInGraph:(id)a0 sources:(id)a1 forTraining:(BOOL)a2;
- (id)concatenateWithSources:(id)a0 dimension:(unsigned long long)a1;
- (id)conditionalWithPredicate:(id)a0 trueBranch:(id)a1 falseBranch:(id)a2;
- (id)createGradientSourceTensorWith:(id)a0 source:(id)a1;
- (id)createLossGradientSourceTensorWith:(id)a0 source:(id)a1 batchSize:(id)a2;
- (id)createTensorWith:(id)a0 sources:(id)a1;
- (void)createVariableLengthSequenceTensorsForLayer:(id)a0 withVariableSequenceLength:(id)a1;
- (BOOL)dispatchReadsForMultipleTensorOutputs:(id)a0 finalTensorInGraph:(id)a1 finalResultTensor:(id)a2 batchSize:(unsigned long long)a3;
- (void)enumerateInputsUsingBlock:(id /* block */)a0;
- (void)enumerateOutputsUsingBlock:(id /* block */)a0;
- (void)flattenConditionalLayer:(id)a0;
- (void)freeDeviceMemoryForTensorIfSafe:(id)a0 device:(id)a1;
- (id)gatherWithDimension:(unsigned long long)a0 source:(id)a1 indices:(id)a2;
- (id)initWithGraphObjects:(id)a0;
- (void)insertPhis:(id)a0;
- (BOOL)isLayerInGraphLayerList:(id)a0 graphLayerList:(id)a1;
- (void)linkRelatedTensorsForConcatLayer:(id)a0 device:(id)a1;
- (void)linkSourceTensorsWithLayer:(id)a0 sources:(id)a1;
- (id)nodeWithLayer:(id)a0 sources:(id)a1 forTraining:(BOOL)a2;
- (id)nodeWithLayer:(id)a0 sources:(id)a1 lossLabels:(id)a2;
- (id)nodeWithMultiOutputLayer:(id)a0 source:(id)a1 forTraining:(BOOL)a2;
- (id)reshapeWithShape:(id)a0 source:(id)a1;
- (id)resultTensorsForLayer:(id)a0 graphLayerList:(id)a1;
- (id)scatterWithDimension:(unsigned long long)a0 source:(id)a1 indices:(id)a2 copyFrom:(id)a3 reductionType:(int)a4;
- (id)selectWithSources:(id)a0 condition:(id)a1;
- (id)sourceTensorsForLayer:(id)a0;
- (id)sourceTensorsForLayer:(id)a0 graphLayerList:(id)a1;
- (id)splitWithSource:(id)a0 splitCount:(unsigned long long)a1 dimension:(unsigned long long)a2;
- (id)splitWithSource:(id)a0 splitSectionLengths:(id)a1 dimension:(unsigned long long)a2;
- (void)updateDeviceMemoryReadCountForGradientWithLayer:(id)a0 tensor:(id)a1 checkIfSourceNeeded:(BOOL)a2 checkIfResultNeeded:(BOOL)a3;
- (void)updateDeviceMemoryReadCountForTensor:(id)a0;
- (void)updateOutputTensorsDeviceMemoryWithData:(id)a0;
- (void)writeAsyncToDevice:(id)a0 dataForTensors:(id)a1;

@end