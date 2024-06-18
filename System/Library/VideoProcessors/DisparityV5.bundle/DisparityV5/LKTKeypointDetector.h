@class FigMetalContext;
@protocol MTLComputePipelineState, MTLTexture, MTLBuffer, MTLCommandQueue;

@interface LKTKeypointDetector : NSObject {
    FigMetalContext *_mtlContext;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computePipelines[9];
    unsigned long long _maxThreadExecutionWidth;
    struct CGSize { double width; double height; } _ref_pyr_size[10];
    struct CGSize { double width; double height; } _aux_pyr_size[10];
    id<MTLTexture> _I_tex[2][10];
    struct __CVBuffer { } *_G0_pxbuf;
    struct __CVBuffer { } *_G1_pxbuf;
    id<MTLTexture> _G0_tex[10];
    id<MTLTexture> _G1_tex[10];
    struct __CVBuffer { } *_C0_pxbuf;
    struct __CVBuffer { } *_C1_pxbuf;
    id<MTLTexture> _C0_tex[10];
    id<MTLTexture> _C1_tex[10];
    id<MTLBuffer> _Adiagb_buf[2];
    id<MTLBuffer> _Ixy_buf[2];
    id<MTLBuffer> _idt_buf;
    struct __CVBuffer { } *_w_pxbuf;
    id<MTLTexture> _w_tex[10];
    struct __CVBuffer *_uv_fwd_pxbuf[2];
    struct __CVBuffer *_uv_bwd_pxbuf[2];
    id<MTLTexture> _uv_fwd_tex[2][10];
    id<MTLTexture> _uv_bwd_tex[2][10];
    id<MTLTexture> _uv_fwd_tex_user_ref;
    id<MTLTexture> _uv_bwd_tex_user_ref;
    id<MTLBuffer> _kpt_buf;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } ref_size;
@property (readonly, nonatomic) struct CGSize { double width; double height; } aux_size;
@property (readonly, nonatomic) int nscales;
@property (readonly, nonatomic) int lastScale;
@property (nonatomic) int nwarpings;
@property (readonly, nonatomic) id<MTLTexture> uv_fwd;
@property (readonly, nonatomic) id<MTLTexture> uv_bwd;
@property (readonly, nonatomic) id<MTLBuffer> keypoints;

+ (void)_computeScalingFactor:(id)a0 dst_tex:(id)a1 scale_xy_inv:(void *)a2 coeff:(float *)a3;

- (void)waitUntilCompleted;
- (int)_setupBuffer;
- (void).cxx_destruct;
- (void)_setupPipelines;
- (void)dealloc;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (int)_computeFeaturesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (int)_zeroFlowWithCommandBuffer:(id)a0 uv_tex:(id)a1;
- (void)_setDefaultParameters;
- (int)_createImagePyramidWithCommandBuffer:(id)a0 in_tex:(id)a1 I_idx:(int)a2;
- (int)_doSolverWithCommandBuffer:(id)a0 scale:(int)a1 in_uv_tex:(id)a2 in_G0_tex:(id)a3 in_G1_tex:(id)a4 in_C0_tex:(id)a5 in_C1_tex:(id)a6 out_uv_tex:(id)a7 out_w_tex:(id)a8;
- (int)_downscale2XWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (int)_enqueueFlowConsistencyWithCommandBuffer:(id)a0 in_uv0_tex:(id)a1 in_uv1_tex:(id)a2 out_uv_tex:(id)a3;
- (int)_enqueueKeypointsFromFlowWithCommandBuffer:(id)a0 in_uv_fwd_tex:(id)a1 in_uv_bwd_tex:(id)a2 out_kpt_buf:(id)a3 block_size:(int)a4 bidirectional_error:(float)a5 out_num_keypoints:(unsigned short *)a6;
- (int)_computeOpticalFlowBidirectional;
- (int)computeKeypointsFromForwardFlow:(id)a0 backwardFlow:(id)a1 bidirectionalError:(float)a2 blockSize:(int)a3 outNumKeypoints:(unsigned short *)a4;
- (int)estimateFlowFromReference:(id)a0 target:(id)a1;
- (void)_initMemory:(int)a0 height:(int)a1 nscales:(int)a2 lastScale:(int)a3;
- (id)initWithMetalContext:(id)a0 width:(int)a1 height:(int)a2 nscales:(int)a3 lastScale:(int)a4;

@end
