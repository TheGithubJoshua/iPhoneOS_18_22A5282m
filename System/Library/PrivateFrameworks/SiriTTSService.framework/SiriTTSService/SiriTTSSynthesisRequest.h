@class SiriTTSSynthesisContext, NSString;

@interface SiriTTSSynthesisRequest : SiriTTSBaseRequest <SiriTTSSynthesizingRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ synthesisContext;
@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)init;
- (float)rate;
- (float)volume;
- (void)setVolume:(float)a0;
- (float)pitch;
- (void)setPitch:(float)a0;
- (id)text;
- (void)setRate:(float)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setWhisper:(BOOL)a0;
- (void)setVoice:(id)a0;
- (void)setText:(id)a0;
- (id)voice;
- (BOOL)whisper;
- (void)setContextInfo:(id)a0;
- (id)contextInfo;
- (id)customResourceURLs;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (BOOL)disableCompactVoice;
- (id)initWithText:(id)a0 voice:(id)a1;
- (BOOL)privacySensitive;
- (id)prosodyProperties;
- (void)setCustomResourceURLs:(id)a0;
- (void)setDidGenerateAudio:(id /* block */)a0;
- (void)setDidGenerateWordTimings:(id /* block */)a0;
- (void)setDisableCompactVoice:(BOOL)a0;
- (void)setPrivacySensitive:(BOOL)a0;
- (void)setProsodyProperties:(id)a0;
- (void)setSynthesisProfile:(long long)a0;
- (long long)synthesisProfile;

@end
