@interface ETBoxcarFilterPointFIFO : ETPointFIFO

@property (nonatomic) struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } prevPoints;
@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;

- (void)flush;
- (void)clear;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1 spacing:(float)a2;
- (void)addPoints:(void *)a0 count:(unsigned long long)a1;

@end
