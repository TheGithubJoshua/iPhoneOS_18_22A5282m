@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}

- (BOOL)canPerformMultiplePasses;
- (void)markAsFinished;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)initWithConfigurationState:(id)a0;
- (void)markCurrentPassAsFinished;
- (long long)status;
- (void)dealloc;
- (id)currentPassDescription;
- (void)stopRequestingMediaData;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (id)initWithWritingHelper:(id)a0;
- (BOOL)shouldRespondToInitialPassDescription;
- (void)startPassAnalysis;

@end
