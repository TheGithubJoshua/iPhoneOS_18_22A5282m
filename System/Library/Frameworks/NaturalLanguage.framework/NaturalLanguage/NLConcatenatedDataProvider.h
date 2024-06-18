@class NSArray;

@interface NLConcatenatedDataProvider : NLDataProvider {
    NSArray *_dataProviders;
}

- (struct __CFStringTokenizer { } *)tokenizer;
- (void).cxx_destruct;
- (id)initWithDataProviders:(id)a0;
- (id)configuration;
- (id)labelMap;
- (id)inverseLabelMap;
- (void)_generateMaps;
- (id)documentFrequencyMap;
- (id)instanceAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)vocabularyMap;

@end
