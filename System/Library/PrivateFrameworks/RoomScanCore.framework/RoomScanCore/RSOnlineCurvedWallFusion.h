@interface RSOnlineCurvedWallFusion : NSObject {
    struct vector<RSOnlineCurvedWall, std::allocator<RSOnlineCurvedWall>> { struct RSOnlineCurvedWall *__begin_; struct RSOnlineCurvedWall *__end_; struct __compressed_pair<RSOnlineCurvedWall *, std::allocator<RSOnlineCurvedWall>> { struct RSOnlineCurvedWall *__value_; } __end_cap_; } _curved_walls_pool;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)runWithFloorPlan:(id)a0 lmap:(const void *)a1 geometryMeta:(id)a2 temporalMeta:(id)a3;
- (id)snapWallsWithFloorPlan:(id)a0 lmap:(SEL)a1 shift:(id)a2 scale:(const void *)a3 imageSize:(int)a4;

@end
