@class NSMutableArray, MTLDebugResource, MTLDebugDevice;

@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable> {
    unsigned long long _length;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}

@property (readonly, nonatomic) MTLDebugResource *common;
@property (readonly, nonatomic) const void *pointer;
@property (nonatomic) BOOL isContentExposedToCPU;

- (unsigned long long)resourceIndex;
- (void *)contents;
- (unsigned long long)gpuAddress;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAllDebugMarkers;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (id)description;
- (void)dealloc;
- (void)makeAliasable;
- (unsigned long long)length;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (unsigned long long)parentGPUAddress;
- (unsigned long long)parentGPUSize;
- (void)setParentGPUAddress:(unsigned long long)a0;
- (void)setParentGPUSize:(unsigned long long)a0;
- (BOOL)purgeableStateValidForRendering;
- (id)copyDebugMarkers;
- (id)initWithBuffer:(id)a0 device:(id)a1 bytes:(const void *)a2 options:(unsigned long long)a3;
- (id)initWithBuffer:(id)a0 device:(id)a1 options:(unsigned long long)a2;
- (id)initWithBuffer:(id)a0 heap:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;

@end
