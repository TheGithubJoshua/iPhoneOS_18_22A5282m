@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int _deadlineAwareState;
}

- (id)commandBufferWithDescriptor:(id)a0;
- (void)insertDebugCaptureBoundary;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (void)validateDeadlineAwareness:(id)a0;

@end
