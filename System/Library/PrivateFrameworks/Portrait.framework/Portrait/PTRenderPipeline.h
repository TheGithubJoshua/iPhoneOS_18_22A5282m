@class NSString, PTRenderPipelineDescriptor;
@protocol MTLDeviceSPI;

@interface PTRenderPipeline : NSObject {
    PTRenderPipelineDescriptor *_descriptor;
    id<MTLDeviceSPI> _device;
    unsigned long long _activeVersion;
    NSString *_description;
}

@property (readonly) unsigned long long activeVersion;

+ (unsigned long long)latestVersion;
+ (int)prewarmForMediaserverd;
+ (int)prewarmWithDescriptor:(id)a0;
+ (BOOL)isMetalDeviceSupported:(id)a0;
+ (BOOL)isRenderVersionSupported:(unsigned long long)a0;

- (void)prewarm;
- (void)setResourceHeap:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (unsigned long long)minimumResourceHeapSize;
- (int)encodeRenderTo:(id)a0 withRenderRequest:(id)a1;
- (void).cxx_destruct;
- (void)setActiveVersion:(unsigned long long)a0;
- (id)description;
- (id)createRenderStateWithQuality:(int)a0;

@end
