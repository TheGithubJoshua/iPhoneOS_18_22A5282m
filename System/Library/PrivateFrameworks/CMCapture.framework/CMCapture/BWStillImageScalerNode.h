@class BWPixelBufferPool, NSMutableDictionary, BWVideoFormat;

@interface BWStillImageScalerNode : BWNode {
    BWVideoFormat *_outputFormat;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolCapacity;
    BWPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession { } *_scalingSession;
    BOOL _blackFillingRequired;
    NSMutableDictionary *_mainImageDownscalingFactorByAttachedMediaKey;
    NSMutableDictionary *_pixelBufferPoolByAttachedMediaKey;
    NSMutableDictionary *_preparedVideoFormatByAttachedMediaKey;
    struct OpaqueVTPixelTransferSession { } *_attachedMediaScalingSession;
    struct { int width; int height; } _resizedOutputDimensions;
}

@property (nonatomic) struct { int x0; int x1; } resizedOutputDimensions;

+ (void)initialize;

- (id)init;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)blackFillingRequired;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (id)nodeType;
- (id)nodeSubType;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithPoolCapacity:(int)a0;
- (void)dealloc;
- (void)setBlackFillingRequired:(BOOL)a0;

@end
