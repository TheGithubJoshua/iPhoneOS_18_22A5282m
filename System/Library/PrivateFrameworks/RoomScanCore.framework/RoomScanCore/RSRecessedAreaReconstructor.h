@class NSMutableArray;

@interface RSRecessedAreaReconstructor : NSObject {
    NSMutableArray *_current_frame_recessed_area_list;
    NSMutableArray *_recessed_area_pool;
    struct ONLINE_BAY_WINDOW_CONFIG { float major_fov_angle_thres; float major_fov_angle_thres_buffer; float dist_thres; float iou_thres; float angle_thres; float angle_thres_for_small_walls; float small_wall_length_thres; float corner_dist_thres; float overlap_angle_thres; float overlap_dist_thres; float overlap_iou_thres; float acute_angle_thres; float shorten_len_thr; float one_vs_two_shorten_len_thr; int shorten_non_match_thr; float iou_thres_opening; int standalone_opening_thr; float hold_score_thres; float hold_small_wall_length_thres; float opening_checking_range; float opening_checking_thres; float opening_checking_occlusion_range; float min_length_thres; float parallel_angle_epsilon; float dup_dist_thr; float dup_angle_thr; float dup_iou_thr; float curved_wall_early_stop_score_thr; float low_conf_wall_score_thr; int low_conf_wall_non_match_thr; } _onlineBayWindowConfig;
    struct unordered_set<unsigned long, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<unsigned long>> { struct __hash_table<unsigned long, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<unsigned long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long, void *> *>, std::allocator<std::__hash_node<unsigned long, void *>>> { struct __hash_node_base<std::__hash_node<unsigned long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<unsigned long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<unsigned long>> { float __value_; } __p3_; } __table_; } _last_frame_recall_idx;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)runWithFloorPlan:(id)a0 majorViewInfo:(id)a1;
- (void)updateFloorPlan:(id)a0 withRecessedArea:(id)a1;
- (void)updateFloorPlan:(id)a0 withRecessedAreas:(id)a1;
- (struct tuple<NSArray<RS3DSurface *> *, NSArray<RS3DSurface *> *> { struct __tuple_impl<std::__tuple_indices<0, 1>, NSArray<RS3DSurface *> *, NSArray<RS3DSurface *> *> { id x0; id x1; } x0; })updateRecessedAreaPoolAndCurrentFrameWithWalls:(id)a0 windows:(id)a1 openings:(id)a2 doors:(id)a3 opendoors:(id)a4;

@end
