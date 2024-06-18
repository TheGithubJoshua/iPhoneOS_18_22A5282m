@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject {
    NSMutableDictionary *_requestedPoolSizeByFormat;
    NSMutableDictionary *_pixelBufferPoolByFormat;
}

+ (void)initialize;

- (id)init;
- (void)preparePixelBufferPools;
- (id)pixelBufferPoolForFormat:(id)a0;
- (int)requestPixelBufferPoolForRequirement:(id)a0 size:(unsigned long long)a1;
- (id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)a0;
- (void)dealloc;
- (int)requestPixelBufferPoolForFormat:(id)a0 size:(unsigned long long)a1;

@end
