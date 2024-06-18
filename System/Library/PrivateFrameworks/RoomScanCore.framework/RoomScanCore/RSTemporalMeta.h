@class NSMutableArray, NSMutableDictionary;

@interface RSTemporalMeta : NSObject <NSCopying> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _incrementalPoints;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _coveringHullPoints;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _boundaryPoints;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _incrementalPoses;
}

@property (nonatomic) BOOL isUpdate;
@property (retain, nonatomic) NSMutableArray *incrementalIds;
@property (retain, nonatomic) NSMutableDictionary *mappingInterval;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } *incrementalPoses;
@property (readonly, nonatomic) const void *incrementalPoints;
@property (readonly, nonatomic) unsigned long long incrementalPointsCount;
@property (readonly, nonatomic) void *coveringHullPoints;
@property (readonly, nonatomic) unsigned long long coveringHullPointsCount;
@property (readonly, nonatomic) void *boundaryPoints;
@property (readonly, nonatomic) unsigned long long boundaryPointsCount;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)appendIncrementalPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)assignBoundaryPoints:(void *)a0 withSize:(unsigned long long)a1;
- (void)assignCoveringHullPoints:(void *)a0 withSize:(unsigned long long)a1;
- (void)assignIncrementalPoints:(const void *)a0 withSize:(unsigned long long)a1;
- (void)clearIncrementalPoses;
- (BOOL)isEqualToRSTemporalMeta:(id)a0;

@end
