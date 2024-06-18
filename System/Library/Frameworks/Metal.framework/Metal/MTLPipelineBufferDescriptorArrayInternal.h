@class MTLPipelineBufferDescriptorInternal;

@interface MTLPipelineBufferDescriptorArrayInternal : MTLPipelineBufferDescriptorArray {
    MTLPipelineBufferDescriptorInternal *_descriptors[31];
}

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)_descriptorAtIndex:(unsigned long long)a0;

@end
