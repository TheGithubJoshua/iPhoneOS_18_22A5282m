@interface VTNovDetector : NSObject {
    void *_novDetect;
}

- (id)getAnalyzedResultForPhId:(unsigned int)a0;
- (id)getOptionValue:(id)a0;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (unsigned int)numResultsAvailable;
- (id)getBestAnalyzedResult;
- (void)dealloc;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (id)_getAnalyzedResultFromNdresult:(struct _ndresult { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; } *)a0;
- (void)reset;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)resetBest;

@end
