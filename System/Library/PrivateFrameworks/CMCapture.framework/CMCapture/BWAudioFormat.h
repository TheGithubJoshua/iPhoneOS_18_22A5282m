@class NSDictionary;

@interface BWAudioFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property (readonly) struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (readonly) NSDictionary *audioCompressionSBPOptions;

+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (void)initialize;
+ (BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)a0;

- (struct opaqueCMFormatDescription { } *)formatDescription;
- (unsigned int)mediaType;
- (id)description;
- (id)debugDescription;
- (void)dealloc;

@end
