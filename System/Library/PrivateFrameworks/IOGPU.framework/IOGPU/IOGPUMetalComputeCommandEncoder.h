@interface IOGPUMetalComputeCommandEncoder : IOGPUMetalCommandEncoder

- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)getType;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)updateFence:(id)a0;
- (id)getComputePipelineState;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void *)getBufferContentsAtIndex:(unsigned long long)a0;
- (void)setFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)useHeap:(id)a0;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)waitForFence:(id)a0;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (void)setFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;

@end
