@class NSString, AVAudioSessionMediaPlayerOnlyInternal;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnly : NSObject {
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}

@property id<AVAudioSessionDelegateMediaPlayerOnly> delegate;
@property (readonly) NSString *category;
@property (readonly) NSString *mode;
@property (readonly) double preferredHardwareSampleRate;
@property (readonly) double preferredIOBufferDuration;
@property (readonly) BOOL inputIsAvailable;
@property (readonly) double currentHardwareSampleRate;
@property (readonly) long long currentHardwareInputNumberOfChannels;
@property (readonly) long long currentHardwareOutputNumberOfChannels;
@property (readonly) BOOL canEnterPIPMode;

+ (void)initialize;

- (id)init;
- (id)_weakReference;
- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (BOOL)setMode:(id)a0 error:(id *)a1;
- (BOOL)isApplicationAudioSession;
- (BOOL)setPreferredIOBufferDuration:(double)a0 error:(id *)a1;
- (BOOL)setActivationContext:(id)a0 error:(id *)a1;
- (BOOL)setPreferredHardwareSampleRate:(double)a0 error:(id *)a1;
- (BOOL)setActive:(BOOL)a0 withFlags:(long long)a1 error:(id *)a2;
- (void)_attachToPlayer:(id)a0;
- (BOOL)setCategory:(id)a0 error:(id *)a1;
- (void)setApplicationAudioSession:(BOOL)a0;
- (BOOL)setUsingLongFormAudio:(BOOL)a0 error:(id *)a1;
- (void)_removeFPListeners;
- (void)dealloc;
- (void)_addFPListeners;

@end
