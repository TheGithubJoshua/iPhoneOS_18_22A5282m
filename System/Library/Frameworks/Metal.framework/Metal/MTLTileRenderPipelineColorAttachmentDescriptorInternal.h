@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor {
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int pixelFormat; } ; struct { unsigned int bits; } ; } ; } _private;
}

- (id)init;
- (void)setPixelFormat:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)pixelFormat;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;

@end
