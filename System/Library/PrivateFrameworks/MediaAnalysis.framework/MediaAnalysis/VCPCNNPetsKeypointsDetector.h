@class VCPCNNModelEspresso;

@interface VCPCNNPetsKeypointsDetector : NSObject {
    int _maxNumRegions;
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
    int _inputWidth;
    int _inputHeight;
}

- (void).cxx_destruct;
- (void)dealloc;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withBox:(id)a1 keypoints:(id)a2;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3 box:(id)a4;
- (id)initWithForceCPU:(BOOL)a0 sharedModel:(BOOL)a1;
- (int)parseHeatmap2Keypoints:(id)a0;

@end
