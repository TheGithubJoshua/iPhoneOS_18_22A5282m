@class NSString;

@interface ABPKMLModelConfiguration2DEnrollmentAnadrolMCAM : ABPKMLModelConfiguration2D {
    NSString *_mlModelPath;
}

- (id)init;
- (void).cxx_destruct;
- (float)scale;
- (struct CGSize { double x0; double x1; })inputDimensions;
- (id)inputTensorNames;
- (id)outputTensorNames;
- (unsigned int)heatMapChannels;
- (BOOL)networkWantsBGR;
- (unsigned int)affinityMapChannels;
- (BOOL)applyPreProcessing;
- (float)biasB;
- (float)biasG;
- (float)biasR;
- (id)compiledMLModelPath;
- (id)configStringForABPKDeviceOrientation:(long long)a0;
- (id)configStringForDeviceOrientation:(long long)a0;
- (struct CGSize { double x0; double x1; })inputDimensionsForABPKDeviceOrientation:(long long)a0;
- (struct CGSize { double x0; double x1; })inputDimensionsForDeviceOrientation:(long long)a0;
- (BOOL)networkEstimatesAffinityMaps;

@end
