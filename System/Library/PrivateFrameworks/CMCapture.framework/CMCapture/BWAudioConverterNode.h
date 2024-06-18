@class NSDictionary;

@interface BWAudioConverterNode : BWNode {
    NSDictionary *_settings;
    struct OpaqueFigSampleBufferProcessor { } *_audioCompressionSBP;
}

@property (readonly, nonatomic) NSDictionary *gaplessPlaybackInfo;

+ (void)initialize;

- (id)init;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (id)settings;
- (id)nodeSubType;
- (void)setSettings:(id)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)acquireHardware;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)relinquishHardware;
- (void)dealloc;

@end
