@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor {
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (void)setFormat:(unsigned long long)a0;
- (unsigned long long)format;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)bufferIndex;

@end
