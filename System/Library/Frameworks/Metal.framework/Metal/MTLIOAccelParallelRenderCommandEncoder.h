@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (unsigned long long)getType;
- (void)setLabel:(id)a0;
- (BOOL)isMemorylessRender;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
