@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor {
    struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned char mutability : 2; } ; struct { unsigned long long bits; } ; } ; } _private;
}

- (BOOL)isDefault;
- (id)init;
- (const struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned char x0 : 2; } x0; struct { unsigned long long x0; } x1; } x0; } *)_descriptorPrivate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setMutability:(unsigned long long)a0;
- (unsigned long long)mutability;

@end
