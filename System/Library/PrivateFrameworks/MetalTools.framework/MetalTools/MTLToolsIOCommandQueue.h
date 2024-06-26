@class NSString;
@protocol MTLDevice;

@interface MTLToolsIOCommandQueue : MTLToolsObject <MTLIOCommandQueueSPI>

@property (readonly, nonatomic) unsigned long long globalTraceObjectID;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)barrier;
- (id)commandBuffer;
- (void)dealloc;
- (id)commandBufferWithUnretainedReferences;
- (void)enqueueBarrier;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;

@end
