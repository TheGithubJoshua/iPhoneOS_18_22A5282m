@class NSLock, NSHashTable, CIContext;
@protocol MTLDevice;

@interface VNImageBufferManager : NSObject {
    CIContext *mainCIContext;
    id<MTLDevice> mainCIContextMetalDevice;
    CIContext *lowPriorityCIContext;
    id<MTLDevice> lowPriorityCIContextMetalDevice;
    NSLock *ciContextLock;
    NSHashTable *activeImageBuffers;
    NSLock *bufferTableLock;
}

+ (id)manager;

- (id)init;
- (id)sharedCIContextWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)purgeAllCaches;
- (void)dealloc;

@end
