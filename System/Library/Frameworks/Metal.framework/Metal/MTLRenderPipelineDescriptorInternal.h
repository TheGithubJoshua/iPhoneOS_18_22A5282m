@class NSString, NSArray, MTLPipelineBufferDescriptorArrayInternal, NSDictionary, MTLRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions, MTLProfileControl, MTLVertexDescriptorInternal;
@protocol MTLFunction, MTLPipelineLibrary;

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {
    struct MTLRenderPipelineDescriptorPrivate { MTLRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; unsigned long long rtBlendDescHash[8]; unsigned long long depthAttachmentPixelFormat; unsigned long long stencilAttachmentPixelFormat; unsigned long long tessellationPartitionMode; unsigned long long maxTessellationFactor; BOOL tessellationFactorScaleEnabled; unsigned long long tessellationFactorFormat; unsigned long long tessellationControlPointIndexType; unsigned long long tessellationFactorStepFunction; unsigned long long tessellationOutputWindingOrder; unsigned long long postVertexDumpBufferIndex; BOOL supportIndirectCommandBuffers; long long textureWriteRoundingMode; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; unsigned long long sampleMask; union { unsigned int sampleCoverageHash; float sampleCoverage; } ; unsigned long long paddingToRemove; unsigned long long colorSampleCount; union { unsigned int miscHash[2]; struct { unsigned char alphaToCoverageEnabled : 1; unsigned char alphaToOneEnabled : 1; unsigned char rasterizationEnabled : 1; unsigned char inputPrimitiveTopology : 2; unsigned char private0 : 1; unsigned char depthStencilWriteDisabled : 1; unsigned char openGLMode : 1; unsigned char sampleCoverageInvert : 1; unsigned char private4 : 1; unsigned char vertexAmplificationMode : 1; unsigned char twoSideEnabled : 1; unsigned char pointSizeOutputVS : 1; unsigned char pointCoordLowerLeft : 1; unsigned char pointSmoothEnabled : 1; unsigned char clipDistanceEnableMask : 8; unsigned char alphaTestFunc : 3; unsigned char alphaTestEnabled : 1; unsigned char logicOp : 4; unsigned char logicOpEnabled : 1; unsigned char forceResourceIndex : 1; unsigned char forceSoftwareVertexFetch : 1; unsigned char objectThreadgroupSizeIsMultipleOfThreadExecutionWidth : 1; unsigned char meshThreadgroupSizeIsMultipleOfThreadExecutionWidth : 1; } ; } ; unsigned int vertexDepthCompareClampMask; unsigned int fragmentDepthCompareClampMask; unsigned long long resourceIndex; NSString *label; id<MTLFunction> vertexFunction; id<MTLFunction> fragmentFunction; MTLVertexDescriptorInternal *vertexDescriptor; id<MTLFunction> objectFunction; id<MTLFunction> meshFunction; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } objectThreadsPerThreadgroup_DO_NOT_USE_WILL_BE_REMOVED; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } meshThreadsPerThreadgroup_DO_NOT_USE_WILL_BE_REMOVED; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } maxPipelineChildren; unsigned long long pipelineMemoryLength; MTLPipelineBufferDescriptorArrayInternal *objectBuffers; MTLPipelineBufferDescriptorArrayInternal *meshBuffers; unsigned long long maxTotalThreadsPerObjectThreadgroup; unsigned long long maxTotalThreadsPerMeshThreadgroup; MTLPipelineBufferDescriptorArrayInternal *vertexBuffers; MTLPipelineBufferDescriptorArrayInternal *fragmentBuffers; NSDictionary *driverCompilerOptions; NSDictionary *gpuCompilerSPIOptions; id<MTLPipelineLibrary> pipelineLibrary; void *pad0; void *pad1; NSDictionary *pluginData; BOOL needsCustomBorderColorSamplers; unsigned int maxVertexAmplificationCount; NSArray *binaryArchives; MTLLinkedFunctions *vertexLinkedFunctions; MTLLinkedFunctions *fragmentLinkedFunctions; MTLLinkedFunctions *objectLinkedFunctions; MTLLinkedFunctions *meshLinkedFunctions; NSArray *vertexPreloadedLibraries; NSArray *fragmentPreloadedLibraries; NSArray *objectPreloadedLibraries; NSArray *meshPreloadedLibraries; unsigned long long maxVertexStackCallDepth; unsigned long long maxFragmentStackCallDepth; BOOL supportAddingVertexBinaryFunctions; BOOL supportAddingFragmentBinaryFunctions; unsigned long long maxMeshStackCallDepth; unsigned long long maxObjectStackCallDepth; BOOL supportAddingMeshBinaryFunctions; BOOL supportAddingObjectBinaryFunctions; MTLProfileControl *profileControl; unsigned int explicitVisibilityGroupID; } _private;
    struct FlatBufferBuilder { struct vector_downward { struct Allocator *allocator_; BOOL own_allocator_; unsigned long long initial_size_; unsigned long long buffer_minalign_; unsigned long long reserved_; char *buf_; char *cur_; char *scratch_; } buf_; unsigned int num_field_loc; unsigned short max_voffset_; BOOL nested; BOOL finished; unsigned long long minalign_; BOOL force_defaults_; BOOL dedup_vtables_; void *string_pool; } _builder;
}

