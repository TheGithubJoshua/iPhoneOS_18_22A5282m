@class NSString, MTLStencilDescriptorInternal;

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { MTLStencilDescriptorInternal *frontFaceStencil; MTLStencilDescriptorInternal *backFaceStencil; unsigned long long depthCompareFunction; BOOL depthWriteEnabled; NSString *label; } _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; BOOL x3; id x4; } *depthStencilPrivate;

- (id)init;
- (void)setDepthCompareFunction:(unsigned long long)a0;
- (id)frontFaceStencil;
- (void)setLabel:(id)a0;
- (void)setDepthWriteEnabled:(BOOL)a0;
- (unsigned long long)hash;
- (unsigned long long)depthCompareFunction;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDepthWriteEnabled;
- (id)label;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)backFaceStencil;
- (void)setFrontFaceStencil:(id)a0;
- (void)setBackFaceStencil:(id)a0;

@end
