@interface TSCERegionAllocator : NSObject {
    struct TSCERegionNode { unsigned long long x0; struct TSCERegionNode *x1; void *x2; } *_head;
    struct TSCERegionNode { unsigned long long x0; struct TSCERegionNode *x1; void *x2; } *_curBlock;
    unsigned int _blockOffset;
    struct vector<TSCEASTNodeArray *, std::allocator<TSCEASTNodeArray *>> { struct TSCEASTNodeArray **__begin_; struct TSCEASTNodeArray **__end_; struct __compressed_pair<TSCEASTNodeArray **, std::allocator<TSCEASTNodeArray *>> { struct TSCEASTNodeArray **__value_; } __end_cap_; } _managedNodeArrays;
}

- (id)initWithInitialCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void *)malloc:(unsigned long long)a0;
- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)managedNodeArrayWithCapacity:(unsigned long long)a0;

@end
