@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)a0;
- (void)endEncoding;

@end
