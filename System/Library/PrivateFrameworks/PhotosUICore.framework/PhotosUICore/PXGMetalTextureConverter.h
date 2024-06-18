@class NSString, PXGMetalRenderContext, PXGColorProgramLibrary, CIContext, PXGMetalTextureCache, NSObject, NSMutableSet, PXGImageTexture;
@protocol OS_dispatch_queue, PXGMetalTextureConverterDelegate;

@interface PXGMetalTextureConverter : NSObject <PXGTextureConverter> {
    long long _screenPixelCount;
    NSMutableSet *_failedPixelFormats;
}

@property (readonly, nonatomic) BOOL hasExtendedColorTarget;
@property (readonly, nonatomic) struct CGColorSpace { } *destinationColorSpace;
@property (readonly, nonatomic) PXGColorProgramLibrary *colorProgramLibrary;
@property (readonly, nonatomic) struct __CVMetalTextureCache { } *videoTextureCache;
@property (readonly, nonatomic) PXGMetalTextureCache *renderTextureCache;
@property (readonly, nonatomic) CIContext *renderContext;
@property (readonly, nonatomic) PXGMetalRenderContext *metalRenderContext;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (readonly, nonatomic) unsigned long long destinationColorSpaceName;
@property (weak, nonatomic) id<PXGMetalTextureConverterDelegate> delegate;
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) unsigned long long supportedContentTypes;
@property (nonatomic) BOOL lowMemoryMode;
@property (readonly, nonatomic) PXGImageTexture *transparentTexture;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTextureAtlasManagerForImageDataSpec:(struct { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; })a0;
- (id)init;
- (id)applyAdjustment:(id)a0 toTexture:(id)a1 options:(struct { unsigned int x0; BOOL x1; })a2;
- (id)createTextureFromCVPixelBuffer:(SEL)a0 transform:(struct __CVBuffer { } *)a1 options:(struct { unsigned int x0; BOOL x1; })a2 error:(id *)a3;
- (id)createPayloadTextureFromPayload:(id)a0;
- (id)_createTextureFromCIImage:(id)a0 source:(id)a1 options:(struct { unsigned int x0; BOOL x1; })a2;
- (id)createTextureFromCGImage:(SEL)a0 transform:(struct CGImage { } *)a1 options:(struct { unsigned int x0; BOOL x1; })a2;
- (id)createAtlasForTextureAtlasManager:(id)a0;
- (id)_generateMipmapsForMetalTexture:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 destinationColorspaceName:(unsigned long long)a1 layoutQueue:(id)a2;
- (id)_createTransparentTexture;
- (void)dealloc;
- (id)_applyAdjustment:(id)a0 toMetalTexture:(id)a1 options:(struct { unsigned int x0; BOOL x1; })a2;

@end