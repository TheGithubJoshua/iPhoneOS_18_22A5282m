@protocol MTLCounterSampleBuffer;

@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal : MTLRenderPassSampleBufferAttachmentDescriptor {
    struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfVertexSampleIndex; unsigned long long endOfVertexSampleIndex; unsigned long long startOfFragmentSampleIndex; unsigned long long endOfFragmentSampleIndex; } _private;
}

- (id)init;
- (const struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)_descriptorPrivate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)sampleBuffer;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setEndOfFragmentSampleIndex:(unsigned long long)a0;
- (void)setEndOfVertexSampleIndex:(unsigned long long)a0;
- (void)setSampleBuffer:(id)a0;
- (void)setStartOfFragmentSampleIndex:(unsigned long long)a0;
- (void)setStartOfVertexSampleIndex:(unsigned long long)a0;
- (unsigned long long)endOfFragmentSampleIndex;
- (unsigned long long)endOfVertexSampleIndex;
- (unsigned long long)startOfFragmentSampleIndex;
- (unsigned long long)startOfVertexSampleIndex;

@end
