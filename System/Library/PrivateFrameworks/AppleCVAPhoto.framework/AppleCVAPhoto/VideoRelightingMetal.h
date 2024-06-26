@class NSData, NSArray, CVAFilterMaskedVariableBlur, CIColor, CVAFilterColorAlphaToFgBg, CVAPhotoMTLRingBuffer, NSObject, MTLRenderPassDescriptor;
@protocol OS_dispatch_semaphore, MTLTexture, MTLDepthStencilState, MTLComputePipelineState, MTLBuffer, CVAVideoPipelinePropertiesSPI, MTLPipelineLibrarySPI, MTLRenderPipelineState, MTLLibrary, MTLDeviceSPI, MTLCommandQueue, OS_dispatch_queue;

@interface VideoRelightingMetal : ImageSaverAndFileConfigRegistrator {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    id<MTLCommandQueue> _commandQueue;
    void *_metalContext;
    id<CVAVideoPipelinePropertiesSPI> _properties;
    MTLRenderPassDescriptor *_tcRenderDesc;
    id<MTLRenderPipelineState> _tcKernel;
    id<MTLTexture> _tcDepthTexture;
    id<MTLTexture> _tcTexture;
    id<MTLTexture> _lightTexture;
    struct TC_MatrixUniforms { struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } modelViewProjectionMatrix; } _tcMatrixUniformsBuffer;
    id<MTLDepthStencilState> _depthStencilState;
    id<MTLComputePipelineState> _kernel_CountVertical;
    id<MTLComputePipelineState> _kernel_Count;
    id<MTLComputePipelineState> _kernel_Slide;
    id<MTLComputePipelineState> _kernel_Relight[2][2][2];
    id<MTLComputePipelineState> _kernel_AlphaBlendRGBATextureArray;
    id<MTLTexture> _texStub;
    NSData *_colorCubeUserData;
    id<MTLTexture> _texColorCubeUserData;
    id<MTLTexture> _texColorCubeStaticArray[7];
    id<MTLTexture> _texSelectedColorCube;
    id<MTLTexture> _srcTexture;
    id<MTLTexture> _dstTexture;
    id<MTLTexture> _dstUVTexture;
    long long _frameIndex;
    long long _frameIndexWhenFacekitAllowed;
    id<MTLTexture> _alphaTexture;
    BOOL _trustAlpha;
    id<MTLTexture> _vertCountTexture;
    id<MTLTexture> _countTexture;
    id<MTLTexture> _slideTexture;
    id<MTLTexture> _rgbTransformMapContourNearTexture[2];
    id<MTLTexture> _rgbTransformMapStudioNearTexture[2];
    id<MTLTexture> _rgbTransformMapContourFarTexture[2];
    id<MTLTexture> _rgbTransformMapStudioFarTexture[2];
    id<MTLTexture> _rgbTransformMapCurrentNearTexturePtr;
    id<MTLTexture> _rgbTransformMapCurrentFarTexturePtr;
    id<MTLTexture> _rgbTransformMapCurrentTextureInterpolated;
    id<MTLTexture> _rgbTransformMapTextureSelectedPtr;
    float _lightMapsNearFarLerp;
    struct SlideUniforms { float center_x; float center_y; } _uniformBuffer_slide;
    struct RelightUniforms { void /* unknown type, empty encoding */ outSizeInv; void /* unknown type, empty encoding */ backgroundColor; void /* unknown type, blank encoding */ proxyToFaceEffectLerp; void /* unknown type, blank encoding */ blurStrengthByDistance; void /* unknown type, blank encoding */ portraitStyleStrength; void /* unknown type, blank encoding */ colorCubeMaskLerp; void /* unknown type, blank encoding */ colorCubeIntensity; void /* unknown type, blank encoding */ vignetteIntensity; void /* unknown type, blank encoding */ vignettingScale; void /* unknown type, empty encoding */ faceCenter01; void /* unknown type, blank encoding */ faceAngleYawRad; struct half2x2 { void /* unknown type, empty encoding */ columns[2]; } faceRotMat; struct TrapezoidUniforms { struct LerpUniforms { void /* unknown type, blank encoding */ m; void /* unknown type, blank encoding */ b; } l0; struct LerpUniforms { void /* unknown type, blank encoding */ m; void /* unknown type, blank encoding */ b; } l1; void /* unknown type, blank encoding */ ymin; void /* unknown type, blank encoding */ ymax; } rightSideTrapezoidU; struct TrapezoidUniforms { struct LerpUniforms { void /* unknown type, blank encoding */ m; void /* unknown type, blank encoding */ b; } l0; struct LerpUniforms { void /* unknown type, blank encoding */ m; void /* unknown type, blank encoding */ b; } l1; void /* unknown type, blank encoding */ ymin; void /* unknown type, blank encoding */ ymax; } leftSideTrapezoidU; struct LerpClampUniforms { struct LerpUniforms { void /* unknown type, blank encoding */ m; void /* unknown type, blank encoding */ b; } l; void /* unknown type, blank encoding */ y0; void /* unknown type, blank encoding */ y1; } horAngleLerpClampU; } _uniformBuffer_relight;
    struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } _modelViewProjectionMatrix;
    struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } _modelViewMatrix;
    struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } _projectionMatrix;
    void /* unknown type, empty encoding */ _face3DCenter;
    void /* unknown type, empty encoding */ _faceModelCenterProjected;
    CIColor *_backgroundColor;
    float _proxyToFaceEffectLerpTemporal;
    float _proxyToFaceEffectLerpFinal;
    float _portraitStyleStrength;
    float _focusDistance;
    NSObject<OS_dispatch_queue> *_synchronousRelightingCallbackQueue;
    NSObject<OS_dispatch_semaphore> *_inflightSemaphore;
    MTLRenderPassDescriptor *_faceRenderDesc1;
    MTLRenderPassDescriptor *_faceRenderDesc2;
    MTLRenderPassDescriptor *_faceRenderDesc3;
    id<MTLRenderPipelineState> _kernel_Face;
    id<MTLTexture> _facemaskRegionTexture;
    struct vector<FaceVertex, std::allocator<FaceVertex>> { struct FaceVertex *__begin_; struct FaceVertex *__end_; struct __compressed_pair<FaceVertex *, std::allocator<FaceVertex>> { struct FaceVertex *__value_; } __end_cap_; } _modelVertices;
    CVAPhotoMTLRingBuffer *_vertexBuffer;
    struct FaceKitStreamedData { NSData *verticesPos; NSArray *intrinsics; NSArray *camR; NSArray *camT; NSArray *poseR; NSArray *poseT; NSData *landmarks; float confidence; } _faceKitStreamedData;
    BOOL _faceDetected;
    BOOL _faceDetectedReal;
    struct circular_buffer<bool, std::allocator<bool>> { BOOL *m_buff; BOOL *m_end; BOOL *m_first; BOOL *m_last; unsigned long long m_size; } _faceDetectedRealHistory;
    struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>> { BOOL m_initialized; struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>> { union dummy_u { char data[64]; struct a8 { } aligner_; } dummy_; } m_storage; } _faceConfidenceRollingVariance;
    struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>> { BOOL m_initialized; struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>> { union dummy_u { char data[56]; struct a8 { } aligner_; } dummy_; } m_storage; } _faceRelightingAngleFactorsRollingMean;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _faceKitMeshTris;
    id<MTLBuffer> _indexBufferImmutable;
    NSData *_faceKitMeshTexcoords;
    BOOL _debugFace;
    BOOL _debugFaceDraw;
    unsigned long long _indexOfCheekLandmark_topLeft;
    unsigned long long _indexOfCheekLandmark_bottomLeft;
    unsigned long long _indexOfCheekLandmark_topRight;
    unsigned long long _indexOfCheekLandmark_bottomRight;
    struct optional<unsigned long> { BOOL m_initialized; unsigned long long m_storage; } _closestLeftCheekVertexID;
    struct optional<float> { BOOL m_initialized; float m_storage; } _cheekAngle;
    CVAFilterColorAlphaToFgBg *_colorAlphaToFgBg;
    CVAFilterMaskedVariableBlur *_blurPyramidForSkinFg;
    id<MTLTexture> _texSkinRGBAPyramid;
    id<MTLTexture> _texSkinSegmentationAlias;
    float _vignettingScale;
}

