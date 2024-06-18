@class CSAudioCircularBuffer, SSRTriggerPhraseDetectorNDAPI;

@interface CSVTUIKeywordDetector : NSObject {
    SSRTriggerPhraseDetectorNDAPI *_keywordAnalyzer;
    float _lastKeywordScore;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
}

- (unsigned long long)_sampleLengthFrom:(unsigned int)a0 To:(unsigned int)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)analyze:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)triggeredUtterance:(id)a0;

@end