@property (nonatomic) unsigned long long postVertexDumpBufferIndex;
@property (nonatomic) BOOL forceSoftwareVertexFetch;

- (unsigned long long)maxVertexAmplificationCount;
- (void)setPipelineLibrary:(id)a0;
- (void)setMaxFragmentCallStackDepth:(unsigned long long)a0;
- (BOOL)supportAddingVertexBinaryFunctions;
- (void)validateWithDevice:(id)a0;
- (unsigned long long)maxVertexCallStackDepth;
- (void)setFragmentPreloadedLibraries:(id)a0;
- (id)fragmentPreloadedLibraries;
- (void)setSupportAddingFragmentBinaryFunctions:(BOOL)a0;
- (id)vertexPreloadedLibraries;
- (unsigned long long)maxTessellationFactor;
- (void)setPluginData:(id)a0;
- (long long)textureWriteRoundingMode;
- (BOOL)supportAddingFragmentBinaryFunctions;
- (unsigned long long)maxFragmentCallStackDepth;
- (id)insertObjectLibraries;
- (unsigned long long)sampleCount;
- (BOOL)isTwoSideEnabled;
- (void)setTessellationOutputWindingOrder:(unsigned long long)a0;
- (void)setAlphaTestEnabled:(BOOL)a0;
- (id)init;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (id)objectFunction;
- (void)setVertexAmplificationMode:(unsigned long long)a0;
- (const struct MTLRenderPipelineDescriptorPrivate { id x0; unsigned long long x1[8]; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; BOOL x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; BOOL x12; long long x13; union { unsigned long long x0; unsigned long long x1; } x14; unsigned long long x15; union { unsigned int x0; float x1; } x16; unsigned long long x17; unsigned long long x18; union { unsigned int x0[2]; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 2; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 8; unsigned char x15 : 3; unsigned char x16 : 1; unsigned char x17 : 4; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; } x1; } x19; unsigned int x20; unsigned int x21; unsigned long long x22; id x23; id x24; id x25; id x26; id x27; id x28; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x29; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x30; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x31; unsigned long long x32; id x33; id x34; unsigned long long x35; unsigned long long x36; id x37; id x38; id x39; id x40; id x41; void *x42; void *x43; id x44; BOOL x45; unsigned int x46; id x47; id x48; id x49; id x50; id x51; id x52; id x53; id x54; id x55; unsigned long long x56; unsigned long long x57; BOOL x58; BOOL x59; unsigned long long x60; unsigned long long x61; BOOL x62; BOOL x63; id x64; unsigned int x65; } *)_descriptorPrivate;
- (unsigned long long)sampleMask;
- (id)newSerializedObjectDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)setTessellationControlPointIndexType:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })meshThreadsPerThreadgroup;
- (void)setInsertVertexLibraries:(id)a0;
- (BOOL)isDepthStencilWriteDisabled;
- (unsigned long long)resourceIndex;
- (void)setSampleCount:(unsigned long long)a0;
- (void)setBinaryArchives:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })maxPipelineChildren;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)a0;
- (void)setMaxVertexCallStackDepth:(unsigned long long)a0;
- (void)setVertexPreloadedLibraries:(id)a0;
- (void)setMeshThreadgroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)a0;
- (id)newSerializedFragmentDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)fragmentLinkedFunctions;
- (id)colorAttachments;
- (id)meshLinkedFunctions;
- (id)insertFragmentLibraries;
- (unsigned long long)maxTotalThreadsPerMeshThreadgroup;
- (id)objectBuffers;
- (void)setMeshLinkedFunctions:(id)a0;
- (BOOL)isAlphaTestEnabled;
- (void)setGpuCompilerSPIOptions:(id)a0;
- (void)setLabel:(id)a0;
- (unsigned long long)rasterSampleCount;
- (void)setSampleCoverage:(float)a0;
- (id)gpuCompilerSPIOptions;
- (id)vertexBuffers;
- (id)vertexFunction;
- (unsigned long long)vertexAmplificationMode;
- (unsigned long long)depthAttachmentPixelFormat;
- (BOOL)isLogicOperationEnabled;
- (unsigned int)vertexDepthCompareClampMask;
- (void)setDepthStencilWriteDisabled:(BOOL)a0;
- (void)setRasterizationEnabled:(BOOL)a0;
- (unsigned char)clipDistanceEnableMask;
- (const void *)getPipelineScript;
- (void)setVertexFunction:(id)a0;
- (unsigned long long)alphaTestFunction;
- (unsigned long long)pipelineMemoryLength;
- (void)setMeshFunction:(id)a0;
- (void)setMaxTotalThreadsPerMeshThreadgroup:(unsigned long long)a0;
- (void)setMeshThreadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (void)setMaxMeshCallStackDepth:(unsigned long long)a0;
- (void)setLogicOperationEnabled:(BOOL)a0;
- (unsigned int)explicitVisibilityGroupID;
- (unsigned long long)hash;
- (BOOL)supportAddingMeshBinaryFunctions;
- (BOOL)forceResourceIndex;
- (void)setObjectFunction:(id)a0;
- (void)setObjectLinkedFunctions:(id)a0;
- (void)setSampleCoverageInvert:(BOOL)a0;
- (void)attachVertexDescriptor:(id)a0;
- (void)setInputPrimitiveTopology:(unsigned long long)a0;
- (void)setPointSmoothEnabled:(BOOL)a0;
- (BOOL)isTessellationFactorScaleEnabled;
- (void)setColorSampleCount:(unsigned long long)a0;
- (void)setVertexDepthCompareClampMask:(unsigned int)a0;
- (void)setExplicitVisibilityGroupID:(unsigned int)a0;
- (void)setSupportAddingObjectBinaryFunctions:(BOOL)a0;
- (id)insertMeshLibraries;
- (BOOL)openGLModeEnabled;
- (void)setForceResourceIndex:(BOOL)a0;
- (void)setTessellationFactorFormat:(unsigned long long)a0;
- (void)setPointCoordLowerLeft:(BOOL)a0;
- (void)setTessellationFactorStepFunction:(unsigned long long)a0;
- (unsigned long long)tessellationOutputWindingOrder;
- (id)vertexLinkedFunctions;
- (void)setSupportAddingMeshBinaryFunctions:(BOOL)a0;
- (void)setSupportIndirectCommandBuffers:(BOOL)a0;
- (void)setMaxTessellationFactor:(unsigned long long)a0;
- (id)vertexDescriptor;
- (id)serializeFragmentData;
- (void)setAlphaToCoverageEnabled:(BOOL)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)meshPreloadedLibraries;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })objectThreadsPerThreadgroup;
- (void)setDriverCompilerOptions:(id)a0;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (unsigned long long)tessellationPartitionMode;
- (unsigned long long)maxObjectCallStackDepth;
- (BOOL)isAlphaToOneEnabled;
- (BOOL)isEqual:(id)a0;
- (void)setTessellationFactorScaleEnabled:(BOOL)a0;
- (void)setInsertMeshLibraries:(id)a0;
- (id)description;
- (void)setOpenGLModeEnabled:(BOOL)a0;
- (id)binaryArchives;
- (void)setInsertFragmentLibraries:(id)a0;
- (BOOL)isPointSmoothEnabled;
- (unsigned int)fragmentDepthCompareClampMask;
- (id)objectLinkedFunctions;
- (void)setTwoSideEnabled:(BOOL)a0;
- (BOOL)supportAddingObjectBinaryFunctions;
- (void)setObjectThreadgroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)a0;
- (void)setSupportAddingVertexBinaryFunctions:(BOOL)a0;
- (void)setNeedsCustomBorderColorSamplers:(BOOL)a0;
- (void)setMeshPreloadedLibraries:(id)a0;
- (void)setVertexDescriptor:(id)a0;
- (void)setProfileControl:(id)a0;
- (void)setSampleMask:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)sampleCoverageInvert;
- (unsigned long long)maxMeshCallStackDepth;
- (void)setPointSizeOutputVS:(BOOL)a0;
- (BOOL)isPointCoordLowerLeft;
- (void)setFragmentDepthCompareClampMask:(unsigned int)a0;
- (id)label;
- (void)setLogicOperation:(unsigned long long)a0;
- (unsigned long long)colorSampleCount;
- (void)setAlphaTestFunction:(unsigned long long)a0;
- (id)pluginData;
- (void)setResourceIndex:(unsigned long long)a0;
- (id)fragmentBuffers;
- (id)objectPreloadedLibraries;
- (void)setClipDistanceEnableMask:(unsigned char)a0;
- (void)setAlphaToOneEnabled:(BOOL)a0;
- (void)setPipelineMemoryLength:(unsigned long long)a0;
- (float)sampleCoverage;
- (id)meshBuffers;
- (void)dealloc;
- (unsigned long long)tessellationFactorStepFunction;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)a0;
- (unsigned long long)tessellationControlPointIndexType;
- (void)setInsertObjectLibraries:(id)a0;
- (unsigned long long)inputPrimitiveTopology;
- (BOOL)isAlphaToCoverageEnabled;
- (id)newSerializedMeshDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)objectThreadgroupSizeIsMultipleOfThreadExecutionWidth;
- (void)setMaxPipelineChildren:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (unsigned long long)logicOperation;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)isRasterizationEnabled;
- (void)setObjectPreloadedLibraries:(id)a0;
- (void)reset;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isPointSizeOutputVS;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)stencilAttachmentPixelFormat;
- (BOOL)needsCustomBorderColorSamplers;
- (void)setFragmentLinkedFunctions:(id)a0;
- (id)insertVertexLibraries;
- (void)setMaxVertexAmplificationCount:(unsigned long long)a0;
- (unsigned long long)maxTotalThreadsPerObjectThreadgroup;
- (void)setVertexLinkedFunctions:(id)a0;
- (id)fragmentFunction;
- (void)setFragmentFunction:(id)a0;
- (id)pipelineLibrary;
- (id)meshFunction;
- (void)setMaxTotalThreadsPerObjectThreadgroup:(unsigned long long)a0;
- (id)profileControl;
- (id)driverCompilerOptions;
- (BOOL)meshThreadgroupSizeIsMultipleOfThreadExecutionWidth;
- (unsigned long long)tessellationFactorFormat;
- (void)setMaxObjectCallStackDepth:(unsigned long long)a0;
- (void)setTessellationPartitionMode:(unsigned long long)a0;
- (BOOL)supportIndirectCommandBuffers;
- (void)setObjectThreadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end