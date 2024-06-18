@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue

- (void)barrier;
- (unsigned long long)globalTraceObjectID;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;

@end
