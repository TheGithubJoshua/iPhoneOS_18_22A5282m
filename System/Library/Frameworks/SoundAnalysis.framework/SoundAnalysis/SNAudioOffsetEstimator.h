@class NSString;

@interface SNAudioOffsetEstimator : NSObject <SNAnalyzing> {
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    double _offset;
    double _minimumObservableOffset;
    double _maximumObservableOffset;
}

@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;

@end