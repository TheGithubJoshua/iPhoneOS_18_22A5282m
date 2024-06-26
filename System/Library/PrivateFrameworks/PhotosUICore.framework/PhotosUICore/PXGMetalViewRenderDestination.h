@class MTLRenderPassDescriptor, NSString, NSObject, MTKView;
@protocol MTLDevice, PXGMetalRenderDestinationDelegate, MTLTexture, OS_dispatch_queue;

@interface PXGMetalViewRenderDestination : NSObject <MTKViewDelegate, PXGPresentableMetalRenderDestination> {
    unsigned long long _lastSizeChangeTime;
}

@property (readonly, nonatomic) MTKView *metalView;
@property (copy, nonatomic) id /* block */ test_renderSnapshotHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } renderSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } renderBoundsInPoints;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) unsigned long long depthStencilPixelFormat;
@property (weak, nonatomic) id<PXGMetalRenderDestinationDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) id<MTLTexture> renderTexture;
@property (readonly, nonatomic) BOOL canSetColorSpace;
@property (nonatomic) struct CGColorSpace { } *colorspace;
@property (readonly, nonatomic) unsigned long long destinationColorSpaceName;
@property (nonatomic) BOOL lowMemoryMode;

- (void)setNeedsRender;
- (void)present;
- (void)renderImmediately;
- (void)test_configureForRenderSnapshot;
- (void)_setupMetalIfNeeded;
- (id)init;
- (void)releaseCachedResources;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)drawInMTKView:(id)a0;

@end
