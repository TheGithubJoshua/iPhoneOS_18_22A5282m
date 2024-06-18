@class VNImageSourceManager, VNImageBufferCache, NSDictionary, CIImage, CIContext;

@interface VNImageBuffer : NSObject <VNSequencedRequestSupporting> {
    struct __CVBuffer { } *_origPixelBuffer;
    CIImage *_origCIImage;
    struct opaqueCMSampleBuffer { } *_origSampleBuffer;
    VNImageSourceManager *_imageSourceManager;
    VNImageBufferCache *_pixelBufferRepsCache;
    CIContext *_passedInCIContext;
    int _orientation;
    unsigned long long _origImageWidth;
    unsigned long long _origImageHeight;
    NSDictionary *_options;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } timingInfo;

+ (int)_helpReadOrientationFromOptionsDictionary:(id)a0;
+ (const struct __CFDictionary { } *)ioSurfaceBackedPixelBufferAttributes;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeCenterCropRectFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageSize:(struct CGSize { double x0; double x1; })a1 calculatedScaleX:(double *)a2 calculatedScaleY:(double *)a3;
+ (struct CGColorSpace { } *)copyColorspaceForFormat:(unsigned int)a0 bitmapInfo:(unsigned int *)a1;

- (id)fileURL;
- (id)debugQuickLookObject;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (int)orientation;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (void)purgeCachedRepresentations;
- (id)initWithCIImage:(id)a0 options:(id)a1;
- (BOOL)getPixelFocalLengthIfAvailable:(float *)a0;
- (struct CGImage { } *)originalCGImage;
- (struct __CVBuffer { } *)cachedPixelBufferRepresentationForKey:(id)a0;
- (struct __CVBuffer { } *)originalPixelBuffer;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1;
- (id)initWithURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (struct __CVBuffer { } *)bufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 error:(id *)a4;
- (BOOL)getCameraOpticalCenterIfAvailable:(struct CGPoint { double x0; double x1; } *)a0;
- (id)initWithCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)sequencedRequestPreviousObservationsKey;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)augmentedBuffersWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 augmentationOptions:(id)a4 error:(id *)a5;
- (struct __CVBuffer { } *)createBufferWithMaxSideLengthOf:(unsigned long long)a0 andPixelFormat:(unsigned int)a1 andOptions:(id)a2 error:(id *)a3;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (struct __CVBuffer { } *)cropAndScaleBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(unsigned int)a3 imageCropAndScaleOption:(unsigned long long)a4 options:(id)a5 error:(id *)a6 calculatedNormalizedOriginOffset:(struct CGPoint { double x0; double x1; } *)a7 calculatedScaleX:(double *)a8 calculatedScaleY:(double *)a9 pixelBufferRepsCacheKey:(id *)a10;
- (BOOL)getCameraIntrinsicsAvailable:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0;
- (id)imageProperties;
- (id)initWithCGImage:(struct CGImage { } *)a0 options:(id)a1;
- (id)initWithData:(id)a0 options:(id)a1;
- (void)dealloc;
- (struct __CVBuffer { } *)croppedBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 error:(id *)a5 pixelBufferRepsCacheKey:(id *)a6;
- (struct __CVBuffer { } *)cropAndScaleBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(unsigned int)a3 imageCropAndScaleOption:(unsigned long long)a4 options:(id)a5 error:(id *)a6 calculatedNormalizedOriginOffset:(struct CGPoint { double x0; double x1; } *)a7 calculatedScaleX:(double *)a8 calculatedScaleY:(double *)a9;
- (struct __CVBuffer { } *)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)a0 andCropBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andPixelFormat:(unsigned int)a2 andOptions:(id)a3 error:(id *)a4;
- (struct __CVBuffer { } *)croppedBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 error:(id *)a5;
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 augmentationOptions:(id)a5 error:(id *)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct __CVBuffer { } *)bufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 error:(id *)a4 pixelBufferRepsCacheKey:(id *)a5;

@end
