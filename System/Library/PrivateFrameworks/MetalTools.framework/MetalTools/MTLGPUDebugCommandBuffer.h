@class __end_, MTLGPUDebugDevice, __end_cap_;
@protocol MTLBuffer, MTLArgumentEncoder;

@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder> {
    BOOL _initialized;
    struct Options { unsigned int x0; int x1; int x2; int x3; int x4; unsigned int x5; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; } x6; } *_options;
    id<MTLArgumentEncoder> _stageArgumentEncoder;
    id<MTLBuffer> _vertexComputeReportBuffer;
    unsigned long long _vertexComputeReportOffset;
    id<MTLBuffer> _fragmentReportBuffer;
    unsigned long long _fragmentReportOffset;
    struct vector<MetalBuffer, std::allocator<MetalBuffer>> { struct MetalBuffer *__begin_; struct MetalBuffer *__end_; struct __compressed_pair<MetalBuffer *, std::allocator<MetalBuffer>> { struct MetalBuffer *__value_; } __end_cap_; } _usedBuffers;
    struct MetalBuffer { struct MetalBufferHeap *heap; unsigned int index; } _currentPooledBuffer;
    unsigned long long _currentPooledBufferOffset;
    unsigned int _currentEncoderID;
    unsigned int _currentReportID;
    struct vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<id<MTLBuffer> *, std::allocator<id<MTLBuffer>>> { id *__value_; } x1; } _reportBufferList;
    struct vector<ReportBufferEntry, std::allocator<ReportBufferEntry>> { struct ReportBufferEntry *__begin_; struct ReportBufferEntry *__end_; struct __compressed_pair<ReportBufferEntry *, std::allocator<ReportBufferEntry>> { struct ReportBufferEntry *__value_; } __end_cap_; } _reportEntryList;
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSString **, std::allocator<NSString *>> { id *__value_; } x1; } _encoderLabels;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _allocationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tempBufLock;
    BOOL _supportsTileStage;
    BOOL _supportsMeshStage;
    BOOL _hasDeferredBindingObjectAndMeshReportBuffers;
    struct BufferUsageTable { id<MTLBuffer> _backingMemory; } _bufferUsageTables[2];
    struct TextureUsageTable { id<MTLBuffer> _backingMemory; } _textureUsageTables[2];
    struct HeapUsageTable { struct vector<std::pair<MTLGPUDebugHeap *, unsigned long>, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<MTLGPUDebugHeap *, unsigned long> *, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>> { void *__value_; } __end_cap_; } _heapStages; } _heapUsageTable;
}

@property (readonly) MTLGPUDebugDevice *device;

- (id)accelerationStructureCommandEncoder;
- (id)computeCommandEncoderWithDescriptor:(id)a0;
- (id)accelerationStructureCommandEncoderWithDescriptor:(id)a0;
- (id)blitCommandEncoderWithDescriptor:(id)a0;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)blitCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)a0;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (void)beginUseOfMeshShadersInEncoder:(id)a0;
- (struct ReportBufferEntry { unsigned long long x0; id x1; unsigned long long x2; })_allocReportEntryStorageForType:(unsigned long long)a0;
- (void)_checkReportBuffers;
- (void)_encodeReportBuffer:(id)a0 type:(unsigned long long)a1;
- (void)_encodeResourceTableBuffers:(id)a0 type:(unsigned long long)a1;
- (void)_lateInit;
- (id)_newReportBuffer;
- (struct pair<id<MTLBuffer>, unsigned long> { id x0; unsigned long long x1; })_temporaryBufferWithLength:(unsigned long long)a0;
- (void)beginingEncoder:(id)a0 type:(unsigned long long)a1;
- (id)encodeBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 resultOffset:(unsigned long long *)a3;
- (id)encoderIdentifierForEncoderIndex:(unsigned int)a0;
- (void)endingEncoder:(id)a0 type:(unsigned long long)a1;
- (id)initWithCommandBuffer:(id)a0 commandQueue:(id)a1 descriptor:(id)a2;
- (void)markAccelerationStructure:(id)a0 usage:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)markBuffer:(id)a0 usage:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)markHeap:(id)a0 stages:(unsigned long long)a1;
- (void)markTexture:(id)a0 usage:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)preCommit;
- (void)preCompletionHandlers;
- (int)resourceUsageForBuffer:(id)a0 stage:(unsigned long long)a1;
- (int)resourceUsageForTexture:(id)a0 stage:(unsigned long long)a1;
- (id)temporaryBufferWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)temporaryBufferWithLength:(unsigned long long)a0;

@end
