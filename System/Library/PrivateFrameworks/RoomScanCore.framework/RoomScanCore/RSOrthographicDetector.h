@class NSArray, NSMutableArray;

@interface RSOrthographicDetector : NSObject {
    struct __CVBuffer { } *_semanticMapBuffer;
    void /* unknown type, blank encoding */ *_semanticMap;
    struct __IOSurface { } *_ioSurface;
    struct __CVBuffer *_logitsMapBuffers[6];
    struct __CVBuffer *_offsetsMapBuffers[6];
    struct __IOSurface *_logitsMapIoSurfaces[6];
    struct __IOSurface *_offsetsMapIoSurfaces[6];
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _logitsMap;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _offsetsMap;
    void *_ctx;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    float _scale;
    float _shift;
    float _defaultBoxSizes[6][20][2];
    struct vector<std::vector<std::vector<std::vector<std::vector<float>>>>, std::allocator<std::vector<std::vector<std::vector<std::vector<float>>>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<std::vector<std::vector<std::vector<float>>>> *, std::allocator<std::vector<std::vector<std::vector<std::vector<float>>>>>> { void *__value_; } __end_cap_; } _anchorBoxes;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _softmaxBuffer;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _importantClasses;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _defaultBoxStrides;
    NSArray *_boxes;
    NSMutableArray *_windows;
    NSMutableArray *_doors;
    NSMutableArray *_openings;
    NSMutableArray *_opendoors;
    const float *_filterThresholds;
    BOOL _isOnline;
}

@property (nonatomic) BOOL normalizedOutput;

- (id)init;
- (id)nmsBoxes:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)postprocess;
- (void)dealloc;
- (id)filterBoxes:(id)a0;
- (BOOL)isValidOpening:(id)a0;
- (void)generateAnchors;
- (BOOL)isValidSurface:(id)a0;
- (id)clipBoxes:(id)a0;
- (void)cutOverlap:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 withIntersecRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withUnionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (float)detectDepthOnSurface:(id)a0 withPointCloud:(id)a1;
- (id)detectWithPointCloud:(id)a0 walls:(id)a1 lcnnOpenings:(id)a2;
- (id)detectWithPointCloud:(id)a0 walls:(id)a1 lcnnOpenings:(id)a2 isOnline:(BOOL)a3;
- (id)extendSurface:(id)a0 byLength:(float)a1;
- (void)infer;
- (void)normalizeSizesOfSurfaces:(id)a0 withLowerWidthThreshold:(float)a1 higherWidthThreshold:(float)a2;
- (id)parseNetOut;
- (id)postprocessWithNetInput:(id)a0;
- (void)preprocessOnSurface:(id)a0 withPointCloud:(id)a1;
- (BOOL)projectDetectBoxesTo3dOnSurface:(id)a0 withPointCloud:(id)a1;
- (id)removeMultiDetectionAcrossClassesWithOverlap:(id)a0;
- (id)removeMultiDetectionAcrossClassesWithOverlapOffline:(id)a0;
- (void)removeOpenDoorPanelFp;
- (id)removeOpenDoorPanelFpWithOpenDoors:(id)a0 andCloseDoors:(id)a1;
- (void)runPipelineOnSurface:(id)a0 withPointCloud:(id)a1;

@end
