@class NSString;

@interface PVCGImageBufferImpl : NSObject <PVImageBufferImpl> {
    struct CGImage { } *_image;
    struct CGImage { } *_gainMap;
    struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *m_Obj; } _generatedPixelBuffer;
    struct HGRef<HGBitmap> { struct HGBitmap *m_Obj; } _generatedBitmap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGImage { } *)cgImage;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)canCreateHGBitmap;
- (BOOL)cvPixelBufferRequiresCopy;
- (BOOL)cvPixelBufferRequiresRender;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })cvPixelBufferWithColorSpace:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 withGainMap:(struct CGImage { } *)a1;

@end
