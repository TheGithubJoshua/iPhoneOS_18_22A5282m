@class NSArray, NSDictionary, NSData;
@protocol MTLBinding;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {
    struct { unsigned char fragmentUsesDiscard : 1; unsigned char fragmentWritesSampleMask : 1; unsigned char fragmentWritesDepth : 1; unsigned char vertexRegisterSpill : 1; unsigned char fragmentRegisterSpill : 1; unsigned char fragmentReadsFramebufferValues : 1; unsigned char fragmentPunchThrough : 1; unsigned char vertexWritesPointSize : 1; unsigned char private2 : 1; unsigned long reserved : 55; } _flags;
    NSArray *_vertexBuiltInArguments;
    unsigned long long _postVertexDumpStride;
    NSArray *_postVertexDumpOutputs;
    NSArray *_inferredInputs;
    NSArray *_vertexArguments;
    NSArray *_fragmentArguments;
    NSArray *_tileArguments;
    NSArray *_tileBuiltInArguments;
    id<MTLBinding> _imageBlockDataReturn;
    NSDictionary *_performanceStatistics;
    unsigned int _traceBufferIndex;
    NSData *_vertexPluginReturnData;
    NSData *_fragmentPluginReturnData;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
    NSArray *_objectArguments;
    NSArray *_meshArguments;
    NSArray *_objectBuiltInArguments;
    NSArray *_meshBuiltInArguments;
    NSData *_objectPluginReturnData;
    NSData *_meshPluginReturnData;
    NSArray *_vertexBindings;
    NSArray *_fragmentBindings;
    NSArray *_tileBindings;
    NSArray *_objectBindings;
    NSArray *_meshBindings;
    unsigned long long _printStyle;
}

- (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned long x9 : 55; })usageFlags;
- (id)description;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)performanceStatistics;
- (id)fragmentBindings;
- (id)vertexBindings;
- (id)objectArguments;
- (id)vertexArguments;
- (id)constantSamplerDescriptors;
- (id)constantSamplerUniqueIdentifiers;
- (id)fragmentArguments;
- (id)fragmentPluginReturnData;
- (id)imageBlockDataReturn;
- (id)inferredInputs;
- (id)initWithObjectData:(id)a0 meshData:(id)a1 fragmentData:(id)a2 device:(id)a3 options:(unsigned long long)a4 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned long x9 : 55; })a5;
- (id)initWithTileData:(id)a0 functionType:(unsigned long long)a1 device:(id)a2 options:(unsigned long long)a3 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned long x9 : 55; })a4;
- (id)initWithVertexData:(id)a0 fragmentData:(id)a1 serializedVertexDescriptor:(id)a2 device:(id)a3 options:(unsigned long long)a4 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned long x9 : 55; })a5;
- (id)meshArguments;
- (id)meshBindings;
- (id)meshBuiltInArguments;
- (id)meshPluginReturnData;
- (id)objectBindings;
- (id)objectBuiltInArguments;
- (id)objectPluginReturnData;
- (id)postVertexDumpOutputs;
- (unsigned long long)postVertexDumpStride;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setConstantSamplerUniqueIdentifiers:(id)a0;
- (void)setPerformanceStatistics:(id)a0;
- (id)tileArguments;
- (id)tileBindings;
- (unsigned int)traceBufferIndex;
- (id)vertexBuiltInArguments;
- (id)vertexPluginReturnData;

@end