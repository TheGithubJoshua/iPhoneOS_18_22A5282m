@protocol MTLComputePipelineState, MTLDevice, MTLSamplerState;

@interface PTRaytracingUtils : NSObject {
    id<MTLComputePipelineState> _focusEdgeMask;
    id<MTLComputePipelineState> _interpolateRGBRadiusToDestYUV[9];
    id<MTLComputePipelineState> _interpolateRGBRadiusToDestRGBA[9];
    id<MTLComputePipelineState> _interpolateRGBRadiusToDestYUVFromSource[9];
    id<MTLComputePipelineState> _interpolateRGBRadiusToDestRGBAFromSource[9];
    id<MTLComputePipelineState> _convertRGBPyramid[9];
    id<MTLComputePipelineState> _convertRGBPyramidFromYUV[9];
    id<MTLComputePipelineState> _centerDisparityOnFocus;
    id<MTLComputePipelineState> _sobelEdgeDetector;
    id<MTLComputePipelineState> _edgeDilation;
    id<MTLDevice> _device;
    id<MTLSamplerState> _sNBE;
    id<MTLSamplerState> _sNLE;
}

+ (float)focalLength;
+ (struct PTFocusEdge { float x0; float x1; float x2; float x3; })createFocusEdge;
+ (id)createRandomUChars:(id)a0 rayCount:(int)a1;
+ (float)frameWidth;
+ (id)precomputeNoise:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 seed:(long long)a1 device:(id)a2;
+ (struct PTNoiseValues { float x0; float x1; })calculateVarReadNoise:(id)a0;
+ (struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })createFocusObject:(SEL)a0 coverageOverscan:(id)a1 anamorphicFactor:(float)a2 raytracingRadiusLocal:(float)a3 rayCount:(float)a4 colorSize:(int)a5 doMacroApertureLimit:(BOOL)a6;
+ (void)initEquidistPoints:(struct PTRandomDisk { struct Half2 { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; } x0[94]; int x1; void /* unknown type, blank encoding */ x2; } *)a0 samplePatternCircles:(int)a1;

- (void).cxx_destruct;
- (void)centerDisparityOnFocus:(id)a0 inDisparity:(id)a1 outDisparity:(id)a2 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a3;
- (int)convertRGBPyramidFromSource:(id)a0 renderRequest:(id)a1 rgbaPyramidArray:(id)a2 skipLevel0:(BOOL)a3;
- (int)detectDilatedEdges:(id)a0 inDisparity:(id)a1 tempEdges:(id)a2 outEdges:(id)a3 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a4 disparityDiffMinMax:(id)a5 edgeTolerance:(float)a6;
- (void)focusEdgeMask:(id)a0 inDisparityDiff:(id)a1 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a2 focusEdge:(struct PTFocusEdge { float x0; float x1; float x2; float x3; })a3 outFocusEdgeMask:(id)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;
- (void)interpolateRGBRadiusToDest:(id)a0 renderRequest:(id)a1 inRGBA:(id)a2 inRGBRadius:(id)a3 inRandomGauss:(id)a4 bicubicSampling:(BOOL)a5;
- (void)interpolateRGBRadiusUsingSourceToDest:(id)a0 renderRequest:(id)a1 inRGBRadius:(id)a2 inRandomGauss:(id)a3 bicubicSampling:(BOOL)a4;
- (id)sNBE;
- (id)sNLE;

@end
