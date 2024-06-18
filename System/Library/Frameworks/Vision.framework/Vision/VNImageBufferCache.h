@class NSMutableDictionary;

@interface VNImageBufferCache : NSObject {
    struct __CFDictionary { } *_pixelBufferReps;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pixelBufferRepsLock;
    NSMutableDictionary *_repsCacheKeyToProcessingQueueDictionary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _repsCacheKeyToProcessingQueueDictionaryLock;
}

+ (id)cacheKeyWithBufferFormat:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)cacheKeyWithBufferFormat:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;

- (id)init;
- (void)purgeCacheRepresentationsForOriginalBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (void)cacheBuffer:(struct __CVBuffer { } *)a0 forCacheKey:(id)a1;
- (void)removeCachedBufferWithKey:(id)a0;
- (void)dealloc;
- (struct __CVBuffer { } *)cachedBufferWithKey:(id)a0;

@end
