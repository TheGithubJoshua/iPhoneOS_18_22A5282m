@protocol MTLBuffer;

@interface MTLDebugArgumentEncoder : MTLToolsArgumentEncoder {
    id<MTLBuffer> _currentBuffer;
    unsigned long long _currentOffset;
    void *_reflectionParser;
}

- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)dealloc;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setArgumentBuffer:(id)a0 offset:(unsigned long long)a1;
- (void)setRenderPipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void *)constantDataAtIndex:(unsigned long long)a0;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)a0;
- (void)setAccelerationStructure:(id)a0 atIndex:(unsigned long long)a1;
- (void)setArgumentBuffer:(id)a0 startOffset:(unsigned long long)a1 arrayElement:(unsigned long long)a2;
- (void)setComputePipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIndirectCommandBuffer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIndirectCommandBuffers:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIntersectionFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIntersectionFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setRenderPipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithBaseObject:(id)a0 structType:(id)a1 parent:(id)a2;
- (void)setArgumentBuffer:(id)a0 startOffset:(unsigned long long)a1 elementIndex:(unsigned long long)a2;

@end
