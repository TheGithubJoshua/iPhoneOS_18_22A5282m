@class NSObject, PXGMetalRenderContext, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXGMetalTextureCache : NSObject {
    NSMutableArray *_entries;
    unsigned long long _capacity;
    double _ageLimit;
    unsigned long long _sizeLimit;
    unsigned long long _peakCount;
    unsigned long long _peakMemory;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) PXGMetalRenderContext *metalRenderContext;
@property unsigned long long capacity;
@property double ageLimit;
@property unsigned long long sizeLimit;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long peakTextureCount;
@property (readonly) unsigned long long peakMemorySize;

- (id)init;
- (id)initWithContext:(id)a0;
- (id)_description;
- (void).cxx_destruct;
- (id)description;
- (void)recycleTexture:(id)a0;
- (void)_enforceLimits;
- (void)_purgeOldestTexture;
- (id)textureWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1;

@end
