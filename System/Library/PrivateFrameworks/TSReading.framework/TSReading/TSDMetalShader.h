@class NSString, MTLRenderPipelineReflection;
@protocol MTLRenderPipelineState;

@interface TSDMetalShader : NSObject {
    long long _vertexUniformsIndex;
    unsigned long long _vertexUniformsSize;
    long long _fragmentUniformsIndex;
    unsigned long long _fragmentUniformsSize;
}

@property (readonly, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (readonly, nonatomic) MTLRenderPipelineReflection *pipelineReflectionObject;
@property (readonly, nonatomic) unsigned long long bufferIndex;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)initCustomShaderWithVertexShader:(id)a0 fragmentShader:(id)a1 device:(id)a2 library:(id)a3 colorAttachment:(id)a4;
- (id)initCustomShaderWithVertexShader:(id)a0 fragmentShader:(id)a1 device:(id)a2 library:(id)a3 colorAttachment:(id)a4 velocityAttachment:(id)a5;
- (id)initDefaultBlendShaderWithDevice:(id)a0 colorAttachment:(id)a1 velocityAttachment:(id)a2 motionBlur:(BOOL)a3;
- (id)initDefaultBloomShaderWithDevice:(id)a0 colorAttachment:(id)a1;
- (id)initDefaultGaussianBlurShaderWithDevice:(id)a0 colorAttachment:(id)a1 halfSizedRadius:(BOOL)a2;
- (id)initDefaultNeighborMaxBlurShaderWithDevice:(id)a0 colorAttachment:(id)a1;
- (id)initDefaultShaderWithVertexShader:(id)a0 fragmentShader:(id)a1 device:(id)a2 colorAttachment:(id)a3;
- (id)initDefaultSingleDirectionMotionBlurShaderWithDevice:(id)a0 colorAttachment:(id)a1;
- (id)initDefaultTextureAndOpacityMotionBlurShaderWithDevice:(id)a0 colorAttachment:(id)a1 velocityAttachment:(id)a2 motionBlur:(BOOL)a3;
- (id)initDefaultTextureAndOpacityShaderWithDevice:(id)a0 colorAttachment:(id)a1;
- (id)initDefaultTextureMotionBlurShaderWithDevice:(id)a0 colorAttachment:(id)a1 velocityAttachment:(id)a2;
- (id)initDefaultTextureShaderWithDevice:(id)a0 colorAttachment:(id)a1;
- (id)initDefaultTileMaxBlurShaderWithDevice:(id)a0 colorAttachment:(id)a1;
- (id)initDefaultVelocityCollectionShaderWithDevice:(id)a0 colorAttachment:(id)a1;
- (id)initDefaultVelocityVisualizerShaderWithDevice:(id)a0 colorAttachment:(id)a1;
- (id)initQuadMotionBlurTextureShaderWithFragmentShader:(id)a0 device:(id)a1 library:(id)a2 colorAttachment:(id)a3 velocityAttachment:(id)a4;
- (id)initQuadTextureShaderWithFragmentShader:(id)a0 device:(id)a1 library:(id)a2 colorAttachment:(id)a3;
- (id)initQuadTextureShaderWithFragmentShader:(id)a0 device:(id)a1 library:(id)a2 colorAttachment:(id)a3 velocityAttachment:(id)a4;
- (id)initWithDefaultVertexShader:(id)a0 fragmentShader:(id)a1 device:(id)a2 colorAttachment:(id)a3 velocityAttachment:(id)a4 label:(id)a5 setupUniforms:(BOOL)a6;
- (id)p_createPipelineStateWithRenderPipelineDescriptor:(id)a0 device:(id)a1 setupUniforms:(BOOL)a2;
- (long long)p_indexOfUniformsFromMetalBindings:(id)a0 size:(unsigned long long *)a1 bufferIndex:(unsigned long long *)a2;
- (void)p_setDefaultVertexUniforms;
- (void)p_setupPipelineStateWithVertexFunction:(id)a0 fragmentShader:(id)a1 device:(id)a2 library:(id)a3 colorAttachment:(id)a4 velocityAttachment:(id)a5 setupUniforms:(BOOL)a6;
- (void)p_setupPipelineStateWithVertexShader:(id)a0 fragmentShader:(id)a1 device:(id)a2 library:(id)a3 colorAttachment:(id)a4 velocityAttachment:(id)a5 setupUniforms:(BOOL)a6;
- (void)setPipelineStateWithEncoder:(id)a0;
- (void)setPipelineStateWithEncoder:(id)a0 fragmentBytes:(const void *)a1;
- (void)setPipelineStateWithEncoder:(id)a0 vertexBytes:(const void *)a1;
- (void)setPipelineStateWithEncoder:(id)a0 vertexBytes:(const void *)a1 fragmentBytes:(const void *)a2;

@end
