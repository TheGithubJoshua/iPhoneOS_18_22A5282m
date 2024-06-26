@class AVAudioFormat;

@interface PHASEExternalInputStreamDefinition : NSObject

@property (readonly, nonatomic) long long streamType;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) unsigned int maximumFrames;
@property (readonly, nonatomic) unsigned int audioSessionToken;

+ (id)new;

- (id)init;
- (void)setFormat:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStreamType:(long long)a0 format:(id)a1 maximumFrames:(unsigned int)a2;
- (id)initWithStreamType:(long long)a0 format:(id)a1 maximumFrames:(unsigned int)a2 audioSessionToken:(unsigned int)a3;
- (void)setMaximumFrames:(unsigned int)a0;

@end
