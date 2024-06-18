@class AVAudioFile, NSString, NSURL, AVAudioPCMBuffer;

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding> {
    AVAudioFile *_audioFile;
    AVAudioPCMBuffer *_audioBuffer;
    NSURL *_audioURL;
    NSString *_audioName;
    BOOL _loaded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPositional) BOOL positional;
@property (nonatomic) float volume;
@property (nonatomic) float rate;
@property (nonatomic) float reverbBlend;
@property (nonatomic) BOOL loops;
@property (nonatomic) BOOL shouldStream;

+ (id)audioSourceNamed:(id)a0;
+ (id)audioSourceWithAVAudioPCMBuffer:(id)a0;

- (void)load;
- (void)_load;
- (id)fileName;
- (id)initWithCoder:(id)a0;
- (void)loadIfNeeded;
- (id)initWithURL:(id)a0;
- (id)copy;
- (id)audioBuffer;
- (long long)renderingAlgorithm;
- (void)encodeWithCoder:(id)a0;
- (double)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)audioFile;
- (id)initWithFileNamed:(id)a0;
- (void)_customDecodingOfSCNAudioSource:(id)a0;
- (void)_customEncodingOfSCNAudioSource:(id)a0;
- (void)_loadURLWithBundle:(id)a0;
- (id)audioBufferFormat;
- (id)initWithAVAudioPCMBuffer:(id)a0;
- (id)initWithFileNamed:(id)a0 inBundle:(id)a1;

@end
