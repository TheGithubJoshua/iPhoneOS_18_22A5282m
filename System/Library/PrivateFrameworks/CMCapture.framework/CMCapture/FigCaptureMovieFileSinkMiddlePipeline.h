@class BWFanOutNode, FigCaptureMovieFileSinkHeadPipeline, FigCaptureVISPipeline, BWOverCaptureFanOutNode, NSMutableArray;

@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline {
    BWFanOutNode *_videoFanOut;
    BWOverCaptureFanOutNode *_audioFanOut;
    NSMutableArray *_metadataFanOuts;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    unsigned long long _numberOfTailsToSupport;
}

@property (readonly, nonatomic) FigCaptureVISPipeline *visPipeline;
@property (readonly, nonatomic) FigCaptureVISPipeline *overCaptureVISPipeline;

- (id)audioOutputForTailIndex:(unsigned long long)a0;
- (id)videoOutputForTailIndex:(unsigned long long)a0;
- (id)initWithConfiguration:(id)a0 graph:(id)a1 parentPipeline:(id)a2 headPipeline:(id)a3 captureDevice:(id)a4 workgroup:(id)a5;
- (void)dealloc;
- (id)metadataOutputsForTailIndex:(unsigned long long)a0;

@end
