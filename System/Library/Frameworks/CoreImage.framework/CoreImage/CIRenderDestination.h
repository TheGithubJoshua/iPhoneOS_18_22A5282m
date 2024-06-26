@class CIBlendKernel;

@interface CIRenderDestination : NSObject {
    void *_priv;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property unsigned long long alphaMode;
@property (getter=isFlipped) BOOL flipped;
@property (getter=isDithered) BOOL dithered;
@property (getter=isClamped) BOOL clamped;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (retain, nonatomic) CIBlendKernel *blendKernel;
@property BOOL blendsInDestinationColorSpace;

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 format:(int)a4;

- (struct CIRenderDestinationInternal { struct RenderDestination *x0; unsigned long long x1; unsigned long long x2; int x3; int x4; struct { double x0[3]; double x1[3]; double x2[3]; double x3; double x4; } x5; unsigned long long x6; BOOL x7; BOOL x8; int x9; BOOL x10; BOOL x11; BOOL x12; id x13; } *)_internalRepresentation;
- (id)initWithIOSurface:(id)a0;
- (id)initWithBitmapData:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 format:(int)a4;
- (id)initWithGLTexture:(unsigned int)a0 target:(unsigned int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)init;
- (BOOL)isCompressed;
- (int)format;
- (id)initWithMTLTexture:(id)a0 commandBuffer:(id)a1;
- (void)setLabel:(id)a0;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 commandBuffer:(id)a3 mtlTextureProvider:(id /* block */)a4;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 colorSpace:(struct CGColorSpace { } *)a3 pixelBufferProvider:(id /* block */)a4;
- (id)surface;
- (void *)_internalRenderDestination;
- (id)_initWithInternalRenderDestination:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(int)a3 colorspace:(struct CGColorSpace { } *)a4;
- (int)ditherDepth;
- (id)description;
- (id)debugDescription;
- (void *)_render:(void *)a0 withContext:(void *)a1;
- (id)label;
- (void)setCompressed:(BOOL)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)dealloc;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 colorSpace:(struct CGColorSpace { } *)a3 surfaceProvider:(id /* block */)a4;
- (id)imageRepresentation;
- (void)_set_YCC_matrix:(int)a0 fullRange:(BOOL)a1 deep:(BOOL)a2 isFloat:(float)a3;

@end
