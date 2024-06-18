@class NSMutableDictionary;

@interface BWMattingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_metadataDictionaryByRequirement;
}

+ (void)initialize;

- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferSatisfyingRequirement:(id)a0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)dealloc;
- (void)setDictionary:(id)a0 forMetadataRequirement:(id)a1;

@end
