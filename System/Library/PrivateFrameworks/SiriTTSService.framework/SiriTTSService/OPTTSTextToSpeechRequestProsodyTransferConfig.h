@class NSString, OPTTSTextToSpeechUserVoiceProfile, OPTTSTextToSpeechSpeechFeatureInputWave, NSMutableDictionary, NSData;

@interface OPTTSTextToSpeechRequestProsodyTransferConfig : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRequestProsodyTransferConfig { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave *wave_data;
@property (readonly, nonatomic) OPTTSTextToSpeechUserVoiceProfile *user_voice_profile;
@property (readonly, nonatomic) NSString *user_voice_profile_url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestProsodyTransferConfig> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequestProsodyTransferConfig { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequestProsodyTransferConfig { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end