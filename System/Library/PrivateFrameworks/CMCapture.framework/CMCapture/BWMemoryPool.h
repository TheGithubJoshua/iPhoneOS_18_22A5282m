@class NSObject, IOSurfaceMemoryPool;
@protocol OS_dispatch_queue;

@interface BWMemoryPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    IOSurfaceMemoryPool *_pool;
    unsigned int _flushAssertionCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flushAssertionLock;
}

@property (class, readonly, nonatomic) BWMemoryPool *sharedMemoryPool;

@property (readonly, nonatomic) unsigned long long poolIdentifier;

+ (void)initialize;

- (void)disable;
- (id)init;
- (void)_addFlushAssertion;
- (id)newFlushAssertion:(id)a0;
- (void)enableForPixelBufferAttributes:(id)a0;
- (void)flush;
- (void)_removeFlushAssertion;
- (int)enableForCaptureStream:(id)a0;
- (int)disableForCaptureDevice:(id)a0;
- (BOOL)getInUseFootprint:(unsigned long long *)a0 andOutOfUseFootprint:(unsigned long long *)a1;
- (void)disableWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)newMTLBufferWithLength:(unsigned long long)a0 forDevice:(id)a1;
- (int)disableForCaptureStream:(id)a0;
- (int)enableForCaptureDevice:(id)a0;
- (void)ensureMemoryAsyncWithSize:(unsigned long long)a0;

@end
