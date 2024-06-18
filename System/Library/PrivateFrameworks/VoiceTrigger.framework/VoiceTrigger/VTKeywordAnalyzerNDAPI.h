@class VTNovDetector;

@interface VTKeywordAnalyzerNDAPI : NSObject {
    VTNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
}

@property (nonatomic) unsigned int activePhId;

- (id)getAnalyzedResults;
- (void)_resetStartAnalyzeTime;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (void).cxx_destruct;
- (float)getRejectLoggingThreshold;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (float)getLoggingThreshold;
- (id)getBestAnalyzedResults;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)a0 phId:(unsigned long long)a1;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)reset;
- (float)getThreshold;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)resetBest;
- (void)_processAudioFloatBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (void)_processAudioInt16Buffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResultsFromFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResultsFromInt16AudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getBestAnalyzedResultsFromFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getBestAnalyzedResultsFromInt16AudioBuffer:(id)a0 numSamples:(unsigned long long)a1;

@end
