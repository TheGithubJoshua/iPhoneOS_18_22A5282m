@class NSString, NSObject, CIContext;
@protocol OS_dispatch_queue, MTLCommandQueue;

@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {
    int _portraitRenderQuality;
    float _inputRenderQuality;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<MTLCommandQueue> _metalCommandQueue;
}

@property (readonly, nonatomic) BOOL usingDepth;
@property (retain, nonatomic) CIContext *renderingQueueContext;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)prewarmPortraitFilterVersion:(unsigned int)a0 semanticStyleFilters:(BOOL)a1;
+ (id)context:(BOOL)a0 err:(int *)a1;

- (id)init;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (id)initForRenderingWithDepth:(BOOL)a0 context:(id)a1 portraitRenderQuality:(int)a2 metalCommandQueue:(id)a3;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;
- (void)dealloc;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
