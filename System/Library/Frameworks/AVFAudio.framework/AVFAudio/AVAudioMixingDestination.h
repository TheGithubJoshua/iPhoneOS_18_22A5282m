@class NSString, AVAudioConnectionPoint;

@interface AVAudioMixingDestination : NSObject <AVAudioMixing> {
    void *_impl;
}

@property (readonly, nonatomic) AVAudioConnectionPoint *connectionPoint;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSourceMode:(long long)a0;
- (id)init;
- (float)pan;
- (float)obstruction;
- (float)rate;
- (struct AVAudioMixingImpl { void /* function */ **x0; struct AVAudioNodeImplBase *x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; struct AVAudio3DPoint { float x0; float x1; float x2; } x9; float x10; float x11; } *)implementation;
- (void)setRenderingAlgorithm:(long long)a0;
- (void)setReverbBlend:(float)a0;
- (void)setPan:(float)a0;
- (float)reverbBlend;
- (id)destinationForMixer:(id)a0 bus:(unsigned long long)a1;
- (void)setRate:(float)a0;
- (long long)renderingAlgorithm;
- (void)setObstruction:(float)a0;
- (id)initWithImpl:(struct AVAudioMixingImpl { void /* function */ **x0; struct AVAudioNodeImplBase *x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; struct AVAudio3DPoint { float x0; float x1; float x2; } x9; float x10; float x11; } *)a0;
- (float)occlusion;
- (long long)pointSourceInHeadMode;
- (void)setPosition:(struct AVAudio3DPoint { float x0; float x1; float x2; })a0;
- (void)dealloc;
- (long long)sourceMode;
- (struct AVAudio3DPoint { float x0; float x1; float x2; })position;
- (void)setOcclusion:(float)a0;
- (void)setPointSourceInHeadMode:(long long)a0;

@end
