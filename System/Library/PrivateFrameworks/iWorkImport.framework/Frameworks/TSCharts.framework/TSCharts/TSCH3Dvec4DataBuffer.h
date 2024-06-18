@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer {
    struct vector<glm::detail::tvec4<float>, std::allocator<glm::detail::tvec4<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec4<float> *, std::allocator<glm::detail::tvec4<float>>> { void *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (const void *)data;
- (unsigned long long)components;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)clear;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
