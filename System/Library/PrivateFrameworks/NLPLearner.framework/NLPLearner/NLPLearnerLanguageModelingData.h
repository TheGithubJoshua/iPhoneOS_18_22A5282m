@class NSString;

@interface NLPLearnerLanguageModelingData : NLPLearnerTextData {
    struct CFScopedPtr<const _LXLexicon *> { struct _LXLexicon *m_ref; } _lexicon;
}

@property (copy, nonatomic) NSString *tokenIDMapPath;

+ (void)initialize;
+ (unsigned long long)defaultMaxSequenceLength;

- (id)initWithLocale:(id)a0;
- (void)addResource:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addExamples:(id)a0;
- (void)addPreprocessedExample:(void *)a0;
- (BOOL)loadFromCoreDuet:(id)a0 limitSamplesTo:(unsigned long long)a1;
- (id)nextEvaluationDataPoint;
- (id)nextTrainingDataBatch:(unsigned long long)a0;

@end
