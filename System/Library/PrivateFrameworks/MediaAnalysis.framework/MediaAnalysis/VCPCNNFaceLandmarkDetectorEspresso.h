@class VCPCNNModelEspresso;

@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)computeLandmarks:(float *)a0;
- (float *)getInputBuffer;

@end
