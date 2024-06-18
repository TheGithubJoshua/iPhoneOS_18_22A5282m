@class NSMutableArray, TSWPTextMeasurerBundle;

@interface TSTFontInfoCacheEntry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock[8];
    struct unordered_map<TSTFontInfoCacheDupContentEntry, double, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::allocator<std::pair<const TSTFontInfoCacheDupContentEntry, double>>> { struct __hash_table<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>, std::allocator<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>> { float __value_; } __p3_; } __table_; } _dupContentEntryToHeightCache[8];
    struct unordered_map<TSTFontInfoCacheDupContentEntry, double, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::allocator<std::pair<const TSTFontInfoCacheDupContentEntry, double>>> { struct __hash_table<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>, std::allocator<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>> { float __value_; } __p3_; } __table_; } _dupContentEntryToWidthCache[8];
    NSMutableArray *_strongReferences[8];
}

@property (retain, nonatomic) TSWPTextMeasurerBundle *textMeasurerBundle;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)widthForString:(id)a0;
- (double)heightForString:(id)a0 width:(double)a1 outFitWidth:(inout double *)a2;
- (id)initWithTextMeasurerBundle:(id)a0;

@end