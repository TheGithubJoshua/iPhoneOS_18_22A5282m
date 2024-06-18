@protocol SNSystemAudioAnalyzerProtocol;

@interface SNSystemAudioAnalyzer : NSObject {
    id<SNSystemAudioAnalyzerProtocol> _impl;
}

+ (void)configureNewAnalyzersToComputeInThisProcess:(BOOL)a0;

- (id)init;
- (void)stop;
- (void)start;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (void)removeAllRequests;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)addRequestInBackground:(id)a0 withObserver:(id)a1;
- (id)initWithAudioConfiguration:(id)a0;

@end
