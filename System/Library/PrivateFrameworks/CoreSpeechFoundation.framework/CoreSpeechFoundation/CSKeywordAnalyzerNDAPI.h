@class CSNovDetector;

@interface CSKeywordAnalyzerNDAPI : NSObject {
    CSNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned int activePhId;

- (id)getAnalyzedResults;
- (void)_resetStartAnalyzeTime;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (void).cxx_destruct;
- (float)getRejectLoggingThreshold;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (float)getLoggingThreshold;
- (id)getAnalyzedResultsFromAudioChunk:(id)a0;
- (id)getBestAnalyzedResultsFromAudioChunk:(id)a0;
- (id)getBestAnalyzedResults;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)a0 phId:(unsigned long long)a1;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)_processAudioChunk:(id)a0;
- (void)reset;
- (float)getThreshold;
- (void)processAudioChunk:(id)a0;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)resetBest;

@end