@property (readonly) double gpuStartTime;
@property (readonly) double gpuEndTime;
@property (readonly) float relightingStability;

- (void)encodeAlphaBlendRGBATextureArrayToCommandBuffer:(id)a0 inTexFirst:(id)a1 inTexSecond:(id)a2 outTex:(id)a3 alpha:(const float *)a4;
- (void)updateUniforms:(BOOL)a0;
- (void)updateMatrixWithWidth:(int)a0 height:(int)a1 camera:(const void *)a2 pose:(const void *)a3;
- (id)getInternalColorCube:(int)a0;
- (void)initKernelFunctions;
- (id)initWithMetalContext:(void *)a0;
- (void)generateModelNormals;
- (void)encodeTCKernelToCommandBuffer:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadRGBTransformMapsOnceTo:(id *)a0 namePrefix:(const void *)a1 forIntermediateResults:(BOOL)a2;
- (void)saveTexture:(id)a0 toImage:(id)a1;
- (void)initCommon;
- (void)configureRenderPipeline;
- (void)updateModelAndPose:(void *)a0 camera:(void *)a1;
- (id)create3DTextureWithSize:(unsigned long long)a0;
- (void)loadRGBTransformMapsForEffectVersion:(BOOL)a0;
- (id)loadCube:(id)a0;
- (void)encodeLerpNearFarMapsToCommandBuffer:(id)a0;
- (void)encodeRelightKernelToCommandBuffer:(id)a0;
- (void)updateFaceKitStreamedDataFromProcessOutput:(id)a0;
- (void)createTexturesWith:(unsigned long long)a0 imgHeight:(unsigned long long)a1;
- (void)setModelVertices;
- (void)renderWithSrcImage:(struct __CVBuffer { } *)a0 srcAlpha:(struct __CVBuffer { } *)a1 trustAlpha:(BOOL)a2 yuvSourceDownsampled:(id)a3 skinSegmentation:(struct __CVBuffer { } *)a4 dstImage:(struct __CVBuffer { } *)a5 faceKitProcessOutput:(id)a6 portraitStyleStrength:(float)a7 colorSim:(id)a8 disparity:(id)a9 focusDistance:(float)a10 singleCubeData:(id)a11 properties:(id)a12 callbackQueue:(id)a13 callback:(id /* block */)a14;
- (void)encodeCountKernelToCommandBuffer:(id)a0;
- (void)encodeSlideKernelToCommandBuffer:(id)a0;
- (void)encodeVertCountKernelToCommandBuffer:(id)a0;

@end
