@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer {
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (int)componentType;
- (const void *)data;
- (void *)mutableData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const void *)a0;
- (void)resizeFillDimension:(const void *)a0;

@end
