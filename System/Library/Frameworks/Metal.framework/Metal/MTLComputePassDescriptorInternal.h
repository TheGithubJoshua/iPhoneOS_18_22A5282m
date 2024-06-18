@class MTLComputePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {
    struct MTLComputePassDescriptorPrivate { unsigned long long dispatchType; MTLComputePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; unsigned int substreamCount; BOOL allowCommandEncoderCoalescing; } _private;
}

@property (nonatomic) unsigned int substreamCount;
@property (nonatomic) BOOL allowCommandEncoderCoalescing;

+ (id)computePassDescriptor;

- (id)init;
- (const struct MTLComputePassDescriptorPrivate { unsigned long long x0; id x1; unsigned int x2; BOOL x3; } *)_descriptorPrivate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)sampleBufferAttachments;
- (unsigned long long)dispatchType;
- (void)setDispatchType:(unsigned long long)a0;

@end
