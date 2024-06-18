@class RSFloorPlan, __end_cap_, RS3DSurface, __end_;

@interface RSWallOpeningOnlineOptimizer : NSObject {
    BOOL _isActiveWallEnabled;
    struct RSOnlineRefinement { void /* function */ **_vptr$RSOnlineRefinement; struct Tensor<int, 3UL> { void /* function */ **_vptr$Tensor; struct Inside_View<3UL> { struct Shape<3UL> { unsigned long long _sp[6]; } _shape_of_view; struct Shape<3UL> { unsigned long long _sp[6]; } _stride_of_view; unsigned long long _length_of_view; unsigned long long _offset_of_view; } _view; struct shared_ptr<wt::Storage<int>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _storage; BOOL _is_contiguous; BOOL _is_empty; int *_buffer_head; } _search_range_7; struct Tensor<int, 3UL> { void /* function */ **_vptr$Tensor; struct Inside_View<3UL> { struct Shape<3UL> { unsigned long long _sp[6]; } _shape_of_view; struct Shape<3UL> { unsigned long long _sp[6]; } _stride_of_view; unsigned long long _length_of_view; unsigned long long _offset_of_view; } _view; struct shared_ptr<wt::Storage<int>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _storage; BOOL _is_contiguous; BOOL _is_empty; int *_buffer_head; } _search_range_3; struct optional<rs_ol::RS3DSurfaceOnline> { union { char __null_state_; struct RS3DSurfaceOnline { void /* function */ **_vptr$RS3DSurfaceOnline; RS3DSurface *surface; struct RSLine2D { void /* function */ **_vptr$RSLine2D; void /* unknown type, empty encoding */ pt[2]; } line_2d; struct RSLine3D { void /* function */ **_vptr$RSLine3D; void /* unknown type, empty encoding */ pt[2]; } line_3d; float floor_height; float ceiling_height; float height; BOOL visible; BOOL visible_buffer; float major_dist; float major_angle; int transition_status; int first_appear_frame; int last_appear_frame; int non_match_count; int non_match_shorten_count; int debug_idx; int wall_type; int standalone_opening_count; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _uuid; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _parrent_uuid; } __val_; } ; BOOL __engaged_; } _fitting_lines; struct ONLINE_REFINE_CONFIG { int density_index; float slice_threshold; float min_slice_num; float min_wall_length; float min_density; float zslice_density_threshold; float major_small_wall_length_th; } _config; struct ONLINE_CONFIG { float major_fov_angle_thres; float major_fov_angle_thres_buffer; float dist_thres; float iou_thres; float angle_thres; float angle_thres_for_small_walls; float small_wall_length_thres; float corner_dist_thres; float overlap_angle_thres; float overlap_dist_thres; float overlap_iou_thres; float acute_angle_thres; float shorten_len_thr; float one_vs_two_shorten_len_thr; int shorten_non_match_thr; float iou_thres_opening; int standalone_opening_thr; float hold_score_thres; float hold_small_wall_length_thres; float opening_checking_range; float opening_checking_thres; float opening_checking_occlusion_range; float min_length_thres; float parallel_angle_epsilon; float dup_dist_thr; float dup_angle_thr; float dup_iou_thr; float curved_wall_early_stop_score_thr; float low_conf_wall_score_thr; int low_conf_wall_non_match_thr; } _online_config; } _online_refinement;
    struct RSOnlineFusion { void /* function */ **_vptr$RSOnlineFusion; struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _camera_positions; struct RSFloorPlanOnline { void /* function */ **_vptr$RSFloorPlanOnline; struct vector<rs_ol::RS3DSurfaceOnline, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__begin_; struct RS3DSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RS3DSurfaceOnline *, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__value_; } __end_cap_; } walls; struct vector<rs_ol::RS3DSurfaceOnline, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__begin_; struct RS3DSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RS3DSurfaceOnline *, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__value_; } __end_cap_; } openings; struct vector<rs_ol::RS3DSurfaceOnline, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__begin_; struct RS3DSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RS3DSurfaceOnline *, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__value_; } __end_cap_; } windows; struct vector<rs_ol::RS3DSurfaceOnline, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__begin_; struct RS3DSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RS3DSurfaceOnline *, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__value_; } __end_cap_; } doors; struct vector<rs_ol::RS3DSurfaceOnline, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__begin_; struct RS3DSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RS3DSurfaceOnline *, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__value_; } __end_cap_; } open_doors; struct vector<rs_ol::RS3DSurfaceOnline, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__begin_; struct RS3DSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RS3DSurfaceOnline *, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__value_; } __end_cap_; } door_panels; struct vector<RS3DCurvedSurface *, std::allocator<RS3DCurvedSurface *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<RS3DCurvedSurface *__strong *, std::allocator<RS3DCurvedSurface *>> { id *__value_; } x1; } curved_circles; struct RSStructureGraph { void /* function */ **_vptr$RSStructureGraph; struct vector<rs_ol::RSStructure *, std::allocator<rs_ol::RSStructure *>> { struct RSStructure **__begin_; struct RSStructure **__end_; struct __compressed_pair<rs_ol::RSStructure **, std::allocator<rs_ol::RSStructure *>> { struct RSStructure **__value_; } __end_cap_; } _structures; } structure_graph; struct RS3DSurfaceOnline { void /* function */ **_vptr$RS3DSurfaceOnline; RS3DSurface *surface; struct RSLine2D { void /* function */ **_vptr$RSLine2D; void /* unknown type, empty encoding */ pt[2]; } line_2d; struct RSLine3D { void /* function */ **_vptr$RSLine3D; void /* unknown type, empty encoding */ pt[2]; } line_3d; float floor_height; float ceiling_height; float height; BOOL visible; BOOL visible_buffer; float major_dist; float major_angle; int transition_status; int first_appear_frame; int last_appear_frame; int non_match_count; int non_match_shorten_count; int debug_idx; int wall_type; int standalone_opening_count; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _uuid; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _parrent_uuid; } _empty; struct vector<rs_ol::RS3DSurfaceOnline, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__begin_; struct RS3DSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RS3DSurfaceOnline *, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__value_; } __end_cap_; } _empty_lists; } _online_floorplan_last; struct ONLINE_CONFIG { float major_fov_angle_thres; float major_fov_angle_thres_buffer; float dist_thres; float iou_thres; float angle_thres; float angle_thres_for_small_walls; float small_wall_length_thres; float corner_dist_thres; float overlap_angle_thres; float overlap_dist_thres; float overlap_iou_thres; float acute_angle_thres; float shorten_len_thr; float one_vs_two_shorten_len_thr; int shorten_non_match_thr; float iou_thres_opening; int standalone_opening_thr; float hold_score_thres; float hold_small_wall_length_thres; float opening_checking_range; float opening_checking_thres; float opening_checking_occlusion_range; float min_length_thres; float parallel_angle_epsilon; float dup_dist_thr; float dup_angle_thr; float dup_iou_thr; float curved_wall_early_stop_score_thr; float low_conf_wall_score_thr; int low_conf_wall_non_match_thr; } _online_config; struct ONLINE_STRUCTURE_CONFIG { float z_shape_min_len; float z_shape_max_len; float w_shape_min_len; float w_shape_max_len; } _structure_config; struct RSTmOnlineTMScoreHelper { void /* function */ **_vptr$RSTmOnlineTMScoreHelper; } _tm_helper; struct RSLocalStandardization { void /* function */ **_vptr$RSLocalStandardization; struct ONLINE_STANDARDIZATION_CONFIG { float large_wall_len_thr; float small_wall_len_thr; float noise_wall_len_thr; float angle_thr; float noise_wall_angle_thr; float angle_eps; float anchor_wall_len_factor; float corner_dist_thr; } _online_std_config; struct ONLINE_CONFIG { float major_fov_angle_thres; float major_fov_angle_thres_buffer; float dist_thres; float iou_thres; float angle_thres; float angle_thres_for_small_walls; float small_wall_length_thres; float corner_dist_thres; float overlap_angle_thres; float overlap_dist_thres; float overlap_iou_thres; float acute_angle_thres; float shorten_len_thr; float one_vs_two_shorten_len_thr; int shorten_non_match_thr; float iou_thres_opening; int standalone_opening_thr; float hold_score_thres; float hold_small_wall_length_thres; float opening_checking_range; float opening_checking_thres; float opening_checking_occlusion_range; float min_length_thres; float parallel_angle_epsilon; float dup_dist_thr; float dup_angle_thr; float dup_iou_thr; float curved_wall_early_stop_score_thr; float low_conf_wall_score_thr; int low_conf_wall_non_match_thr; } _online_config; } _local_standardization; struct vector<rs_ol::RSCurvedSurfaceOnline, std::allocator<rs_ol::RSCurvedSurfaceOnline>> { struct RSCurvedSurfaceOnline *__begin_; struct RSCurvedSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RSCurvedSurfaceOnline *, std::allocator<rs_ol::RSCurvedSurfaceOnline>> { struct RSCurvedSurfaceOnline *__value_; } __end_cap_; } _curved_walls; struct vector<RS3DCurvedSurface *, std::allocator<RS3DCurvedSurface *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<RS3DCurvedSurface *__strong *, std::allocator<RS3DCurvedSurface *>> { id *__value_; } x1; } _online_curved_segments; struct ONLINE_CURVED_CONFIG { float minDist; int param1; int param2; float minRadius; float maxRadius; float density_thres; float angle_thres; float length_thres; int kernel_size; float iou_thr; float min_iou_thr; float dist_thr; float inner_line_tol; float inner_circle_tol; float intersect_tol; int segment_type; float segment_angle; float segment_length; float direction_change_eps; float reuse_uuid_iou_thr; float reuse_uuid_dist_thr; float reuse_uuid_angle_thr; } _online_curved_wall_config; BOOL _need_curved_wall_process; struct vector<rs_ol::RS3DSurfaceOnline, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__begin_; struct RS3DSurfaceOnline *__end_; struct __compressed_pair<rs_ol::RS3DSurfaceOnline *, std::allocator<rs_ol::RS3DSurfaceOnline>> { struct RS3DSurfaceOnline *__value_; } __end_cap_; } _historical_low_conf_walls; } _online_fusion;
    RSFloorPlan *_prevFloorPlan;
    struct TracingMap { void /* function */ **_vptr$TracingMap; float _voxel_sz; struct unordered_map<unsigned long long, bool, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, bool>>> { struct __hash_table<std::__hash_value_type<unsigned long long, bool>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, bool>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, bool>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, bool>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, bool>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, bool>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _values; } _tracing_map;
    struct ONLINE_CONFIG { float major_fov_angle_thres; float major_fov_angle_thres_buffer; float dist_thres; float iou_thres; float angle_thres; float angle_thres_for_small_walls; float small_wall_length_thres; float corner_dist_thres; float overlap_angle_thres; float overlap_dist_thres; float overlap_iou_thres; float acute_angle_thres; float shorten_len_thr; float one_vs_two_shorten_len_thr; int shorten_non_match_thr; float iou_thres_opening; int standalone_opening_thr; float hold_score_thres; float hold_small_wall_length_thres; float opening_checking_range; float opening_checking_thres; float opening_checking_occlusion_range; float min_length_thres; float parallel_angle_epsilon; float dup_dist_thr; float dup_angle_thr; float dup_iou_thr; float curved_wall_early_stop_score_thr; float low_conf_wall_score_thr; int low_conf_wall_non_match_thr; } _online_config;
    struct Tensor<__fp16, 2UL> { void /* function */ **_vptr$Tensor; struct Inside_View<2UL> { struct Shape<2UL> { unsigned long long _sp[6]; } _shape_of_view; struct Shape<2UL> { unsigned long long _sp[6]; } _stride_of_view; unsigned long long _length_of_view; unsigned long long _offset_of_view; } _view; struct shared_ptr<wt::Storage<__fp16>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _storage; BOOL _is_contiguous; BOOL _is_empty; void /* unknown type, blank encoding */ *_buffer_head; } _density_map;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)runWithFloorPlan:(id)a0 pointCloud:(id)a1 temporalMeta:(id)a2 geometryMeta:(id)a3 semanticImage:(id)a4 doorImage:(id)a5 maxDensity:(float)a6 lmap:(const void *)a7;

@end